/*
  Archivo: ElementoArbolBinario.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-24
  Fecha última modificación: 2017-11-24
  Versión: 0.1
  Licencia: GPL
*/


#include "ElementoArbolBinario.h"
using namespace std;

ElementoArbolBinario::ElementoArbolBinario(int valor)
{
  this->valor = valor;
  esValido = true;
  izquierda=0;
  derecha=0;
}


ElementoArbolBinario::~ElementoArbolBinario()
{
  if(izquierda)
  {
    delete izquierda;
    izquierda = 0;
  }
  if(derecha)
  {
    delete derecha;
    derecha = 0;
  }
}


ElementoArbolBinario *ElementoArbolBinario::cualEsElDeLaIzquierda()
{
  return izquierda;
}


ElementoArbolBinario *ElementoArbolBinario::cualEsElDeLaDerecha()
{
  return derecha;
}


void ElementoArbolBinario::cambiarIzquierda(ElementoArbolBinario *izquierda)
{
  this->izquierda = izquierda;
}


void ElementoArbolBinario::cambiarDerecha(ElementoArbolBinario *derecha)
{
  this->derecha = derecha;
}


int ElementoArbolBinario::dimeSuValor()
{
  return valor;
}

/*
    repetir hasta encontrar un puntero nulo:
      mirar el nodo raiz y comparar su valor con nuevoNumero.
      si nuevoNumero es igual, retornar sin hacer nada.
      si nuevoNumero es menor, me voy por la izquierda y si es mayor, por la derecha
*/
ElementoArbolBinario *ElementoArbolBinario::buscarUbicacion(int valorBuscado)
{
  if(valorBuscado == valor)
    return this;
  else 
  {
    if(valorBuscado < valor)
    {
      if(izquierda==0)
        return this;
      return izquierda->buscarUbicacion(valorBuscado);
    }
    else
    {
      if(derecha==0)
        return this;
      return derecha->buscarUbicacion(valorBuscado);
    }
  }
}


void ElementoArbolBinario::imprimir(int cuantosTabs)
{
  tabs(cuantosTabs);

  if(esValido)
    cout << valor;
  else
    cout << "null";

  if(izquierda or derecha)
  {
    cout << "\n";
    tabs(cuantosTabs);
    cout << "{";
    cout << "\n";
    if(izquierda)
      izquierda->imprimir(cuantosTabs+1);
    cout << "\n";
    if(derecha)
      derecha->imprimir(cuantosTabs+1);
    cout << "\n";
    tabs(cuantosTabs);
    cout << "}";
    cout << "\n";
  }
}


void ElementoArbolBinario::tabs(int cuantosTabs)
{
  while(cuantosTabs)
  {
    cout << "\t";
    cuantosTabs--;
  }
}


bool ElementoArbolBinario::borrar(int valor)
{
  if(this->valor == valor)
  {
    esValido = false;
    return true;
  }
  
  if(this->valor > valor)  
  {
    if(izquierda)
      return izquierda->borrar(valor);
  }
  else
  {
    if(derecha)
      return derecha->borrar(valor);
  }
  
/*
  if(izquierda)
    if(izquierda->borrar(valor))
      return true;

  if(izquierda and izquierda->borrar(valor))   // Shortcut: solo se evalúan las cláusulas hasta que una falle

  if(derecha)
    if(derecha->borrar(valor))
      return true;
*/ 
  return false;
}



bool ElementoArbolBinario::existe(int valor)
{
  if(this->valor == valor and esValido)
    return true;

  if(this->valor > valor)  
  {
    if(izquierda)
      return izquierda->existe(valor);
  }
  else
  {
    if(derecha)
      return derecha->existe(valor);
  }
  
  return false;  
}


ElementoArbolBinario *ElementoArbolBinario::deepCopy()
{
  ElementoArbolBinario *nuevoElemento = new ElementoArbolBinario(valor); 
  nuevoElemento->esValido = esValido;

  if(izquierda)
    nuevoElemento->izquierda = izquierda->deepCopy();
  if(derecha)
    nuevoElemento->derecha = derecha->deepCopy();

  return nuevoElemento;
}    




