/*
  Archivo: Laberinto.h
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
  Clase: Laberinto
  Responsabilidad: 
    - Mantener los datos de un laberinto que son numero de filas, numero de olumnas, número de tesoros, gnomos y dragones, así como el porcentaje de casillas que van a estar vacías, respecto al total de casillas (numero de filas * numero de columnas). En cada casilla puede haber:
        0 = vacía
        1 = pared
        2 = tesoro
        3 = gnomo
        4 = dragon
        5 = entrada (tiene que estar en la columna de más a la izquierda)
        6 = salida (tiene que estar en la columna de más a la derecha)
    - Construir al azar un laberinto que cumpla con los datos especificados.
    - Imprimir el laberinto en pantalla.
  Colaboración: 
    - Contiene un array de dos dimensiones de enteros, implementado como un puntero doble (para que sea de tamaño variable).
*/

#ifndef LABERINTO_H
#define LABERINTO_H

#include <cstdlib>
#include <cmath>
#include <iostream>
#include <ncurses.h>
#include "DispositivoTerminal.h"
#include "HallDeLaFama.h"

using namespace std;

class Laberinto
{
private:
  int numeroFilas;
  int numeroColumnas;
  int numeroTesoros;
  int numeroGnomos;
  int numeroDragones;
  double porcentajeCasillasVacias;
  int **tablero;
  int casillasVacias;
  int filaEntrada;
  int filaSalida;
  int JugadorColumna;
  int JugadorFila;
  int tesorosDelJugador;
  int puntosDelJugador;
  DispositivoTerminal terminal;

public:
  Laberinto(int numeroFilas, int numeroColumnas, int numeroTesoros, int numeroGnomos, int numeroDragones, double porcentajeCasillasVacias);
  ~Laberinto();
  void fabricarCamino();
  void imprimir();
  void jugar(); //Se encarga de mantener en ejecucion el juego 
  void movimientoJugador(int jugada); // Se encarga del movimiento del jugador
  void estadoDelJuego(); //Funcion encargada de saberi si el jugador llego al final con todos los tesoros (Dragon)
  void mrcurses(); //Funcion encargada de realizar las preguntas a los juadores (Gnomo)
  bool gameOver;  //Variable encargada de terminar el juego
  string userName; //Donde se almacena el nombre del usuario
  unsigned puntaje= 0; //PUntaje del jugador

protected:
  /**
      Retorna el número de casillas que ocupó el camino trazado
    */
  int trazaLineaRecta(int filaInicial, int columnaInicial, int filaFinal, int columnaFinal);
  void buscarCasillaAlAzar(int &fila, int &columna, int contenido);
  void ponerEnCasillaVaciaAlAzar(int contenido);
};

#endif
