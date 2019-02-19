#include <iostream>
#include "nombre.h"

#include <QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication q(argc, argv);
    
    cout << "Test classe Nombre" << endl;

    Nombre* a= new Nombre();
    a->setV(2.5);
    cout << a->getV()  << endl;
    cout << a->carre() << endl;
    
    a->setNom("Truc");

    q.quit();
}
