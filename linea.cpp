#include "linea.h"

float Linea::getDistancia() const
{
    return sqrt(pow((x->getX()-y->getX()),2)+pow((x->getY()-y->getY()),2)) ;
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
    return "diatancia"+to_string(this->getDistancia())+"\n"+
            "pendiente: "+to_string(this->getPendiente())+"\n";
}

float Linea::getPendiente() const
{
    return x->getY()-y->getY()/x->getX()-y->getX();
}

Linea::Linea()
{
    this->x=new Punto(-7,4);
    this->y=new Punto(2,9);

}

Linea::Linea(Punto *x, Punto *y) : x(x),
    y(y)
{
    x->getX();
    y->getY();
}
