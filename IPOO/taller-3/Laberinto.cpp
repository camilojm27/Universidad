/*
  Archivo: Laberinto.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-09-17
  Fecha última modificación: 2018-09-24
  Versión: 0.1
  Licencia: GPL
*/

#include "Laberinto.h"

Laberinto::Laberinto(int numeroFilas, int numeroColumnas, int numeroTesoros, int numeroGnomos, int numeroDragones, double porcentajeCasillasVacias)
{
  this->numeroFilas = numeroFilas;
  this->numeroColumnas = numeroColumnas;
  this->numeroTesoros = numeroTesoros;
  this->numeroGnomos = numeroGnomos;
  this->numeroDragones = numeroDragones;
  this->porcentajeCasillasVacias = porcentajeCasillasVacias;
  tablero = new int*[numeroFilas];
  for(int fila=0; fila<numeroFilas; fila++)
  {
    tablero[fila] = new int[numeroColumnas];
    for(int columna=0; columna<numeroColumnas; columna++)
      tablero[fila][columna] = 1;  // Llena todo el laberinto con paredes
  }
  casillasVacias = 0;

  filaEntrada = rand() % numeroFilas;
  tablero[filaEntrada][0] = 5;  // Pone la entrada
  filaSalida = rand() % numeroFilas;
  tablero[filaSalida][numeroColumnas-1] = 6;  // Pone la salida
}


Laberinto::~Laberinto()
{
  for(int fila=0; fila<numeroFilas; fila++)
    delete tablero[fila];
  delete [] tablero;
}


void Laberinto::fabricarCamino()
{
  // Taller 4
  
  // Hacer el camino de salida:
  casillasVacias += trazaLineaRecta(filaEntrada, 0, filaSalida, numeroColumnas-1);
  // Hacer caminos al azar:
 
  for (int veces=0; veces <= 15; veces++)
  {
    
    int  radum = 2+rand()%(4-2);
    ponerEnCasillaVaciaAlAzar(radum);
    
  }
  
  // Poner los Tesoros al azar

  // Poner los Gnomos al azar

  // Poner los Dragones al azar, cerca de la salida

}


int Laberinto::trazaLineaRecta(int filaInicial, int columnaInicial, int filaFinal, int columnaFinal)
{
  int contarVacias = 0;

  // Taller 4
  
   int m1 = (columnaFinal*1.0 - columnaInicial) / (filaFinal - filaInicial*1.0);
  
  
  for(int fila=1; fila<numeroFilas-1;fila++)
  {
    for(int columna=1; columna<numeroColumnas-1;columna++)
    {
      int m2 = (columnaFinal*1.0 - columna) / (filaFinal - fila*1.0);
      
      if(m1 == m2 || m1+1 == m2 ==  m1-1)
      {
        //cout << m1 << endl;
        tablero[fila][columna] = 0;
      }
      else
      {
        if(m1==0)
        {
          tablero[fila][columna] = 0;
        }
        if(tablero[fila][columna] == 1)
        {
          int random = rand() % numeroFilas;
          int randomColu = rand() % numeroColumnas-1;

          tablero[random][columna] = 0;
          
          /*if(columna == numeroColumnas/2){
            break;
          }*/
        }
        else
        {
          //cout << m1 << endl;
          //cout << m2 << endl;
          tablero[fila][columna] = 1;
          
        }
        
      }
      
    }
  }
  
  
  return contarVacias;
}





void Laberinto::imprimir()
{
  
  for(int columna=0; columna<numeroColumnas+2; columna++)
    cout << "X";
  cout << endl;
  for(int fila=0; fila<numeroFilas; fila++)
  {
    cout << "X";
    for(int columna=0; columna<numeroColumnas; columna++)
      if(tablero[fila][columna] == 0)
        cout << " ";
      else
        cout << tablero[fila][columna];
    cout << "X" << endl;
  }
  for(int columna=0; columna<numeroColumnas+2; columna++)
    cout << "X";
  cout << endl;
}
    

void Laberinto::buscarCasillaAlAzar(int &fila, int &columna, int contenido)
{
  do
  {
    fila = rand() % numeroFilas;
    columna = rand() % numeroColumnas;
  }
  while(tablero[fila][columna] != contenido);
}


void Laberinto::ponerEnCasillaVaciaAlAzar(int contenido)
{
  int fila, columna;
  buscarCasillaAlAzar(fila, columna, 1);
  tablero[fila][columna] = contenido;
}




