/*
  Archivo: ElementoListaEnlazada.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2017-10-06
  Versión: 0.1
  Licencia: GPL
*/

// Clase: ElementoListaEnlazada
// Responsabilidad: es un elemento de la lista de enteros simplemente enlazada,
//   que contiene un entero y un puntero al siguiente elemento.
// Colaboración: conoce un ElementoListaEnlazada (el siguiente)

#include<iostream>


#ifndef HH_ElementoListaEnlazada
#define HH_ElementoListaEnlazada

class ElementoListaEnlazada
{
  private:
    int valor;
    ElementoListaEnlazada *siguiente;
      
  public:
    /** Constructor, que crea un ElementoListaEnlazada con un valor concreto
        - Entrada: el valor entero
    */
    ElementoListaEnlazada(int valor);
    /** Destructor. Borra el siguiente elemento
    */
    ~ElementoListaEnlazada();
    /** Hace una copia profunda, cediendo propiedad
    */
    ElementoListaEnlazada *deepCopy();
    /** Averigua cual es el siguiente ElementoListaEnlazada
        - Entrada: ninguna
        - Salida: retorna el siguiente ElementoListaEnlazada
    */
    ElementoListaEnlazada *cualEsElSiguiente();
    /** Modificar el siguiente ElementoListaEnlazada, para que apunte a otro
        - Entrada: el nuevo ElementoListaEnlazada
        - Salida: ninguna
    */
    void cambiarSiguiente(ElementoListaEnlazada *siguiente);
    /** Me dice cuanto vale un ElementoListaEnlazada
        - Entrada: ninguna
        - Salida: el valor entero de ese elemento
    */
    int dimeSuValor();
};
  
#endif



