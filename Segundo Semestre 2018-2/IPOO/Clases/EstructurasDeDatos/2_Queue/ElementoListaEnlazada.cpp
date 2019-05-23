/*
  Archivo: ElementoListaEnlazada.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2017-10-06
  Versión: 0.1
  Licencia: GPL
*/


#include "ElementoListaEnlazada.h"
using namespace std;


ElementoListaEnlazada::ElementoListaEnlazada(int nuevoValor)
{
  valor = nuevoValor;
  siguiente = 0;
}
      
      
ElementoListaEnlazada::~ElementoListaEnlazada()
{
  // No hay que hacer nada
}
  

ElementoListaEnlazada *ElementoListaEnlazada::cualEsElSiguiente()
{
  return siguiente;
}


void ElementoListaEnlazada::cambiarSiguiente(ElementoListaEnlazada *siguiente)
{
//  siguiente = siguiente2;
  this->siguiente = siguiente;  // this es un puntero que existe automáticamente, y que apunta al objeto en el que me encuentro ejecutando código
}


int ElementoListaEnlazada::dimeSuValor()
{
  return valor;
}


ElementoListaEnlazada* ElementoListaEnlazada::deepCopy()
{
  ElementoListaEnlazada *nuevo = new ElementoListaEnlazada(valor);
  if(siguiente != 0)
    nuevo->siguiente = siguiente->deepCopy();
  else
    nuevo->siguiente = 0;
    
  return nuevo;
}



