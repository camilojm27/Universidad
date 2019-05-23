/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-22
  Fecha última modificación: 2017-09-22
  Versión: 0.1
  Licencia: GPL
*/


#include<iostream>
using namespace std;


int main()
{
cout << "[1]" << endl;
  int pagos[100-2];
cout << "[2]" << endl;

  double notas[5] = { 4.8, 5, 3, 0.001, 3.7 };
cout << "[3]" << endl;
  
  string amigos[3] = { "Ana", "Luis", "Lorena" };
  
cout << "[4]" << endl;
  cout << "Uno de mis amigos es " << amigos[1] << endl;
  
  amigos[1] = "Felipe"; // Cambié de amigo
  cout << "Uno de mis amigos es " << amigos[1] << endl;
  amigos[1][5] = 'a';
  cout << "Uno de mis amigos es " << amigos[1] << endl;
  
cout << "[5]" << endl;
  double promedio = 0;
  cout << "promedio=" << promedio << endl;
  for(int cualNota = 0; cualNota < 5; cualNota++)
  {
    promedio = promedio + notas[cualNota];
 //   cout << "cualNota=" << cualNota << ", notas[cualNota]=" << notas[cualNota] << ", promedio=" << promedio << endl;
  }
  
cout << "[6]" << endl;
  promedio = promedio / 5; 
  cout << "Mi nota promedio es " << promedio << endl;
cout << "[7]" << endl;


// Array de dos dimensiones:

  double notasDeClase[4][5] = 
  {
    {3,4,5,3,4},
    {2,2,2,2,2},
    {0,0,0,0,0},
    {5,5,5,5,5},
  };


  promedio=0;
  for(int cualEstudiante=0; cualEstudiante<4; cualEstudiante++)
    for(int cualNota=0; cualNota<5; cualNota++)
      promedio = promedio + notasDeClase[cualEstudiante][cualNota];
  promedio = promedio / (5*4);
  cout << "La nota promedio de la clase es " << promedio << endl;



/*
  Camion miFlota[40];
  
  miFlota[3].hacerMudanza();
*/  
  
  return 0;
}











