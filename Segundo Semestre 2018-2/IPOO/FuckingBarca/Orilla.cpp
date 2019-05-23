/*
  Archivo: Orilla.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-08
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

#include"Orilla.h"

Orilla::Orilla(string nombre, int capacidadDeLaOrilla) : capacidadDeLaOrilla(capacidadDeLaOrilla)
{
  this->nombre = nombre;
  hayPersona = false;
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    losObjetos[cual] = 0;
}


bool Orilla::recibe(Objeto *objeto)
{
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    if(losObjetos[cual] == 0)
    {
      losObjetos[cual] = objeto;
      return true;
    }
  return false;
}


Objeto *Orilla::dame(string nombre)
{
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    if(losObjetos[cual] != 0)
      if(losObjetos[cual]->comoTeLlamas() == nombre)
      {
        Objeto *piola = losObjetos[cual];
        losObjetos[cual] = 0;
        return piola;
      }

  return 0;
}

void Orilla::seSubioPersona(bool ocurrio)
{
  hayPersona = ocurrio;  
}


bool Orilla::estanTodosAlli()
{
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    if(losObjetos[cual] == 0)
      return false;
  return true;
}


bool Orilla::alguienPuedeComer()
{
  if(hayPersona)
    return false;
  
  bool hayLobo=false;
  bool hayOveja=false; 
  bool hayLechuga=false;
  
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    if(losObjetos[cual] != 0)
    {
      if(losObjetos[cual]->comoTeLlamas() == "lobito")
        hayLobo=true;
      else if(losObjetos[cual]->comoTeLlamas() == "ovejita")
        hayOveja=true;
      else if(losObjetos[cual]->comoTeLlamas() == "lechuguita")
        hayLechuga=true;
    }

  if((hayOveja and hayLobo) or (hayOveja and hayLechuga))
    return true;
  return false;
}


void Orilla::imprimir()
{
  cout << nombre << ": ";
  if(hayPersona)
    cout << "PERSONA, ";
  for(int cual=0; cual<capacidadDeLaOrilla; cual++)
    if(losObjetos[cual] != 0)
      cout << losObjetos[cual]->comoTeLlamas() <<", ";
  cout << endl;
}