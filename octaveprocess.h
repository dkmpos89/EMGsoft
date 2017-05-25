/*****




******/
#ifndef OCTAVEPROCESS_H
#define OCTAVEPROCESS_H

#include <QProcess>

class OctaveProcess : public QProcess
{
  Q_OBJECT
public:
  enum buttonPressed { ButtonLeft, ButtonRight, Unknow };

  static OctaveProcess* getInstance();
  ~OctaveProcess();
  bool getState() const;
  QStringList getBuffer() const;
  void setState( bool m_state );

  bool init();
  void writeCmd(const QString);
  void writeCmd2(const QString);
  void send(const QString s);

  void separateData(QString& buffer);

protected slots:

  void readOctaveOutput();
  void readOctaveOutput2();

signals:

  void finalDataReady();
  void finalDataReady2();
  void cmdEmpty();

private:
  explicit OctaveProcess(QObject* parent = 0);
  void cleanIt(QString& str);
  void cleanIt2(QString& str);
  static OctaveProcess* Singleton;
  QStringList m_salida;
  QString m_buffer;
  bool m_state;

};

#endif // OCTAVEPROCESS_H
