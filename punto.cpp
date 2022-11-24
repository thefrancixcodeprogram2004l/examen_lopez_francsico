#include "punto.h"

int Punto::getX() const
{
    return x;
}

int Punto::getY() const
{
    return y;
}

string Punto::ver()
{
    return "El punto en x: "+to_string(getX())+"\n"+
            "El punto en y: "+to_string(getY())+"\n";
}

Punto::Punto(): x(0),
    y(0)
{

}

Punto::Punto(int x, int y) : x(x),
    y(y)
{}
