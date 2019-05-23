/*
  Archivo: ArbolBinario.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-24
  Fecha última modificación: 2017-11-28
  Versión: 0.1
  Licencia: GPL
*/

/*
Como elevar a una potencia:
double x = -2.7E-5;

#include<math.h>
pow(28,3)*1000

*/

#include "ArbolBinario.h"
using namespace std;

ArbolBinario::ArbolBinario()
{
  raiz=0;  
}


ArbolBinario::~ArbolBinario()
{
  // Borrar elemento raíz
  if(raiz)
  {
    delete raiz;
    raiz = 0;
  }
}


void ArbolBinario::anadir(int nuevoNumero)
{
  if(raiz==0)
    raiz = new ElementoArbolBinario(nuevoNumero);
  else
  {
    ElementoArbolBinario *encontrado = raiz->buscarUbicacion(nuevoNumero);
    if(encontrado==0 or encontrado->dimeSuValor() == nuevoNumero)
      return;
    else
    {
      if(nuevoNumero < encontrado->dimeSuValor())
        encontrado->cambiarIzquierda(new ElementoArbolBinario(nuevoNumero));
      else
        encontrado->cambiarDerecha(new ElementoArbolBinario(nuevoNumero));
    }
  }
}


ArbolBinario *ArbolBinario::shallowCopy()
{
  ArbolBinario *nuevoArbol = new ArbolBinario;
  nuevoArbol->raiz = raiz;
  return nuevoArbol;  // Cede propiedad
}


ArbolBinario *ArbolBinario::deepCopy()
{
  ArbolBinario *nuevoArbol = new ArbolBinario;
  nuevoArbol->raiz = raiz->deepCopy();
  return nuevoArbol;  // Cede propiedad
}


bool ArbolBinario::borrar(int valor)
{
  if(raiz)
    raiz->borrar(valor);  
}


bool ArbolBinario::existe(int valor)
{
  if(raiz)
    raiz->existe(valor);  
}


void ArbolBinario::imprimir()
{
  if(raiz)
    raiz->imprimir();
}


