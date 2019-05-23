/*
  Archivo: Vehiculo.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-10
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Vehiculo
// Responsabilidad: representa un vehiculo, con un cuentakilometros y una velocidad máxima alcanzable. Se le puede pedir que avance a una cierta velocidad durante un cierto tiempo y que me diga los kilómetros recorridos.
// Colaboracion: posee 4 Ruedas (es propietario, por lo que debe destruirlas en el destructor).


#include"Vehiculo.h"


Vehiculo::Vehiculo(double velocidadMaxima, string tipo, int numeroDeRuedas, double diametroRueda)
{
  this->velocidadMaxima = velocidadMaxima;
  this->tipo = tipo;
  this->numeroDeRuedas = numeroDeRuedas;
  kilometrosRecorridos = 0;
  ruedas = new Rueda*[numeroDeRuedas];
  for(int cualRueda=0; cualRueda<numeroDeRuedas; cualRueda++)
    ruedas[cualRueda] = new Rueda(diametroRueda);
}


Vehiculo::~Vehiculo()
{
  for(int cualRueda=0; cualRueda<numeroDeRuedas; cualRueda++)
  {
    delete ruedas[cualRueda];  // Llama al destructor de cada Rueda y luego devuelve la memoria ocupada al sistema operativo
    ruedas[cualRueda] = 0;
  }
  delete [] ruedas;  // Devuelve la memoria ocupada por el array al sistema operativo
  ruedas= 0;
}


void Vehiculo::avanzar(double velocidadKm_hora, double tiempo_horas)
{
  if(velocidadKm_hora > velocidadMaxima)
    velocidadKm_hora = velocidadMaxima;

  double kilometrosARecorrer = velocidadKm_hora * tiempo_horas;
  
  // A veces se pinchan las ruedas:
  for(int cadaKilometro=0; cadaKilometro<kilometrosARecorrer; cadaKilometro++)
  {
    bool algunaRuedaPinchada = false;
    for(int cadaRueda=0; cadaRueda<numeroDeRuedas; cadaRueda++)
    {
      ruedas[cadaRueda]->pincharAlAzar();
      if(ruedas[cadaRueda]->estaPinchada())
        algunaRuedaPinchada = true;
    }
    
    if(not algunaRuedaPinchada)
      kilometrosRecorridos++;
    else
      return;
  }  
}


double Vehiculo::kmRecorridos()
{
  return kilometrosRecorridos;
}


string Vehiculo::queTipoEres()
{
  return tipo;
}






