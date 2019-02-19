#include "nombre.h"

Nombre::Nombre()
{
    valeur=0.0;
    setNom("");
}

Nombre::Nombre(double v) {
    valeur=v;
    setNom("");
}

Nombre::Nombre(double v, const char *n) {
    valeur=v;
    setNom(n);
}

Nombre::~Nombre() {
    if (nom != NULL) free(nom);
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

void Nombre::setNom(const char* n) {
    if (nom != NULL) free(nom);
    nom=(char*)malloc(strlen(n)+1);
    strcpy(nom,n);
}

char* Nombre::getNom() {
    return nom;
}
