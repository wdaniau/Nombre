#include "nombre.h"

Nombre::Nombre()
{
    valeur=0.0;
}

Nombre::Nombre(double v) {
    valeur=v;
}

void Nombre::setV(double v) {
    valeur=v;
}

double Nombre::getV() {
    return valeur;
}

double Nombre::carre() {
    return valeur*valeur;
}

