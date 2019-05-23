/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-24
  Fecha última modificación: 2017-11-24
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: usar un árbol binario de enteros

#include<stdlib.h>
#include<iostream>
#include<time.h>
#include"ArbolBinario.h"
using namespace std;



int main()
{
  ArbolBinario arbolBinario;
  arbolBinario.imprimir();
  cout << endl;

  arbolBinario.anadir(15);
  arbolBinario.anadir(7);
  arbolBinario.anadir(21);
  arbolBinario.anadir(1);
  arbolBinario.anadir(10);
  arbolBinario.anadir(17);
  arbolBinario.anadir(25);
  arbolBinario.imprimir();
  cout << endl;
  arbolBinario.borrar(1);
  arbolBinario.imprimir();
  cout << endl;
  
  if(arbolBinario.existe(21))
    cout << "Hay un 21" << endl;
  else
    cout << "No hay un 21" << endl;
  
  if(arbolBinario.existe(200))
    cout << "Hay un 200" << endl;
  else
    cout << "No hay un 200" << endl;

  if(arbolBinario.existe(1))
    cout << "Hay un 1" << endl;
  else
    cout << "No hay un 1" << endl;

  cout << "SHALLOW COPY ========================" << endl;
  ArbolBinario *arbolCopia = arbolBinario.shallowCopy(); // Recibo su propiedad
  arbolCopia->anadir(300);
  arbolCopia->imprimir();
  cout << endl;
  arbolBinario.imprimir();
  cout << endl;
  
//  delete arbolCopia;
//  arbolCopia = 0;
  
  cout << "DEEP COPY ========================" << endl;
  ArbolBinario *arbolSeparado = arbolBinario.deepCopy(); // Recibo su propiedad
  arbolSeparado->anadir(8);
  arbolSeparado->imprimir();
  cout << endl;
  arbolBinario.imprimir();
  cout << endl;
  
  delete arbolSeparado;
  arbolSeparado = 0;
  
  return 0;
}
