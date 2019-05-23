/*
  Archivo: Libro.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-15
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Libro
// Responsabilidad: representa un libro, con un título
// Colaboracion: ninguna.

#ifndef HH_LIBRO
#define HH_LIBRO

#include <string>
using namespace std;

class Libro
{
  private:
    string titulo;

  public:
    Libro(string titulo);
    virtual ~Libro();
    virtual string cualEsElTitulo();
};

#endif

