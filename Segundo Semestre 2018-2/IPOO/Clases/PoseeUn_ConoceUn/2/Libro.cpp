/*
  Archivo: Libro.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-15
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/


#include "Libro.h"


Libro::Libro(string titulo)
{
  this->titulo = titulo;  
}


Libro::~Libro()
{
  // No hace nada
}


string Libro::cualEsElTitulo()
{
  return titulo;  
}


