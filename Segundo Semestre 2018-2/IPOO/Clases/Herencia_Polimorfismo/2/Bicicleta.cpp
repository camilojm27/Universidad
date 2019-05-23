/*
  Archivo: Bicicleta.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-07
  Versión: 0.1
  Licencia: GPL
*/


#include"Bicicleta.h"

Bicicleta::Bicicleta(double velocidadMaxima, string tipo) : Vehiculo(velocidadMaxima, tipo)
{
  biciDoblada = true;
}


void Bicicleta::doblar()
{
  biciDoblada = true;
}


void Bicicleta::desdoblar()
{
  biciDoblada = false;
}


bool Bicicleta::estaDoblada()
{
  return biciDoblada;
}



