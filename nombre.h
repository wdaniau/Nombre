#ifndef NOMBRE_H
#define NOMBRE_H

#include <string>
using namespace std;

class Nombre
{
public:
    Nombre();
    Nombre(double v);
    Nombre(double v, string n);
    void setV(double v);    
    double getV();
    double carre();
    void setNom(string n);
    string getNom();
    
private:
    double valeur;
    string nom;
};

#endif // NOMBRE_H
