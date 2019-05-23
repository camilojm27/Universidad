/*
  Archivo: Stack.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-26
  Versión: 0.1
  Licencia: GPL
*/

#include"Stack.h"

Stack::Stack() : ListaEnlazada()
{
}


Stack::~Stack()
{
}


void Stack::push(int nuevoNumero)
{
  anadirAlPrincipio(nuevoNumero);
}


int Stack::pop()
{
  if(not primerElemento)
    throw string("No hay más elementos");
  int elementoAQuitar = cuantoVale(primerElemento);
  borrar(elementoAQuitar);
  return elementoAQuitar;
}


void Stack::imprimir()
{
  cout << "En la pila hay: ";
  ListaEnlazada::imprimir();
}


