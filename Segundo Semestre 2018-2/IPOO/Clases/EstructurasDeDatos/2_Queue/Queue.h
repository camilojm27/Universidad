/*
  Archivo: Queue.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-26
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Queue
// Responsabilidad: implementa una cola de enteros (FIFO = First In First Out). 
//    Tiene dos operaciones básicas: anadir y quitar
//    La Queue funciona como la cola que se hace para pagar en un supermercado (el primero en llegar es el primero en salir).
// Colaboración: es parecido a una ListaEnlazada


#include<iostream>
#include<string>
using namespace std;
#include "ListaEnlazada.h"


#ifndef HH_Queue
#define HH_Queue

class Queue : private ListaEnlazada
{
  private:

  public:
    /** Construye una Queue vacía.
     *  - Entrada: ninguna
    */
    Queue();
    /** Destruye la Queue. 
    */
    virtual ~Queue();
    /** Añade un nuevo elemento al final de la lista enlazada.
        - Entrada: un numero entero
        - Salida: ninguna
    */
    virtual void anadir(int nuevoNumero);
    /** Elimina el elemento del inicio y lo retorna
    */
    virtual int quitar();
    /** Imprime en pantalla (cout) la Queue
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    virtual void imprimir();      
};
  
#endif
