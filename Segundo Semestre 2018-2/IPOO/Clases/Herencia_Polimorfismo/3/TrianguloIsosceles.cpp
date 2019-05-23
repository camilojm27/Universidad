/*
  Archivo: TrianguloIsosceles.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


#include "TrianguloIsosceles.h"


TrianguloIsosceles::TrianguloIsosceles(double ancho, double alto) : Figura("Triángulo isósceles", ancho, alto)
{
}


double TrianguloIsosceles::area()
{
  return ancho * alto / 2;
}


double TrianguloIsosceles::perimetro()
{
  // ToDo:
  return 0;
}


