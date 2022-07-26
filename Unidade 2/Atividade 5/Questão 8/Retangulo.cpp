#include <iostream>
#include "Retangulo.h"


Retangulo::Retangulo(double alt, double larg)
{
    setAltura(alt);
    setLargura(larg);
}

void Retangulo::setAltura(double alt)
{
    if ((alt < 0.0) || (alt > 20.0))
        altura = 1.0;
    else
        altura = alt;
}

void Retangulo::setLargura(double larg)
{
    if ((larg < 0.0) || (larg > 20.0))
        largura = 1.0;
    else
        largura = larg;
}

double Retangulo::perimetroRetangulo()
{
    return 2 * (altura*largura);
}

double Retangulo::areaRetangulo()
{
    return largura * altura;
}