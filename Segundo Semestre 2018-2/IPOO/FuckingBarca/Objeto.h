/*
  Archivo: Objeto.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-05
  Fecha última modificación: 2019-02-05
  Versión: 0.2
  Licencia: GPL
*/

/*
  Clase: Objeto
  Responsabilidad: es un objeto {lobo, oveja, lechuga} del juego de la barca
  Colaboración: ninguna

*/

#ifndef Objeto_HH
#define Objeto_HH


#include<string>
using namespace std;


class Objeto
{
  private:
    string nombre;

  public:
    /**
     * El nombre del objeto puede ser "lobo", "oveja" o "lechuga"
    */ 
    Objeto(string nombre);
    /**
     * Retorna el nombre
    */
    string comoTeLlamas();
};

#endif


