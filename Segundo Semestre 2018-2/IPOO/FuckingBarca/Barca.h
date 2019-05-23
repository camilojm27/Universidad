/*
  Archivo: Barca.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-08
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Barca
  Responsabilidad: la misma que un Contenedor, pero además puede navegar a una orilla
  Colaboración:
  - contiene un array de punteros a objetos
  - ninguna (luego lo mejoraremos a es parecido a un Contenedor)

*/

#ifndef Barca_HH
#define Barca_HH

#include<string>
#include<iostream>
using namespace std;
#include"Objeto.h"
#include"Orilla.h"

class Barca
{
  private:
    const int capacidadDeLaBarca;
    Objeto *losObjetos[1]; // Lo ideal sería cambiar este 1 por capacidadDeLaBarca. Lo haremos con new/delete, cuando lleguemos a ese tema
    bool hayPersona;
    Orilla *orillaEnLaQueEstoy;
    
  public:
    /** Construye una barca sin objetos
    */
    Barca(int capacidadDeLaBarca=1);
    /** Recibe y guarda un objeto
     * Retorna false si no se pudo hacer (porque no caben más objetos)
    */
    bool recibe(Objeto *objeto);
    /** Busca un objeto, lo retorna y lo borra de la lista.
     * Pero si el objeto no existe, retorna un puntero nulo.
    */
    Objeto *dame(string nombre);
    /**
     * Retorna true si un objeto se puede comer a otro y no está la persona.
    */
    bool alguienPuedeComer();
    /**
     * Sirve para indicar si la persona se subió (ocurrio=true) o se bajo (ocurrio=false)
    */
    void seSubioPersona(bool ocurrio);
    /** La Barca navega hasta la orilla indicada
    */
    void navegarA(Orilla *orilla);
    /**
     * Imprime el contenido de la Barca
    */
    void imprimir();
};

#endif
