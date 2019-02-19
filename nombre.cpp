#include "nombre.h"

Nombre::Nombre()
{
    valeur=0.0;
    nom="";
}

Nombre::Nombre(double v) {
    valeur=v;
    nom="";
}

Nombre::Nombre(double v, string n) {
    valeur=v;
    nom=n;
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

void Nombre::setNom(string n) {
    nom = n;
}

string Nombre::getNom() {
    return nom;
}
