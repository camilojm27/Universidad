/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-28
  Fecha última modificación: 2018-09-28
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: entender constantes

#include<iostream>
#include<string>
using namespace std;



int main()
{
  const double pi = 3.1416;
//  pi++;    // Da error al compilar
  cout << pi << endl;

  const double *puntero = &pi;
  
  cout << *puntero << endl; 
  
//  (*puntero)++;   // Da error al compilar
  puntero++;  // Esto no da error de compilación
  
  cout << *puntero << endl;  // Imprimirá basura
  

  double nota = 4.7;
  double * const otroPuntero = &nota;
//  otroPuntero++;

  
  // Dos punteros apuntando a la misma variable double:
  double * puntero1 = &nota;
  double *puntero2 = puntero1;
  cout << *puntero2 << endl;
  
  // Un puntero3 apuntando a puntero2 apuntando a la variable double:
  double **puntero3 = &puntero1;
  cout << puntero3 << endl;
  cout << *puntero3 << endl;
  cout << **puntero3 << endl;



  return 0;
}

