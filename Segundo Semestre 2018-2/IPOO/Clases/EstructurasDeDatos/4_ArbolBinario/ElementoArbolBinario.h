/*
  Archivo: ElementoArbolBinario.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-24
  Fecha última modificación: 2017-11-24
  Versión: 0.1
  Licencia: GPL
*/

// Clase: ElementoArbolBinario
// Responsabilidad: es un elemento del árbol binario,
//   que contiene un entero y dos punteros, uno a la izquierda y otro a la derecha.
// Colaboración: posee dos ElementoArbolBinario (toma propiedad de ellos)

#include<iostream>


#ifndef HH_ElementoArbolBinario
#define HH_ElementoArbolBinario

class ElementoArbolBinario
{
  private:
    int valor;
    bool esValido;
    ElementoArbolBinario *izquierda;
    ElementoArbolBinario *derecha;
    
  public:
    /** Constructor, que crea un ElementoArbolBinario con un valor concreto válido
        - Entrada: el valor entero
    */
    ElementoArbolBinario(int valor);
    /** Destructor. Destruye los dos hijos.
    */
    ~ElementoArbolBinario();
    /** Averigua cual es el ElementoArbolBinario de la izquierda
        - Entrada: ninguna
        - Salida: retorna el ElementoArbolBinario de la izquierda
    */
    ElementoArbolBinario *cualEsElDeLaIzquierda();
    /** Averigua cual es el ElementoArbolBinario de la derecha
        - Entrada: ninguna
        - Salida: retorna el ElementoArbolBinario de la derecha
    */
    ElementoArbolBinario *cualEsElDeLaDerecha();
    /** Modificar el ElementoArbolBinario de la izquierda, para que apunte a otro
        - Entrada: el nuevo ElementoArbolBinario a la izquierda
        - Salida: ninguna
    */
    void cambiarIzquierda(ElementoArbolBinario *izquierda);
    /** Modificar el ElementoArbolBinario de la derecha, para que apunte a otro
        - Entrada: el nuevo ElementoArbolBinario a la derecha
        - Salida: ninguna
    */
    void cambiarDerecha(ElementoArbolBinario *derecha);
    /** Me dice cuanto vale un ElementoArbolBinario
        - Entrada: ninguna
        - Salida: el valor entero de ese elemento
    */
    int dimeSuValor();
    /** Busca donde ubicar un valor en el ElementoArbolBinario y en sus hijos.
       - Entrada: el valor buscado
       - Salida: un puntero al elemento que coincide con el valor o es más cercano
    */
    ElementoArbolBinario *buscarUbicacion(int valorBuscado);
    /** Borra un entero del ElementoArbolBinario si ese es el valor buscado.
          Si no lo es, lo busca en sus hijos izquierda y derecha.
        - Entrada: el entero a borrar. 
        - Salida: retorna false si no lo encontró.
    */
    bool borrar(int valor);
    /** Hace una copia profunda y retiene la propiedad
    */
    ElementoArbolBinario *deepCopy();
    /** Imprime en pantalla (cout) el valor del ElementoArbolBinario y sus hijos, de forma recursiva
     *  - Entrada: indentación hacia la izquierda, según la profundidad del nodo
     *  - Salida: ninguna
    */
    void imprimir(int cuantosTabs=0);   
    /** Verifica si un cierto entero coincide con el ElementoArbolBinario.
     *    En caso contrario, le pregunta recursivamente a sus hijos izquierda y derecha.
     *  - Entrada: el valor entero a buscar.
     *  - Salida: retorna true si lo encontró y false en caso contrario.
    */
    bool existe(int valor);

    
  protected:
    void tabs(int cuantosTabs);
};
  
#endif



