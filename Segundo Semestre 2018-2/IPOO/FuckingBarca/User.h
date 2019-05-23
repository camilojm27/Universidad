/*
  Archivo: User.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-12
  Fecha última modificación: 2019-02-12
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: User
  Responsabilidad: Leer el teclado, recibir las ordenes que de un humano, y 
  enviarlas a la Persona para que las cumpla.
  Colaboración: conoce una Persona
*/


#ifndef User_HH
#define User_HH

#include"Persona.h"
#include<iostream>
using namespace std;


class User
{
  private:
    Persona &persona;
    
  public:
    User(Persona &persona);
    void jugar();
};

#endif

