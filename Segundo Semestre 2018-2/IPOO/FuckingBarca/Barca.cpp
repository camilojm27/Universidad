/*
  Archivo: Barca.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-08
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

#include"Barca.h"

Barca::Barca(int capacidadDeLaBarca) : capacidadDeLaBarca(capacidadDeLaBarca)
{
  hayPersona = false;
  for(int cual=0; cual<capacidadDeLaBarca; cual++)
    losObjetos[cual] = 0;
}


bool Barca::recibe(Objeto *objeto)
{
  for(int cual=0; cual<capacidadDeLaBarca; cual++)
    if(losObjetos[cual] == 0)
    {
      losObjetos[cual] = objeto;
      return true;
    }
  return false;
}


Objeto *Barca::dame(string nombre)
{
  for(int cual=0; cual<capacidadDeLaBarca; cual++)
    if(losObjetos[cual] != 0)
      if(losObjetos[cual]->comoTeLlamas() == nombre)
      {
        Objeto *piola = losObjetos[cual];
        losObjetos[cual] = 0;
        return piola;
      }
      
  return 0;
}


bool Barca::alguienPuedeComer()
{
  if(hayPersona)
    return false;
  
  bool hayLobo=false;
  bool hayOveja=false; 
  bool hayLechuga=false;
  
  for(int cual=0; cual<capacidadDeLaBarca; cual++)
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


void Barca::seSubioPersona(bool ocurrio)
{
  hayPersona = ocurrio; 
  orillaEnLaQueEstoy = 0; //Todavía no estoy en ninguna orilla
}


void Barca::navegarA(Orilla *orilla)
{
  orillaEnLaQueEstoy = orilla;
}


void Barca::imprimir()
{
  cout << "BARCA: ";
  if(hayPersona)
    cout << "PERSONA, ";
  for(int cual=0; cual<capacidadDeLaBarca; cual++)
    if(losObjetos[cual] != 0)
      cout << losObjetos[cual]->comoTeLlamas() <<", ";
  cout << endl;
}