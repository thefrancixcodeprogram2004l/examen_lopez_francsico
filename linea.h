#ifndef LINEA_H
#define LINEA_H
#include<iostream>
#include<stack>
#include"punto.h"
#define capacidad 2
using namespace std;
class Linea
{
private:
    float distancia;
    float pendiente;
    int Num_lineas[capacidad];
    Punto *x;
    Punto *y;
public:
    Linea();
    Linea(Punto *x, Punto *y);
    float getDistancia() const;
    Punto *getX() const;
    Punto *getY() const;
    string ver();
};

#endif // LINEA_H
