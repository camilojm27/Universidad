/*
  Archivo: Stack.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-26
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Stack
// Responsabilidad: implementa un stack de enteros (LIFO = Last In First Out). 
//     Tiene dos operaciones básicas: push y pop. 
//     El stack funciona como la pila de platos cuando se lava la loza (el último plato que se pone encima es el primero en salir para enjuagarlo).
// Colaboración: es parecido a una ListaEnlazada


#include<iostream>
#include<string>
using namespace std;
#include "ListaEnlazada.h"


#ifndef HH_Stack
#define HH_Stack

class Stack : private ListaEnlazada
{
  private:

  public:
    /** Construye un Stack vacío.
     *  - Entrada: ninguna
    */
    Stack();
    /** Destruye el Stack. 
    */
    virtual ~Stack();
    /** Añade un nuevo elemento al Stack
        - Entrada: un numero entero
        - Salida: ninguna
    */
    virtual void push(int nuevoNumero);
    /** Elimina un elemento del Stack
    */
    virtual int pop();
    /** Imprime en pantalla (cout) el Stack
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    virtual void imprimir();      
};
  
#endif
