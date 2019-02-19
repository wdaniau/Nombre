#ifndef NOMBRE_H
#define NOMBRE_H

#include<QString>
#include<QObject>

class Nombre : public QObject
{
#ifndef SWIG    
    Q_OBJECT
#endif    
public:
    Nombre(QObject* parent=0);
    Nombre(double v,QObject* parent=0);
    Nombre(double v, QString n,QObject* parent=0);
    void setV(double v);
    double getV();
    double carre();
    void setNom(QString n);
    QString getNom();

private:
    double valeur;
    QString nom;
};

#endif // NOMBRE_H
