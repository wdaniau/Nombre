#ifndef NOMBRE_H
#define NOMBRE_H

#include<QString>

class Nombre
{
public:
    Nombre();
    Nombre(double v);
    Nombre(double v, QString n);
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
