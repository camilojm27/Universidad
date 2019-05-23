/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-28
  Fecha última modificación: 2018-09-28
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: entender referencias

#include<iostream>
#include<string>
using namespace std;



int main()
{
  cout << "Dime tu nombre: ";
  string nombre;
//  cin >> nombre;    // No es la mejor forma
  getline(cin, nombre);
  
  cout << "Hola " << nombre << endl;
  
  string &miNombre = nombre; // A las referencias hay que darlas su valor a la vez que se declaran
/*
  string &miNombre;  // ERROR: referencia sin valor inicial
  miNombre = nombre; // ERROR: Las referencias no se pueden cambiar
*/

  cout << "Hasta luego " << miNombre << endl;
  
  miNombre = "Luisa";
  cout << "Hola " << nombre << endl;
  cout << "Hasta luego " << miNombre << endl;
  return 0;
}

