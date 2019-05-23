/*
  Archivo: ListaEnlazada.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2017-11-21
  Versión: 0.2
  Licencia: GPL
*/


#include "ListaEnlazada.h"
using namespace std;



ListaEnlazada::ListaEnlazada()
{
  primerElemento = 0;
  soyPropietarioDelPrimerElemento = true;
}


ListaEnlazada::~ListaEnlazada()
{
  if(not soyPropietarioDelPrimerElemento)
    return;
    
  ElementoListaEnlazada *adelantado;
  for(ElementoListaEnlazada *cualElemento = primerElemento; cualElemento != 0; 
                                                           cualElemento = adelantado)
  {
    adelantado = cualElemento->cualEsElSiguiente();
    delete cualElemento;
    cualElemento = 0;
  }
  primerElemento = 0;
}


void ListaEnlazada::anadirAlFinal(int nuevoNumero)
{
  ElementoListaEnlazada *nuevoElemento = new ElementoListaEnlazada(nuevoNumero);

  if(primerElemento == 0)
  {
    primerElemento = nuevoElemento;
  }
  else
  {
    ElementoListaEnlazada *cualElemento;
    for(cualElemento = primerElemento; cualElemento->cualEsElSiguiente() != 0; 
                                               cualElemento = cualElemento->cualEsElSiguiente())
    {
    }
    
    cualElemento->cambiarSiguiente(nuevoElemento);
  }
}


bool ListaEnlazada::anadirDespuesDe(int despuesDe, int nuevoNumero)
{
  ElementoListaEnlazada *insertarDespuesDeEste = buscar(despuesDe);
  if(insertarDespuesDeEste == 0)
    return false;
    
  ElementoListaEnlazada *nuevoElemento = new ElementoListaEnlazada(nuevoNumero);

  ElementoListaEnlazada *aux = insertarDespuesDeEste->cualEsElSiguiente();
  nuevoElemento->cambiarSiguiente(aux);
  insertarDespuesDeEste->cambiarSiguiente(nuevoElemento);
  return true;
}


void ListaEnlazada::anadirAlPrincipio(int nuevoNumero)
{
  ElementoListaEnlazada *nuevoElemento = new ElementoListaEnlazada(nuevoNumero);
  nuevoElemento->cambiarSiguiente(primerElemento);
  primerElemento = nuevoElemento;
}


bool ListaEnlazada::borrar(int valor)
{
  if(primerElemento == 0)
    return false;
  
  if(primerElemento->dimeSuValor() == valor)
  {
    ElementoListaEnlazada *tmp = primerElemento;
    primerElemento = primerElemento->cualEsElSiguiente();
    tmp->cambiarSiguiente(0);
    delete tmp;
    return true;
  }

  ElementoListaEnlazada *cualElemento;
  for(cualElemento = primerElemento; cualElemento->cualEsElSiguiente() != 0; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->cualEsElSiguiente()->dimeSuValor() == valor) 
    {
      ElementoListaEnlazada *tmp = cualElemento->cualEsElSiguiente();
      ElementoListaEnlazada *aux = cualElemento->cualEsElSiguiente()->cualEsElSiguiente();
      cualElemento->cambiarSiguiente(aux);
      delete tmp;
      return true;
    }
  }
  return false;
}


bool ListaEnlazada::existe(int valor)
{
  for(ElementoListaEnlazada *cualElemento = primerElemento; cualElemento != 0; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->dimeSuValor() == valor)
      return true;
  }
  return false;
}


ElementoListaEnlazada *ListaEnlazada::buscar(int valor)
{
  for(ElementoListaEnlazada *cualElemento = primerElemento; cualElemento != 0; cualElemento = cualElemento->cualEsElSiguiente())
  {
    if(cualElemento->dimeSuValor() == valor)
      return cualElemento;
  }
  return 0;
}


int ListaEnlazada::cuantoVale(ElementoListaEnlazada *elemento)
{
  return elemento->dimeSuValor();
}


void ListaEnlazada::imprimir()
{
  if(primerElemento == 0)
  {
    cout << "La lista está vacía" << endl;
  }
  else
  {
    cout << "La lista de números enteros es: ";
    for(ElementoListaEnlazada *cualElemento = primerElemento; cualElemento != 0; 
                                               cualElemento = cualElemento->cualEsElSiguiente())
    {
      cout << cualElemento->dimeSuValor() << ", ";  
    }
    cout << endl;
  }
}




ListaEnlazada *ListaEnlazada::shallowCopy()
{
  ListaEnlazada *nueva = new ListaEnlazada;
  nueva->primerElemento = this->primerElemento;
  nueva->soyPropietarioDelPrimerElemento = false;  // La nueva lista no es propietaria de ElementoListaEnlazada
  // si ponemos true en la sentencia anterior, cometeremos un error, ya que ambas listas quedaría propietarias
  // de los mismos ElementoListaEnlazada. Y entonces cuando una se destruya, también quedará destruida la otra.
  return nueva; // Cede propiedad
}


ListaEnlazada *ListaEnlazada::deepCopy()
{
  ListaEnlazada *nueva = new ListaEnlazada;
  nueva->primerElemento = this->primerElemento->deepCopy();
  return nueva; // Cede propiedad
}



