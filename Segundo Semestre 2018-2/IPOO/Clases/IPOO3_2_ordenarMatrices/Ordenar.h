/*
  Archivo: Ordenar.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-26
  Fecha última modificación: 2018-09-25
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Ordenar
  Responsabilidad: maneja matrices, pero no tiene estado interno
     - Imprime una matriz
     - Copiar el contenido de una matriz en otra
     - Buscar un elemento en una matriz 1D desordenada
     - Ordenar una matriz 1D usando varios algoritmos:
       - burbuja
       - selección
       - insercion
  Colaboración: ninguna
*/


#ifndef Ordenar_HH
#define Ordenar_HH

#include<iostream>
#include<string>
using namespace std;


class Ordenar
{
  private:
    // No hay estado interno
    
  public:
    Ordenar(); // No hace nada
    void imprimir(int matriz[], int tamano, string mensaje);
    void copiar(int matrizOrigen[], int matrizDestino[], int tamano);
    /** Busca un elemento en una matriz de un  tamaño dado.
        Retorna el índice donde se encuentra ese elemento, o -1 si no se encuentra
    */
    int buscar(int matriz[], int tamano, int elemento);
    
    void burbuja(int matriz[], int tamano);
    void seleccion(int matriz[], int tamano);
    void insercion(int matriz[], int tamano);
};

#endif

