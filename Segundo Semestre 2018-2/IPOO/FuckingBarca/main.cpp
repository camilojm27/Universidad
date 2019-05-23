/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-05
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

#include"Persona.h"
#include"Objeto.h"
#include "User.h"
#include "Barca.h"
#include "Orilla.h"

int main()
{
  Objeto lobo("lobito");
  Objeto oveja("ovejita");
  Objeto lechuga("lechuguita");
  Barca barca;
  Orilla orillaIzquierda("ORILLA IZQUIERDA"), orillaDerecha("ORILLA DERECHA");
  orillaIzquierda.seSubioPersona(true);
  orillaIzquierda.recibe(&lobo);
  orillaIzquierda.recibe(&oveja);
  orillaIzquierda.recibe(&lechuga);
  Persona persona(&barca, &orillaIzquierda, &orillaDerecha);
  User usuario(persona);
  
  usuario.jugar();
  
  
  
//  int x=100;
//  int x(100); // Es equivalente a la sentencia anterior
}


