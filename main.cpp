/*
 *Nombre: FRancsico lopez
 * cedula: 175105617-5
 * correo: flopeze@est.ups.edu.ec
 * fecha: 24-nov-2022
*/
#include <iostream>

using namespace std;
#include"punto.h"
#include"linea.h"
int main()
{
    cout<<"Francisco Lopez\n";
    Punto p1(-7,4);
    Punto p2(2,9);
    cout<<"Punto 1\n";
    cout<<p1.ver()<<endl;
    cout<<"Punto2\n";
    cout<<p2.ver()<<endl;
    cout<<"---------------\n";
    Linea l;
    cout<<l.ver()<<endl;


    return 0;
}
