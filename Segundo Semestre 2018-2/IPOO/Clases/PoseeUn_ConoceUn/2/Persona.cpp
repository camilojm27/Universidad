/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-15
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/

#include "Persona.h"


Persona::Persona(string nombre)
{
  this->nombre = nombre;
  this->libro = 0;
  soyElPropietarioDelLibro = false;
}


Persona::~Persona()
{
  if(soyElPropietarioDelLibro)
  {
    if(libro != 0)
      delete libro;
    libro = 0;
  }
}


Libro *Persona::venderLibro()
{
  soyElPropietarioDelLibro = false;
  return libro;
}


bool Persona::comprarLibro(Libro *libro)
{
  if(this->libro == 0)
  {
    this->libro = libro;
    soyElPropietarioDelLibro = true;
    return true;
  }
  else
    return false;
}


string Persona::comoTeLlamas()
{
  return nombre;
}


string Persona::tituloDeTuLibro()
{
  if(libro != 0)
    return libro->cualEsElTitulo();
  else
    return "";
}


