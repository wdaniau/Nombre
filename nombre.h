#ifndef NOMBRE_H
#define NOMBRE_H
#include <cstring>
#include <cstdlib>

class Nombre
{
public:
    Nombre();
    ~Nombre();
    Nombre(double v);
    Nombre(double v, const char* n);
    void setV(double v);
    double getV();
    double carre();
    void setNom(const char* n);
    char* getNom();

private:
    double valeur;
    char* nom=NULL;
};

#endif // NOMBRE_H
