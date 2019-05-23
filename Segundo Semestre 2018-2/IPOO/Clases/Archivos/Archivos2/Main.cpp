/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-26
  Fecha última modificación: 2019-02-26
  Versión: 0.1
  Licencia: GPL
*/

/*
  Manejo de archivos
*/

#include "EditorDeTexto.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
  cout << "Dime el nombre de tu archivo: " << endl;
  string nombreDeArchivoAEditar;
  getline(cin, nombreDeArchivoAEditar);  // Esta forma es mejor para leer strings. La forma peor (porque los espacios terminan la entrada) es cin >> nombreDeArchivoAEditar; 
  EditorDeTexto editor(nombreDeArchivoAEditar);
  editor.imprimir(cout);
  
  while(true)
  {
    cout << "¿Quieres insertar una línea (S/N)?" << endl;
    string opcion;
    cin >> opcion;
    if(opcion=="N" or opcion=="n")
      break;
    cout << "Dime donde: " << endl;
    int donde;
    cin >> donde;
    cout << "Dime el texto a insertar: " << endl;
    string linea;
    cin.ignore();  // Elimina basura que pueda haber en el buffer del teclado (típicamente el ENTER)
    getline(cin, linea);
    editor.insertar(linea, donde);
    editor.imprimir(cout);
  }
  return 0;
}





