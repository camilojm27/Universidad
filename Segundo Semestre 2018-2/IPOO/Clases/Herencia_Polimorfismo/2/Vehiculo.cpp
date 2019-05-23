/*
  Archivo: Vehiculo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-07
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Vehiculo
// Responsabilidad: representa un vehiculo, con un cuentakilometros y una velocidad máxima alcanzable. Se le puede pedir que avance a una cierta velocidad durante un cierto tiempo y que me diga los kilómetros recorridos.
// Colaboracion: ninguna

#include"Vehiculo.h"


Vehiculo::Vehiculo(double velocidadMaxima, string tipo)
{
  this->velocidadMaxima = velocidadMaxima;
  this->tipo = tipo;
  kilometrosRecorridos = 0;
}


void Vehiculo::avanzar(double velocidadKm_hora, double tiempo_horas)
{
  if(velocidadKm_hora > velocidadMaxima)
    velocidadKm_hora = velocidadMaxima;

  kilometrosRecorridos += velocidadKm_hora * tiempo_horas;
}


double Vehiculo::kmRecorridos()
{
  return kilometrosRecorridos;
}


string Vehiculo::queTipoEres()
{
  return tipo;
}






