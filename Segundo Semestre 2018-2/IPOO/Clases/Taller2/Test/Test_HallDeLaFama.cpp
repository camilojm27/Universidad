/*
  Archivo: Test_HallDeLaFama.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-03-04
  Fecha última modificación: 2018-09-16
  Versión: 0.1
  Licencia: GPL
*/


/*
  Pruebas para el juego 
  Para compilar: 
  g++ -std=c++11 ../HallDeLaFama.cpp Test_HallDeLaFama.cpp -o Test_HallDeLaFama
*/

#include "../HallDeLaFama.h"
#include <iostream>
using namespace std;



int main(int numeroArgumentos, char *argumentos[])
{
  HallDeLaFama hallDeLaFama;
  hallDeLaFama.nuevoGanador("CCC", 30);
  hallDeLaFama.nuevoGanador("AAA", 10);
  hallDeLaFama.nuevoGanador("BBB", 20);
  hallDeLaFama.nuevoGanador("DDD", 40);
  
  int puntaje = 5;  // El puntaje lo genera el juego
  string nombre;    // pero el nombre lo proporciona el usuario. Ello es un punto de entrada para hackers, como enseguida veremos.
  cout << "Tu puntaje ha sido de " << puntaje << ". Dime tu nombre: ";
  getline(cin, nombre);
  hallDeLaFama.nuevoGanador(nombre, puntaje);
  cout << hallDeLaFama.listaDeGanadores();
  
  return 0;
}



