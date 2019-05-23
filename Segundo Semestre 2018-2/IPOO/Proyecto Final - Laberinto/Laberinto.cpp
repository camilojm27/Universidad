/*
  Archivo: Laberinto.cpp
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

#include "Laberinto.h"
#include <iostream>
#include <string>
#include <ncurses.h>
#include <sstream>

using namespace std;

Laberinto::Laberinto(int numeroFilas, int numeroColumnas, int numeroTesoros, int numeroGnomos, int numeroDragones, double porcentajeCasillasVacias)
{
  this->gameOver = false;
  this->numeroFilas = numeroFilas;
  this->numeroColumnas = numeroColumnas;
  this->numeroTesoros = numeroTesoros;
  this->numeroGnomos = numeroGnomos;
  this->numeroDragones = numeroDragones;
  this->porcentajeCasillasVacias = porcentajeCasillasVacias;
  this->tesorosDelJugador = 0;
  tablero = new int *[numeroFilas];

  for (int fila = 0; fila < numeroFilas; fila++)
  {
    tablero[fila] = new int[numeroColumnas];
    for (int columna = 0; columna < numeroColumnas; columna++)
      tablero[fila][columna] = 1; // Llena todo el laberinto con paredes
  }

  casillasVacias = 0;

  filaEntrada = 2+rand() % (numeroFilas-2);
  tablero[filaEntrada][0] = 5; // Pone la entrada
  filaSalida = 2+rand() % (numeroFilas-2);
  tablero[filaSalida][numeroColumnas - 1] = 6; // Pone la salida
  this->fabricarCamino();
}

Laberinto::~Laberinto()
{
  for (int fila = 0; fila < numeroFilas; fila++)
  {
    delete tablero[fila];
  }
  delete[] tablero;
}

void Laberinto::fabricarCamino()
{
  // Pone el camino de salida:
  casillasVacias += trazaLineaRecta(filaEntrada, 0, filaSalida, numeroColumnas - 1);
  // Pone caminos al azar:
  {
    for (int fila = 1; fila < numeroFilas - 1; fila++)
    {
      for (int columna = 1; columna < numeroColumnas - 1; columna++)
      {
        if (tablero[fila][columna] == 1)
        {
          int random = rand() % numeroFilas;
          tablero[random][columna] = 0;
          tablero[random][columna - 1] = 0;
        }
      }
    }
  }

  //DEFINE EL NUMERO QUE REPRESENTA A CADA OBJETO EN EL TABLERO//

  int Tesoro = 3;
  int Dragon = 4;
  
  //CREA EN UNA POSICION AL AZAR DETERMINADO OBJETO HASTA CUMPLIR LA CUOTA DE LA FUNCION CONSTRUCTORA//
  
  int Nomo = 2;
  for (int temp = 0; temp <= numeroTesoros; temp++)
    ponerEnCasillaVaciaAlAzar(Nomo);


  //FUNCION QUE UBICA EL TESORO AL LADO DEL NOMO //

  for (int temp = 0; temp <= numeroGnomos; temp++)
  {
    for (int fila = 2; fila < numeroFilas - 2; fila++)
    {
      for (int columna = 2; columna < numeroColumnas - 2; columna++)
      {
        if (tablero[fila][columna] == 2)
        {
          if (fila + 1 < 20)
            tablero[fila + 2][columna] = 0;
          if (fila - 1 > 0)
            tablero[fila - 2][columna] = 0;
          if (fila + 1 < 20)
            tablero[fila + 1][columna + 1] = 0;
          if (fila + 1 < 20)
            tablero[fila + 1][columna - 1] = 0;
          if (fila + 1 < 20)
            tablero[fila + 1][columna] = 0;
          if (columna - 1 > 0)
            tablero[fila][columna-1] = 0;
          if (columna + 1 < 20)
            tablero[fila][columna+1] = 0;
          if (fila + 1 < 20)
            tablero[fila + 1][columna] = 0;
          if (fila - 1 > 0)
            tablero[fila - 1][columna] = 0;
        }
      }
    }
  }

  //FUNCION QUE UBICA EL DRAGON AL LADO DE LA SALIDA//
  tablero[filaSalida][numeroColumnas - 2] = 4;

  //FUNCION QUE PINTA AL JUGADOR//
  tablero[filaEntrada][1] = 8;
  this->JugadorColumna = 1;
  this->JugadorFila = filaEntrada;

  //FUNCIN QUE PINTA UNA NUEVA SALIDA//
  tablero[filaSalida][numeroColumnas - 1] = 6;

  //FUNCION QUE ENCIERRA LA SALIDA //
  if (filaSalida + 1 <= 19 and filaSalida - 1 >= 0)
  {
    tablero[filaSalida + 1][numeroColumnas - 1] = 7;
    tablero[filaSalida - 1][numeroColumnas - 1] = 7;
  }

}

int Laberinto::trazaLineaRecta(int filaInicial, int columnaInicial, int filaFinal, int columnaFinal)
{
  float y = (filaFinal - filaInicial);
  float x = (columnaFinal - columnaInicial);
  float m1 = y / x;

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
  /* 

  for (int fila = 0; fila < numeroFilas; fila++)
    for (int columna = 0; columna < numeroColumnas; columna++)
      tablero[fila][columna] = (fila*columna) % 10;
  
  */

  for (int fila = 0; fila < numeroColumnas; fila++)
    tablero[19][fila] = 1;

  for (int fila = 0; fila < numeroColumnas; fila++)
    tablero[0][fila] = 1;

  for (int fila = 0; fila < numeroFilas; fila++)
    tablero[fila][0] = 1;
    
  for (int fila = 0; fila < numeroFilas; fila++)
    tablero[fila][0] = 1;

  tablero[filaEntrada][0] = 5;
  tablero[filaSalida][numeroColumnas - 1] = 6;
  tablero[filaSalida][numeroColumnas - 2] = 4;
  
  

  for (int fila = 0; fila < numeroFilas; fila++)
    for (int columna = 0; columna < numeroColumnas; columna++)
      terminal.imprimirTablero(fila + 1, columna + 1, tablero[fila][columna]);

  return;
}

