/*
  Archivo: ArbolBinario.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-24
  Fecha última modificación: 2017-11-24
  Versión: 0.1
  Licencia: GPL
*/

// Clase: ArbolBinario
// Responsabilidad: es un àrbol binario de enteros, al que se pueden
//    añadir elementos, buscarlos y borrarlos.
// Colaboración: posee un ElementoArbolBinario, la raíz (toma propiedad de él)


#include<iostream>
#include "ElementoArbolBinario.h"


#ifndef HH_ArbolBinario
#define HH_ArbolBinario

class ArbolBinario
{
  private:
    ElementoArbolBinario *raiz;

  public:
    /** Construye un ArbolBinario vacío.
     *  - Entrada: ninguna
    */
    ArbolBinario();
    /** Destruye el ArbolBinario. Borra el ElementoArbolBinario raíz, ya que es propietario de él
    */
    ~ArbolBinario();
    /** Añade un nuevo elemento al final del ArbolBinario.
        - Entrada: un numero entero
        - Salida: ninguna
    */
    void anadir(int nuevoNumero);
    /** Hace una copia superficial, cediendo propiedad.
     *  Atención: si el árbol no tiene elementos, entonces no logra hacer una copia
     *  superficial, sino profunda.
    */
    ArbolBinario *shallowCopy();
    /** Hace una copia profunda, cediendo propiedad
    */
    ArbolBinario *deepCopy();
    /** Borra un entero del ArbolBinario
        - Entrada: el entero a borrar. Si hay más de uno, solo borra el primero.
        - Salida: retorna false si no lo encontró.
    */
    bool borrar(int valor);
    /** Verifica si existe un cierto entero en el ArbolBinario.
     *  - Entrada: el valor entero a buscar.
     *  - Salida: retorna true si lo encontró y false en caso contrario.
    */
    bool existe(int valor);
    /** Imprime en pantalla (cout) el ArbolBinario
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    void imprimir();      
};
  
#endif
