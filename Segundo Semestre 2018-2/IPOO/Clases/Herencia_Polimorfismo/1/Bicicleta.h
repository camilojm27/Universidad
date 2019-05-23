/*
  Archivo: Bicicleta.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-07
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Bicicleta
// Responsabilidad: representa una bicicleta, con las misma interfase y estado interno que un Vehiculo.
// Colaboracion: es un vehículo

#ifndef HH_Bicicleta
#define HH_Bicicleta

#include"Vehiculo.h"


class Bicicleta : public Vehiculo
{
  public:
    Bicicleta(double velocidadMaxima, string tipo);
};

#endif

