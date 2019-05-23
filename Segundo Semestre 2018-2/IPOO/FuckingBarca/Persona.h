/*
  Archivo: Persona.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-05
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Persona
  Responsabilidad: La persona en el juego de la barca. 
    Recibe órdenes (típicamente del teclado) y decide coger o soltar objetos 
    y subirse a la barca o a las orillas.
  Colaboración: una Barca, la Orilla en la que estoy y conoce (aunque no puede usar) la otra Orilla
*/


#ifndef Persona_HH
#define Persona_HH

#include"Barca.h"
#include"Orilla.h"
#include"Objeto.h"
#include<iostream>
using namespace std;


class Persona
{
  private:
    Barca *barca;
    Orilla *orillaIzquierda;
    Orilla *orillaDerecha;
    Orilla *orillaEnLaQueEstoy;

  public:
    /** La persona conoce la Barca y las dos Orillas
    */
    Persona(Barca *barca, Orilla *orillaIzquierda, Orilla *orillaDerecha);
    /** Recibe una órden, la ejecuta y retorna false si el juego terminó (y true en caso contrario)
    */
    bool recibirOrden(int codigo);
};

#endif

