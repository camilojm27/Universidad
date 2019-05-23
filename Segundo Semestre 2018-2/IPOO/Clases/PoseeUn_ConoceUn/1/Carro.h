/*
  Archivo: Carro.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-10
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Carro
// Responsabilidad: representa un carro, con las misma interfase y estado interno que un Vehiculo.
// Colaboracion: es un vehículo

#include"Vehiculo.h"

#ifndef HH_Carro
#define HH_Carro

class Carro : public Vehiculo
{
  public:
    Carro(double velocidadMaxima, string tipo, double diametroRueda);
};

#endif

