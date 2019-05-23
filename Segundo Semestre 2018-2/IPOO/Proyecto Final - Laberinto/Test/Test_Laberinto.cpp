/*
  Archivo: Test_Laberinto.cpp
  Basado en el codigo de Angel Garcia Bolaños angel.garcia@correounivalle.edu.co
  Autores:
           
  Santiago Martinez Mesa (1823107-3743)
  Camilo Mezu Mina (1824313)
  Juan David Martinez (1826113)
           
  Email: camilo.mezu@correounivalle.edu.co
  santiago.mesa@correounivalle.edu.co
  juan.martinez.narvaez@correounivalle.edu.co
  
  Fecha creación: 2018-09-17
  Fecha última modificación: 2019-04-22
  Versión: 0.9
  Licencia: GPL
*/


/*
  Pruebas para el Laberinto 
  Para compilar escribir make en el directorio principal (se necesita NCURSES en el sistema): 
  make
*/

#include<stdio.h>
#include "../Laberinto.h"
#include "../DispositivoTerminal.h"
#include "../HallDeLaFama.h"
//#include "../Menu.cpp"
#include<cstdlib>
#include <iostream>
using namespace std;

int main()
{
  srand(time(0));
 
  Laberinto laberinto(20,80,5,3,1,40.0);
  laberinto.jugar();
  
  return 0;
}
