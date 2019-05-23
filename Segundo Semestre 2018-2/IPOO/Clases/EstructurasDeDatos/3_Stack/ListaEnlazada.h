/*
  Archivo: ListaEnlazada.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2019-03-22
  Versión: 0.2
  Licencia: GPL
*/

// Clase: ListaEnlazada
// Responsabilidad: es una lista de enteros simplemente enlazada, a la que se pueden
//    añadir elementos, buscarlos y borrarlos.
// Colaboración: posee todos los ElementoListaEnlazada (toma propiedad de todos ellos)


#include<iostream>
#include "ElementoListaEnlazada.h"


#ifndef HH_ListaEnlazada
#define HH_ListaEnlazada

class ListaEnlazada
{
  protected:
    ElementoListaEnlazada *primerElemento;
    bool soyPropietarioDelPrimerElemento;

  public:
    /** Construye una ListaEnlazada vacía.
     *  - Entrada: ninguna
    */
    ListaEnlazada();
    /** Destruye la ListaEnlazada. Borrra todos los ElementoListaEnlazada, ya que es propietario de todos.
    */
    virtual ~ListaEnlazada();
    /** Añade un nuevo elemento al final de la lista enlazada.
        - Entrada: un numero entero
        - Salida: ninguna
    */
    virtual void anadirAlFinal(int nuevoNumero);
    /** Añade un nuevo nùmero a la lista enlazada, después del nùmero indicado.
        - Entrada: 
          - el nùmero donde hay que insertar detràs de él.
          - el nuevo número a insertar.
        - Salida: true si se logró hacer; false si no se logró, típicamente porque no existe el elemento donde insertar después.
    */
    virtual bool anadirDespuesDe(int insertarDespuesDeEste, int nuevoNumero);
    /** Añade un nuevo elemento al principio de la lista enlazada
    */
    virtual void anadirAlPrincipio(int nuevoNumero);
    /** Borra un entero de la ListaEnlazada
        - Entrada: el entero a borrar. Si hay más de uno, solo borra el primero.
        - Salida: retorna false si no lo encontró.
    */
    virtual bool borrar(int valor);
    /** Verifica si existe un cierto entero en la ListaEnlazda.
     *  - Entrada: el valor entero a buscar.
     *  - Salida: retorna true si lo encontró y false en caso contrario.
    */
    virtual bool existe(int valor);
    /** Averigua cuanto vale un ElementoListaEnlazada
     *  - Entrada: un puntero a ese elemento.
     *  - Salida: el valor entero de ese elemento.
    */
    virtual int cuantoVale(ElementoListaEnlazada *elemento);
    /** Imprime en pantalla (cout) la ListaEnlazada
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    virtual void imprimir();      

    /** Hace una copia superficial, sin ceder la propiedad
    */
    virtual ListaEnlazada *shallowCopy();
    /** Hace una copia profunda. Cada lista queda como propietaria de sus respectivos ElementosListaEnlazada
    */
    virtual ListaEnlazada *deepCopy();

  protected:  
    /** Busca un entero en la lista enlazada.
     *  - Entrada: el valor entero a buscar
     *  - Salida: retorna un puntero al ElementoListaEnlazada. Retorna 0 (un puntero nulo) si no se encontró.
    */
    virtual ElementoListaEnlazada *buscar(int valor); 
};
  
#endif
