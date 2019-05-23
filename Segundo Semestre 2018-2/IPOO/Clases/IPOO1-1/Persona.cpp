/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2018-08-24
  Versión: 0.1
  Licencia: GPL
*/
 
#include "Persona.h"

Persona::Persona(string nombre, string identificacion, int edad, bool esFemenina)
{
  miNombre = nombre;
  this->identificacion = identificacion;
  miEdad = edad;
  this->esFemenina = esFemenina;
}


string Persona::comoTeLlamas()
{
  return miNombre;
}


bool Persona::tienesEstaIdentificacion(string identificacion)
{
  return identificacion == this->identificacion;

/*
  if(cedula == miCedula)
    return true;
  else
    return false;
*/
  
}


void Persona::esTuCumpleanhos()
{
  miEdad++;
//  miEdad = miEdad + 1;
}


int Persona::dimeTuEdad()
{
  return miEdad;
}


string Persona::terminacionGenero()
{
  if(esFemenina)
    return "a";
  else
    return "o";
}


string Persona::dimeTuIdentificacion()
{
  return identificacion;
}





