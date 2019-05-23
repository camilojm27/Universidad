/*
  Archivo: Figura.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/

#include "Figura.h"


Figura::Figura(string nombre, double ancho, double alto) : nombre(nombre), ancho(ancho), alto(alto)
{
  /* Es equivalente a:
  this->nombre = nombre;
  this->ancho = ancho
  this->alto = alto;
  */
}


string Figura::comoTeLlamas()
{
  return nombre;
}

