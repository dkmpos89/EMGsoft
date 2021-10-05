#ifndef ATRIBUTO_H
#define ATRIBUTO_H

#include <QObject>

class Atributo
{
public:
    explicit Atributo();
    Atributo(QString k, QString v);
    QString getKey() const;
    void setKey(const QString &value);

    QString getValue() const;
    void setValue(const QString &value);

    QString toString();
private:
    QString clave;
    QString valor;
};

#endif // ATRIBUTO_H
