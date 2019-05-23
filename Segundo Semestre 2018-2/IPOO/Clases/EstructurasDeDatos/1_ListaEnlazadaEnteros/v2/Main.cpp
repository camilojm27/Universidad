/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-08-25
  Fecha última modificación: 2019-03-22
  Versión: 0.2
  Licencia: GPL
*/

// Utilidad: usar una lista enlazada de enteros
// Vamos a refactorizar la lista de enteros del Tema 4_5 para que sea dinàmica (new / delete)
// Y vamos a añadir dos funciones para copia superficial y copia profunda

#include<stdlib.h>
#include<iostream>
#include<time.h>
#include"ListaEnlazada.h"
using namespace std;



int main()
{
  ListaEnlazada lista;
  lista.anadirAlFinal(5);
  lista.anadirAlFinal(1);
  lista.anadirAlFinal(3);
  lista.anadirAlFinal(7);
  lista.imprimir();

  if(lista.existe(3))
    cout << "El 3 está en la lista" << endl;
  else
    cout << "El 3 no está en la lista" << endl;
  
  if(lista.existe(48))
    cout << "El 48 está en la lista" << endl;
  else
    cout << "El 48 no está en la lista" << endl;

  cout << "Elimino el 3" << endl;
  lista.borrar(3);
  lista.imprimir();

  cout << "Añado " << 143 << " después de " << 1 << endl;
  lista.anadirDespuesDe(1, 143);
  lista.imprimir();
  
  cout << "Elimino el 5" << endl;
  lista.borrar(5);
  lista.imprimir();
  cout << "Elimino el 7" << endl;
  lista.borrar(7);
  lista.imprimir();
  cout << "Elimino el 143" << endl;
  lista.borrar(143);
  lista.imprimir();
  cout << "Elimino el 8888" << endl;
  lista.borrar(8888);
  lista.imprimir();
  cout << "Elimino el 1" << endl;
  lista.borrar(1);
  lista.imprimir();

  // Copia superficial y profunda:
  lista.anadirAlFinal(5);
  lista.anadirAlFinal(1);
  lista.anadirAlFinal(3);
  lista.anadirAlFinal(7);
  cout << "Inicialmente la lista tiene ";
  lista.imprimir();

  ListaEnlazada *listaComun = lista.shallowCopy();  // Cede propiedad
  ListaEnlazada *listaDistinta = lista.deepCopy();  // Ambos quedan propietarios
  lista.borrar(3);
  cout << "Borré el número 3, con lo cual la lista original es: ";
  lista.imprimir();
  cout << "La lista shallow copy es: ";
  listaComun->imprimir();
  cout << "La lista deep copy es: ";
  listaDistinta->imprimir();
  
  delete listaDistinta;
  listaDistinta = 0;
  
  cout << "La lista original no se destruyó al borrar la copia superficial porque sigue siendo propietaria de ella: ";
  lista.imprimir();

  delete listaComun;
  listaComun = 0;
  
  return 0;
}



