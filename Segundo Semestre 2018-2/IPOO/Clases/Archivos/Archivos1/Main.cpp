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
  Manejo de archivos. Quitar saltos de línea a un archivo.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
  ofstream flujoEscribir;
  flujoEscribir.open("archivo_salida.txt");
  if(not flujoEscribir.is_open())
  {
    cerr << "ERROR al tratar de abrir el archivo de salida " << endl;
    return 1;
  }
  
  ifstream flujoLeer;
  flujoLeer.open("archivo_entrada.txt");
  if(not flujoLeer.is_open())
  {
    cerr << "ERROR al tratar de abrir el archivo de entrada" << endl;
    flujoEscribir.close();
    return 2;
  }

//  flujoEscribir << "#include<iostream>\nusing namespace std;\nint main()\n{\n  cout << \"Hola mundo\" << endl;\n}\n";
//  return 0;
  
  
  string linea;
  while(not flujoLeer.eof())
  {
//    getline(flujoLeer, linea); // Esto es mejor (porque termina al encontrar un espacio en blanco) que:  flujoLeer >> linea;
    flujoLeer >> linea;
    flujoEscribir << "(" << linea << ")" << endl;
  }
  
  flujoEscribir.close();
  flujoLeer.close();
  
  return 0;
}





