#include <iostream>
#include "nombre.h"

using namespace std;

int main()
{
    cout << "Test classe Nombre" << endl;

    Nombre* a= new Nombre();
    a->setV(2.5);
    cout << a->getV()  << endl;
    cout << a->carre() << endl;
    
    Nombre* b = new Nombre(3.14,"pi");
    cout << b->getNom() << " " << b->getV() << endl;
    

    return 0;
}
