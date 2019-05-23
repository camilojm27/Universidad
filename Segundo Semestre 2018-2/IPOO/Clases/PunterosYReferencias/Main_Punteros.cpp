/*
  Archivo: Main_Punteros.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-28
  Fecha última modificación: 2018-09-28
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: entender punteros

#include<iostream>
#include<string>
using namespace std;



int main()
{
  double nota=4.5;
  double *piola = &nota;
/* Equivale a:
  double *piola;
  piola = &nota;
*/

  cout << "La nota es " << nota << endl;
  // Se suben dos décimas. Hay dos formas:
  nota += 0.2;
  (*piola) += 0.2;
  cout << "La nota ahora es " << nota << endl;
  cout << "La nota ahora es " << (*piola) << endl;
  cout << "El tamaño de un int en esta máquina es " << sizeof(int) << " bytes." << endl;
  cout << "El tamaño de un double en esta máquina es " << sizeof(double) << " bytes." << endl;



  string amigos[4] = { "Ana", "Lorena", "Jorge", "Elias" };
  int numeroAmigos = 4;

/*
  string nombre;

  for(int cualAmigo=0; cualAmigo<4; cualAmigo++)
  {
    cout << "Dime el nombre de un amigo: ";
    getline(cin, nombre);
    amigos[cualAmigo] = nombre;
    numeroAmigos++;
  }
*/  


  // Forma sencilla;
  cout << "Mis amigos son: " << endl;
  string * miAmigo = amigos;  // La dirección de un array es el nombre del array (no hay que usar &). La razón de ello es que los arrays son punteros.
  for(int cualAmigo=0; cualAmigo<numeroAmigos+5; cualAmigo++)
  {
    cout << *miAmigo << endl;
    miAmigo++;
  }
  
  // Más complicado:
  cout << "Mis amigos son: " << endl;
  for(string * miAmigo = amigos; miAmigo<=&amigos[3]; miAmigo++)
    cout << *miAmigo << endl;


  // Otra forma, más habitual:
  cout << "Mis amigos son: " << endl;
  miAmigo = amigos;  // Vuelve a apuntar al primer elemento.
  while(numeroAmigos--)
    cout << *miAmigo++ << endl;
  
  
  return 0;
}

