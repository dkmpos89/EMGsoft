/*******************************************************************************
 * @name : OctaveProcess
 * @brief: this class implements the comunication of main application with the
 * octave application, this is posible thought of QProcess inherit. This class
 * implements the pattern design "Singleton" for ensure a only instance.
 *
 * ****************************************************************************/

#include "octaveprocess.h"
#include <QDebug>
#include <QRegularExpression>
#include <iostream>
#include <QDir>


const QString OCTAVE_BIN = QString("octave-cli");
const QString WORKING_DIR = QString("'"+QDir::currentPath()+"/scripts'\n");
const QStringList ARGUMENTS = ( QStringList()<<"-q"<<"-i" );

//static member
OctaveProcess* OctaveProcess::Singleton = nullptr;


// 3x3 Matrix
// QVector<QVector<double> >(3, QVector<double>(3, 0.0));
/*******************************************************************************
 * @name   : OctaveProcess
 * @brief  : class constructor.
 * @param  : QObject -> parent windows (default = 0)
 * @return : none
 * ****************************************************************************/
OctaveProcess::OctaveProcess(QObject* parent) : QProcess(parent)
{
    m_salida = QStringList();
    m_state = true;
}

void OctaveProcess::cleanIt(QString &str){

    str = str.simplified();                 //transforma caracteres extraños a vacios
    str=str.trimmed();                      //delete vacios en principio y final
    str.replace("ans","");
    str.replace("=","");

}

void OctaveProcess::cleanIt2(QString &str){

    str = str.simplified();                 //transforma caracteres extraños a vacios
    str=str.trimmed();                      //delete vacios en principio y final
    str.replace("norm","");
    str.replace("energy","");
    str.replace("rms","");
    str.replace("ans","");
    str.replace("=","");
}
/*******************************************************************************
 * @name   : init
 * @brief  : Set fields of Qprocess and Launch Octave in a fork independent.
 * @param  : none
 * @return : bool, exit status
 * ****************************************************************************/
bool OctaveProcess::init()
{

    //QByteArray WORKING_DIR = ;

    this->setProcessChannelMode( QProcess::SeparateChannels );
    this->start(OCTAVE_BIN, ARGUMENTS, QProcess::ReadWrite);
    this->waitForStarted(5000);
    //this->setWorkingDirectory( WORKING_DIR );

    if( this->state() == QProcess::Running ){
        qInfo()<< "[Info] Octave daemon running with PID " << this->pid() <<endl;
        this->write("cd "+WORKING_DIR.toUtf8());
        this->write("pkg load signal\n");
        this->write("pkg load ltfat\n");
        return true;
    }
    else{
        qInfo()<< "[Info] : Octave daemon is not running " << endl;
        return false;
    }
}


/*******************************************************************************
 * @name   : writeCmd
 * @brief  : send the instruction for running in Octave.
 * @param  : const QString cmd -> instruction
 * @return : none
 * ****************************************************************************/
void OctaveProcess::writeCmd(const QString cmd) {

    QByteArray ba = this->readAll();//clean stdout
    Q_UNUSED(ba);
    connect( this, SIGNAL( readyReadStandardOutput() ), this, SLOT( readOctaveOutput() ) );
    this->write(cmd.toUtf8());
}

/*******************************************************************************
 * @name   : writeCmd2
 * @brief  : send the instruction for running in Octave, normalize the signal
 * @param  : const QString cmd -> instruction
 * @return : none
 * ****************************************************************************/
void OctaveProcess::writeCmd2(const QString cmd) {

    QByteArray ba = this->readAll();//clean stdout
    Q_UNUSED(ba);

    connect( this, SIGNAL( readyReadStandardOutput() ), this, SLOT( readOctaveOutput2() ) );
    this->write(cmd.toUtf8());
}

/*******************************************************************************
 * @name   : readOctaveOutput
 * @brief  : capture the buffer of stdout and filter and clean it, after is
 *           append in the local buffer.
 * @return : none
 * ****************************************************************************/
