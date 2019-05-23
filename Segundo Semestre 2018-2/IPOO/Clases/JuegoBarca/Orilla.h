/*
  Archivo: Orilla.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-08
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Orilla
  Responsabilidad: la misma que un Contenedor
  Colaboración: 
    - contiene un array de punteros a objetos
    - ninguna (luego lo mejoraremos)

*/

#ifndef Orilla_HH
#define Orilla_HH

#include<string>
#include<iostream>
using namespace std;
#include"Objeto.h"

class Orilla
{
  private:
    string nombre;
    int capacidadDeLaOrilla;
    Objeto *losObjetos[capacidadDeLaOrilla];  // Lo ideal sería cambiar este 3 por capacidadDeLaOrilla. Lo haremos con new/delete, cuando lleguemos a ese tema
    bool hayPersona;
    
  public:
    /** Construye una Orilla sin objetos
    */
    Orilla(string nombre, int capacidadDeLaOrilla=3);
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
    /** Retorna true si están todos los objetos en esta Orilla; y false en caso contrario
    */
    bool estanTodosAlli();
    /**
     * Imprime el contenido de la Orilla
    */
    void imprimir();
};

#endif
