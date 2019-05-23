/*
  Archivo: Queue.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-26
  Versión: 0.1
  Licencia: GPL
*/

#include"Queue.h"

Queue::Queue() : ListaEnlazada()
{
}


Queue::~Queue()
{
}


void Queue::anadir(int nuevoNumero)
{
  anadirAlFinal(nuevoNumero);
}


int Queue::quitar()
{
  if(not primerElemento)
    throw string("No hay más elementos");
  int elementoAQuitar = cuantoVale(primerElemento);
  borrar(elementoAQuitar);
  return elementoAQuitar;
}


void Queue::imprimir()
{
  cout << "En la cola hay: ";
  ListaEnlazada::imprimir();
}




















