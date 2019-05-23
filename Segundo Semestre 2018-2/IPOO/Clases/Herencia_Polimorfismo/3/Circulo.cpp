/*
  Archivo: Circulo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


#include "Circulo.h"


Circulo::Circulo(double ancho, double alto) : Figura("Círculo", ancho, alto), Pi(3.1416)
{
  if(ancho != alto)
    throw "ERROR: ancho y alto del circulo deben ser iguales. Todavía no está implementada la Elipse";
}


double Circulo::area()
{
  return Pi * (ancho/2) * (ancho/2);
}


double Circulo::perimetro()
{
  return 2 * Pi * (ancho/2);
}


