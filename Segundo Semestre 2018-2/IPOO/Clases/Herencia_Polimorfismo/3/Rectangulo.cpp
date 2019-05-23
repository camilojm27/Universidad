/*
  Archivo: Rectangulo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


#include "Rectangulo.h"


Rectangulo::Rectangulo(double ancho, double alto) : Figura("Rectángulo", ancho, alto)
{
}


double Rectangulo::area()
{
  return ancho * alto;
}


double Rectangulo::perimetro()
{
  return 2 * (ancho + alto);
}


