/*
  Archivo: Objeto.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-05
  Fecha última modificación: 2019-02-05
  Versión: 0.1
  Licencia: GPL
*/

#include"Objeto.h"


Objeto::Objeto(string nombre)
{
  this->nombre = nombre;
}

string Objeto::comoTeLlamas()
{
  return nombre;
}
