/*
  Archivo: Rueda.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-10
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/


#include"Rueda.h"


Rueda::Rueda(double diametro)
{
  this->diametro = diametro;
  pinchada = false;
}


void Rueda::pincharAlAzar()
{
  if(diametro > 20)
  {
    if(rand()%2 == 0) 
      pinchada = true;
  }
  else
  {
//    if(rand()%5 <= 1) 
    int auxiliar = rand()%5;
    if(auxiliar == 0 or auxiliar == 1) 
      pinchada = true;
  }
}


bool Rueda::estaPinchada()
{
  return pinchada;
}


void Rueda::despinchar()
{
  pinchada = false;
}


