/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-26
  Fecha última modificación: 2018-09-25
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: ordenar matrices de 1D.

#include<iostream>
#include<string>
#include "Ordenar.h"
using namespace std;



int main()
{
  int matrizOriginal[12] = {5, 7, 1, -9, 3, 433, 4, 8, 0, -6, 24, -3}; 
//  int matrizOriginal[12] = {5,3}; 
  int miMatriz[12];
  int numeroElementos=12;

  Ordenar ordenar;

  int elemento = 888;
  int posicion = ordenar.buscar(matrizOriginal, numeroElementos, elemento);
  if(posicion==-1)
    cout << "No existe el elemento "<< elemento << endl;
  else
    cout << "El elemento " << elemento << " se encuentra en la posición " << posicion << endl;
  

  ordenar.copiar(matrizOriginal, miMatriz, numeroElementos);
  ordenar.imprimir(miMatriz,numeroElementos, "Matriz original:               ");
  ordenar.burbuja(miMatriz, numeroElementos);
  ordenar.imprimir(miMatriz,numeroElementos, "Matriz ordenada por burbuja:   ");

  ordenar.copiar(matrizOriginal, miMatriz, numeroElementos);
  ordenar.seleccion(miMatriz,numeroElementos);
  ordenar.imprimir(miMatriz,numeroElementos, "Matriz ordenada por selección: ");

  ordenar.copiar(matrizOriginal, miMatriz, numeroElementos);
  ordenar.insercion(miMatriz,numeroElementos);
  ordenar.imprimir(miMatriz,numeroElementos, "Matriz ordenada por inserción: ");

  return 0;
}