void Laberinto::buscarCasillaAlAzar(int &fila, int &columna, int contenido)
{
  do
  {
    fila = 2+rand() % (numeroFilas-2);
    columna = 2+rand() % (numeroColumnas-2);
  } while (tablero[fila][columna] != contenido);
}

void Laberinto::ponerEnCasillaVaciaAlAzar(int contenido)
{
  int fila, columna;
  buscarCasillaAlAzar(fila, columna, 1);
  tablero[fila][columna] = contenido;
}

void Laberinto::movimientoJugador(int jugada)
{
  int movimiento = 1;
  if (jugada == 1)
  {
    if (JugadorFila - 1 >= 0)
    {
      if (tablero[JugadorFila - 1][JugadorColumna] == 0)
      {
        tablero[JugadorFila - 1][JugadorColumna] = 8;
        tablero[JugadorFila][JugadorColumna] = 0;
        JugadorFila = JugadorFila - 1;
        movimiento++;
      }
      if (tablero[JugadorFila - 1][JugadorColumna] == 2)
      {
        mrcurses();
        tablero[JugadorFila - 1][JugadorColumna] = 0;
      }
    }
  }

  if (jugada == 4)
  {
    if (JugadorColumna - 1 >= 0)
    {
      if (tablero[JugadorFila][JugadorColumna - 1] == 0)
      {
        tablero[JugadorFila][JugadorColumna - 1] = 8;
        tablero[JugadorFila][JugadorColumna] = 0;
        JugadorColumna = JugadorColumna - 1;
        movimiento++;
      }
      if (tablero[JugadorFila][JugadorColumna - 1] == 2)
      {
        mrcurses();
        tablero[JugadorFila][JugadorColumna - 1] = 0;
      }
    }
  }

  if (jugada == 2)
  {
    if (JugadorFila + 1 < numeroFilas)
    {
      if (tablero[JugadorFila + 1][JugadorColumna] == 0)
      {
        tablero[JugadorFila + 1][JugadorColumna] = 8;
        tablero[JugadorFila][JugadorColumna] = 0;
        JugadorFila = JugadorFila + 1;
        movimiento++;
      }
      if (tablero[JugadorFila + 1][JugadorColumna] == 2)
      {
        mrcurses();
        tablero[JugadorFila + 1][JugadorColumna] = 0;
      }
    }
  }

  if (jugada == 3)
  {
    if (JugadorColumna + 1 < numeroColumnas)
    {
      if (tablero[JugadorFila][JugadorColumna + 1] == 0)
      {
        tablero[JugadorFila][JugadorColumna + 1] = 8;
        tablero[JugadorFila][JugadorColumna] = 0;
        JugadorColumna = JugadorColumna + 1;
        movimiento++;
      }
      if (tablero[JugadorFila][JugadorColumna + 1] == 2)
      {
        mrcurses();
        tablero[JugadorFila][JugadorColumna + 1] = 0;
      }
    }
  }

}

