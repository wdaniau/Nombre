#ifndef NOMBRE_H
#define NOMBRE_H


class Nombre
{
public:
    Nombre();
    Nombre(double v);
    void setV(double v);
    double getV();
    double carre();

private:
    double valeur;
};

#endif // NOMBRE_H
