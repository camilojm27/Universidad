/*
  Archivo: Test_HallDeLaFama.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-03-04
  Fecha última modificación: 2018-04-04
  Versión: 0.1
  Licencia: GPL
*/


/*
  Pruebas para el juego Tetris
  Para compilar: 
  g++ -std=c++11 ../HallDeLaFama.cpp Test_HallDeLaFama.cpp -o Test_HallDeLaFama
*/

#include "../HallDeLaFama.h"
#include <iostream>
using namespace std;



int main(int numeroArgumentos, char *argumentos[])
{
  HallDeLaFama hallDeLaFama;
  hallDeLaFama.nuevoGanador("Luisa", 50);
  hallDeLaFama.nuevoGanador("Ana", 45);
  hallDeLaFama.nuevoGanador("Rafa", 30);
  hallDeLaFama.nuevoGanador("Alfredo", 20);
  hallDeLaFama.nuevoGanador("Clara", 19);
  hallDeLaFama.nuevoGanador("Eva", 18);
  hallDeLaFama.nuevoGanador("Joao", 16);
  hallDeLaFama.nuevoGanador("Ramón", 15);
  hallDeLaFama.nuevoGanador("Santi", 10);
  hallDeLaFama.nuevoGanador("Rosa", 9);
  

  int puntaje = 16;  // El puntaje lo genera el juego
  string nombre;    // pero el nombre lo proporciona el usuario. Ello es un punto de entrada para hackers, como enseguida veremos.
  cout << "Tu puntaje ha sido de " << puntaje << ". Dime tu nombre: ";
  getline(cin, nombre);
  hallDeLaFama.nuevoGanador(nombre, puntaje);
  std::cout << "----------------------------" << std::endl;
  cout << hallDeLaFama.listaDeGanadores();
  
 
  return 0;
}