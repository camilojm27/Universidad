/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-22
  Fecha última modificación: 2019-03-22
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: usar una pila (stack) de enteros
// La pila es muy parecida a la lista enlazada, pero con dos funciones más (push y pop)

#include<string>
#include<iostream>
#include"Stack.h"
using namespace std;



int main()
{
  try
  {
    Stack pila;
    pila.push(3);
    pila.push(8);
    pila.push(1);
    pila.push(2);
    pila.imprimir();
  
    int elementoQuitado = pila.pop();
    cout << "El elemento que salió es: " << elementoQuitado << endl;;
    pila.imprimir();

    int nuevoElemento = 17;
    pila.push(nuevoElemento);
    cout << "Añadí el elemento " << nuevoElemento << endl;
    pila.imprimir();

    pila.pop();
    pila.imprimir();
    pila.pop();
    pila.imprimir();
    pila.pop();
    pila.imprimir();
    pila.pop();
    pila.imprimir();
    pila.pop();
    pila.imprimir();
  }
  catch(string mensaje)
  {
    cout << "ERROR INTERNO: " << mensaje << endl;
    return 1;  
  }
  
  return 0;
}
