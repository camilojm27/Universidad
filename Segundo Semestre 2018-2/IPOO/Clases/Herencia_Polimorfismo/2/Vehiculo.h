/*
  Archivo: Vehiculo.h
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

#ifndef HH_Vehiculo
#define HH_Vehiculo

#include<string>
using namespace std;


class Vehiculo
{
  private:
    double kilometrosRecorridos;
    double velocidadMaxima;
    string tipo;

  public:
    Vehiculo(double velocidadMaxima, string tipo);
    virtual void avanzar(double velocidadKm_hora, double tiempo_horas);
    virtual double kmRecorridos();
    virtual string queTipoEres();
};

#endif

