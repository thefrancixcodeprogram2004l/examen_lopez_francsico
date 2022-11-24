#include "linea.h"

float Linea::getDistancia() const
{
    return x->getX();
}

Punto *Linea::getX() const
{
    return x;
}

Punto *Linea::getY() const
{
    return y;
}

string Linea::ver()
{
    return "";
}

Linea::Linea()
{

}

Linea::Linea(Punto *x, Punto *y) : x(x),
    y(y)
{
    x->getX();
    y->getY();
}
