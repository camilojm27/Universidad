/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-22
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: usar una cola (queue) de enteros
// La cola es muy parecida a la lista enlazada, pero con dos funciones más (anadir y quitar)

#include<string>
#include<iostream>
#include"Queue.h"
using namespace std;



int main()
{
  try
  {
    Queue cola;
    cola.anadir(3);
    cola.anadir(8);
    cola.anadir(1);
    cola.anadir(2);
    cout << "La cola tiene: ";
    cola.imprimir();
  
    int elementoQuitado = cola.quitar();
    cout << "El elemento que salió es: " << elementoQuitado << endl;;
    cola.imprimir();

    int nuevoElemento = 17;
    cola.anadir(nuevoElemento);
    cout << "Añadí el elemento " << nuevoElemento << endl;
    cola.imprimir();

    cola.quitar();
    cola.imprimir();
    cola.quitar();
    cola.imprimir();
    cola.quitar();
    cola.imprimir();
    cola.quitar();
    cola.imprimir();
    cola.quitar();
    cola.imprimir();
  }
  catch(string mensaje)
  {
    cout << "ERROR INTERNO: " << mensaje << endl;
    return 1;  
  }
  
  return 0;
}
