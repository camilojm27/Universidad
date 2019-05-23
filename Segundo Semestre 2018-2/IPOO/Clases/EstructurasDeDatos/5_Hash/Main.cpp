/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-12-01
  Fecha última modificación: 2017-12-01
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: usar un hash que traduzca strings (ìndices) en otros strings (valores)

#include<string>
#include<iostream>
#include"Hash.h"
using namespace std;



int main()
{
  Hash diccionario;
  diccionario.imprimir();
  cout << endl;

  diccionario.anadir("red", "rojo");
  diccionario.anadir("blue", "azul");
  diccionario.anadir("yellow", "amarillo");
  diccionario.anadir("black", "negro");
  diccionario["pink"] = "rosa";
  diccionario["white"] = "blanco";
  diccionario["violet"] = "violeta";
  diccionario["brown"] = "cafe";
  diccionario.buscar("cyan") = "azul claro";
  diccionario.imprimir();
  cout << endl;

  string colorIngles;
  while(true)
  {
    cout << "Dime un color en inglés (pulsa ENTER para terminar): ";
    getline(cin, colorIngles);
    if(colorIngles=="")
      break;
    cout << "El color " << colorIngles << " se dice " << diccionario[colorIngles] << " en español" << endl;
    cout << "El color " << colorIngles << " se dice " << diccionario.buscar(colorIngles) << " en español" << endl;
  }


  diccionario.borrar("blue");
  diccionario.imprimir();
  cout << endl;

  return 0;
}
