/*
  Archivo: Laberinto.cpp
  Basado en el codigo de Angel Garcia Bolaños angel.garcia@correounivalle.edu.co
  Autores:
           
  Santiago Martinez Mesa (1823107-3743)
  Camilo Mezu Mina (1824313)
           
  Email: camilo.mezu@correounivalle.edu.co
  santiago.mesa@correounivalle.edu.co
  
  Fecha creación: 2018-09-17
  Fecha última modificación: 2019-02-19
  Versión: 0.4
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
  tablero = new int *[numeroFilas];
  for (int fila = 0; fila < numeroFilas; fila++)
  {
    tablero[fila] = new int[numeroColumnas];
    for (int columna = 0; columna < numeroColumnas; columna++)
      tablero[fila][columna] = 1; // Llena todo el laberinto con paredes
  }
  casillasVacias = 0;

  filaEntrada = rand() % numeroFilas;
  tablero[filaEntrada][0] = 5; // Pone la entrada
  filaSalida = rand() % numeroFilas;
  tablero[filaSalida][numeroColumnas - 1] = 6; // Pone la salida
}

Laberinto::~Laberinto()
{
  for (int fila = 0; fila < numeroFilas; fila++)
    delete tablero[fila];
  delete[] tablero;
}

void Laberinto::fabricarCamino()
{
  // Taller 4

  // Hacer el camino de salida:
  casillasVacias += trazaLineaRecta(filaEntrada, 0, filaSalida, numeroColumnas - 1);
  // Hacer caminos al azar:
  //for(int veces=0; veces <=6; veces++)
  {
    for (int fila = 1; fila < numeroFilas - 1; fila++)
    {
      for (int columna = 1; columna < numeroColumnas - 1; columna++)
      {
        if (tablero[fila][columna] == 1)
        {
          int random = rand() % numeroFilas;
          // randomColu = rand() % numeroColumnas-1;
          tablero[random][columna] = 0;
          tablero[random][columna - 1] = 0;
          // tablero[random][columna-1] = 0;
        }
      }
    }
  }

  //PRIMERA FUNCION PARA COLOCAR OBJETOS //
  /*
  for (int veces=0; veces <= 15; veces++)
  {
    int  radum = 2+rand()%(4-2);
    ponerEnCasillaVaciaAlAzar(radum);
  }
  */

  //SEGUNDA FUNCION PARA COLOCAR OBJETOS //

  //DEFINE EL NUMERO QUE REPRESENTA A CADA OBJETO EN EL TABLERO//

  int Nomo = 2;
  int Tesoro = 3;
  int Dragon = 4;

  //CREA EN UNA POSICION AL AZAR DETERMINADO OBJETO HASTA CUMPLIR LA CUOTA DE LA FUNCION CONSTRUCTORA//

  for (int temp = 0; temp <= numeroTesoros; temp++)
    ponerEnCasillaVaciaAlAzar(Nomo);

  for (int temp = 0; temp <= numeroGnomos; temp++)
    ponerEnCasillaVaciaAlAzar(Tesoro);

  for (int temp = 0; temp <= numeroDragones; temp++)
    ponerEnCasillaVaciaAlAzar(Dragon);

  tablero[filaEntrada][0] = 5;
  tablero[filaSalida][numeroColumnas - 1] = 6;
}

int Laberinto::trazaLineaRecta(int filaInicial, int columnaInicial, int filaFinal, int columnaFinal)
{

  //SEPARA LA FUNCION DE LA ECUACION DE LA RECTA EN PARTES PARA FACILITAR EL CALCULO DE
  // LAS VARIABLES. //

  float y = (filaFinal - filaInicial);
  float x = (columnaFinal - columnaInicial);
  float m1 = y / x;

  //RETORNA SOLO VALORES ENTEROS, NO FUNCIONA ADECUADAMENTE //

  //float m2 = (filaFinal - filaInicial) / (columnaFinal - columnaInicial);
  //cout << pendiente << endl;
  //cout << pendiente2 << endl

  //VALOR TEMPORAL USADO COMO CONTADOR//
  int contarVacias = 0;

  for (int posx = 1; posx < columnaFinal; posx++)
  {
    int ecuacionRecta = (m1 * posx) + (m1 * columnaFinal * -1) + filaFinal;
    tablero[ecuacionRecta][posx] = 0;
    tablero[ecuacionRecta][posx + 1] = 0;
    tablero[ecuacionRecta][posx - 1] = 0;
    contarVacias++;
  }

  return contarVacias;
}

void Laberinto::imprimir()
{

  for (int columna = 0; columna < numeroColumnas + 2; columna++)
    cout << "X";
  cout << endl;
  for (int fila = 0; fila < numeroFilas; fila++)
  {
    cout << "X";
    for (int columna = 0; columna < numeroColumnas; columna++)
      if (tablero[fila][columna] == 0)
        cout << " ";
      else
        cout << tablero[fila][columna];
    cout << "X" << endl;
  }
  for (int columna = 0; columna < numeroColumnas + 2; columna++)
    cout << "X";
  cout << endl;
}

void Laberinto::buscarCasillaAlAzar(int &fila, int &columna, int contenido)
{
  do
  {
    fila = rand() % numeroFilas;
    columna = rand() % numeroColumnas;
  } while (tablero[fila][columna] != contenido);
}

void Laberinto::ponerEnCasillaVaciaAlAzar(int contenido)
{
  int fila, columna;
  buscarCasillaAlAzar(fila, columna, 1);
  tablero[fila][columna] = contenido;
}