void Laberinto::mrcurses()
{
  clear();
  initscr();
  noecho();
  cbreak();
  srand(time(0));

  int yMax, xMax;
  getmaxyx(stdscr, yMax, xMax);

  WINDOW *menuwin = newwin(6, xMax - 12, yMax - 8, 5);
  box(menuwin, 0, 0);
  refresh();
  wrefresh(menuwin);
  keypad(menuwin, true);
  
  string choices[3] = {"9", "-12", "-7"};
  string choices2[3] = {"Board", "Ram", "ChipSocket"};
  string choices3[3] = {"Manzana", "Pera", "Banano"};
  string choices4[3] = {"el", "ella", "ellos"};
  string choices5[3] = {"0.5", "2", "1"};
  string choices6[3] = {"Un sistema operativo", "Un programa", "Un controlador/driver global"};
  string choices7[3] = {"Poder tener un hardware potente", "Crear algoritmos eficientes", "La creacion de lenguajes de programacion mas flexibles y potentes"};
  string choices8[3] = {"Frontend", "Kernel", "Backend"};
  string choices9[3] = {"Esta mal optimizado", "Por ser una maquina virtual ejecutada en linux", "Es escrito en java y al ser de alto nivel lo vuelve lento"};
  
  int choice;
  int highlight = 0, ask = 0;

  
  ask = 1+rand() % 9;
  if (ask == 1)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("-9 % 21 = ?");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices[highlight].c_str());
    if (choices[highlight] == "-12")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  if (ask == 2)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Cual es la unidad de Hardware encargada del manejo de la memoria temporal en un equipo?");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices2[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices2[highlight].c_str());
    if (choices2[highlight] == "Ram")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  if (ask == 3)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Cual de estas frutas es amarilla");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices3[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices3[highlight].c_str());
    if (choices3[highlight] == "Banano")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }

  if (ask == 4)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("El japones Kanojo hace referencia a?");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices4[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices4[highlight].c_str());
    if (choices4[highlight] == "ella")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  if (ask == 5)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Cual es la mitad de 1 + 1"); 
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices5[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices5[highlight].c_str());
    if (choices5[highlight] == "1")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  
   if (ask == 6)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Cuando hablamos de un 'Kernel' nos referimos a: ");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices6[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices6[highlight].c_str());
    if (choices6[highlight] == "Un controlador/driver global")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  
  if (ask == 7)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Cual ha sido el principal problema en el desarrollo de la IA (Inteligencia Artifical)");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices7[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices7[highlight].c_str());
    if (choices7[highlight] == "Poder tener un hardware potente")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  
  if (ask == 8)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("Como se le llama a todos los servicios, protocolos, bases de datos que se ejecutan en ua aplicacion o pagina web"); 
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices8[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices8[highlight].c_str());
    if (choices8[highlight] == "Backend")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }
  
  if (ask == 9)
  {
    start_color(); 
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    printw("El sistema operativo android requiere un poco mas recursos que iOS por que :");
    mvchgat(0, 0, -1, A_BLINK, 1, NULL);

    refresh();
    while (1)
    {
      for (int i = 0; i < 3; i++)
      {
        if (i == highlight)
          wattron(menuwin, A_REVERSE);
        mvwprintw(menuwin, i + 1, 1, choices9[i].c_str());
        wattroff(menuwin, A_REVERSE);
      }
      choice = wgetch(menuwin);

      switch (choice)
      {
      case KEY_UP:
        highlight--;
        if (highlight == -1)
          highlight = 0;
        break;
      case KEY_DOWN:
        highlight++;
        if (highlight == 3)
          highlight = 2;
        break;
      default:
        break;
      }
      if (choice == 10)
        break;
    }

    printw("Your Choice was: %s", choices9[highlight].c_str());
    if (choices9[highlight] == "Por ser una maquina virtual ejecutada en linux")
    {
      clear();
      printw("Tesoro ganado, puedes seguir");
      tesorosDelJugador++;
      this-> puntaje = puntaje+10;
    }
    else
    {
      clear();
      printw("El gnomo te ha matado :( game over", 55, 30);
      refresh();

      gameOver = true;
    }
  }

  getch();
  endwin();
}

void Laberinto::estadoDelJuego()
{
  string nombreJugador;
  
  if (tablero[JugadorFila][JugadorColumna + 1] == 4 or tablero[JugadorFila + 1][JugadorColumna] == 4 or tablero[JugadorFila][JugadorColumna - 1] == 4 or tablero[JugadorFila - 1][JugadorColumna] == 4)
  {
    if(tesorosDelJugador == 5)
    {
      terminal.imprimirMensaje(23,0, "Puedes Pasar\n");
      gameOver = true;
    }
    
    else 
      terminal.imprimirMensaje(23,0, "No tienes todos los tesoros , MUERE \n");
      gameOver = true;
  }
  
  
}

void Laberinto::jugar()
{
  terminal.imprimirMensaje(23,0, " Ingresa tu nombre");
  terminal.leerNombre();
  terminal.imprimirMensaje(23,0, "                          ");   //Limpia la pantalla de la terminal al imprimir mensajes
  terminal.imprimirMensaje(24,0, "                          ");   //Limpia la pantalla de la terminal al imprimir mensajes
  terminal.imprimirMensaje(26,0, "                          ");   //Limpia la pantalla de la terminal al imprimir mensajes
  terminal.imprimirMensaje(27,0, "                          ");   //Limpia la pantalla de la terminal al imprimir mensajes
  HallDeLaFama hallDeLaFama("ganadoresLaberinto.txt");
  terminal.imprimirMensaje(24, 0, "Utiliza las teclas para moverte");
  do
  {
    int jugada = terminal.leerJugada();
    this->movimientoJugador(jugada);
    this->imprimir();
    this->estadoDelJuego();
    continue;
  } while (!gameOver);
  hallDeLaFama.nuevoGanador(userName, puntaje);
  hallDeLaFama.listaDeGanadores();
}