void OctaveProcess::readOctaveOutput() {

  //qDebug()<<"readoctaveoutput";

    QString buff = QString( this->readAll() );

    if( buff.isEmpty() || buff.isNull() ){
        return;
    }

    cleanIt( buff );

    QStringList qs = buff.split( QRegExp("\\s+") );
    m_salida.append( qs );


    if(qs.contains("fin"))
    {
    //if( m_salida.last() == "octave:3>" || m_salida.last() == ">>" || m_salida.last() == "fin") {

        qDebug()<< "[C: OctaveProcess.cpp] Sale del ciclo de lectura: "<<m_salida.last()<<endl;
        disconnect(this, SIGNAL(readyReadStandardOutput()), this, SLOT(readOctaveOutput()));
        m_salida.pop_front();            //saco el primer caracter
        m_salida.pop_back();             //saco el ultimo caracter
        emit finalDataReady();
    }
}


/*******************************************************************************
 * @name   : readOctaveOutput2
 * @brief  : capture the buffer of stdout and filter and clean it, after is
 *           append in the local buffer for normalize the signal.
 * @return : none
 * ****************************************************************************/
void OctaveProcess::readOctaveOutput2(){

  //qDebug()<<"readoctaveoutput";

    QString buff = QString( this->readAll() );

    if( buff.isEmpty() || buff.isNull() ){
        std::cout<<"buff is empty or is null, return";
        return;
    }

    cleanIt( buff );

    m_buffer.append(buff);

    if( buff.contains("fin") )
    {
    //if( m_salida.last() == "octave:3>" || m_salida.last() == ">>" || m_salida.last() == "fin") {

        qDebug()<< "[C: OctaveProcess.cpp] Sale del ciclo de lectura: "<<endl;
        disconnect(this, SIGNAL(readyReadStandardOutput()), this, SLOT(readOctaveOutput2()));
        separateData(m_buffer);
    }
}

void OctaveProcess::separateData(QString& buffer){

    //encontrar indices de la primera y ultima ocurrencia de rms,energy,norm
    //dividir los stream en 3
    //luego limpiar lo caracteres extraños
    //concatenar con el caracter # los 3 streams y almacenarlo en el buffer para
    //posterior lectura
    QString left, right, middle;
    int an = buffer.lastIndexOf("rms");
    int b = buffer.length() - buffer.indexOf("norm");
    int c = buffer.indexOf("energy");
    left = buffer.left( an );
    right = buffer.right( b );
    middle = buffer.mid(c, (b-c));
    buffer.clear();
    cleanIt2(left);
    cleanIt2(middle);
    cleanIt2(right);

    QStringList qs = left.split( QRegExp("\\s+") );
    QStringList qs1 = middle.split( QRegExp("\\s+") );
    QStringList qs2 = right.split( QRegExp("\\s+") );
    m_salida.append( qs );
    m_salida.append("#");
    m_salida.append( qs1 );
    m_salida.append("#");
    m_salida.append(qs2);

    m_salida.pop_front();            //saco el primer caracter
    m_salida.pop_back();             //saco el ultimo caracter
    emit finalDataReady2();
}

/*******************************************************************************
 * @name   : getInstance
 * @brief  : if instance not exist, this create it else return the instance.
 *           This function is static for the singleton pattern.
 * @return : pointer instance to the class
 * ****************************************************************************/
OctaveProcess* OctaveProcess::getInstance() {

    if( Singleton == nullptr )
        Singleton = new OctaveProcess();

    return Singleton;
}


/*******************************************************************************
 * @name   : ~OctaveProcess
 * @brief  : Destructor of the class.
 * @return : none
 * ****************************************************************************/
OctaveProcess::~OctaveProcess()
{
    Singleton->close();
    delete Singleton;
    qDebug()<<"destruido el daemon";
}

bool OctaveProcess::getState() const{
    return this->m_state;
}

QStringList OctaveProcess::getBuffer() const{
    return this->m_salida;
}

void OctaveProcess::setState(bool m_state){
    this->m_state = m_state;
    if( this->m_state )
    {
        this->m_salida.clear();
        //this->m_buffer = QString();
        disconnect(this, SIGNAL(readyReadStandardOutput()), this, SLOT(readOctaveOutput()));
        //disconnect(this, SIGNAL(readyReadStandardOutput()), this, SLOT(readOctaveOutput2()));
    }


}



/*******************************************************************************
 * @name   : send
 * @brief  : send the instruction for running in Octave.
 * @param  : const QString s-> instruction
 * @return : none
 * ****************************************************************************/
void OctaveProcess::send(const QString s) {

    QByteArray ba = this->readAll();//clean stdout
    Q_UNUSED(ba);

    this->write(s.toUtf8());

    this->waitForReadyRead(30000);

    QString buff = QString( this->readAll() );

    qDebug()<<buff<<endl;
}
