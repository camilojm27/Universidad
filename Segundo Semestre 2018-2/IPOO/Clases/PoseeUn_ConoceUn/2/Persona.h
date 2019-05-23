/*
  Archivo: Persona.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-15
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Persona
// Responsabilidad: representa un persona con un nombre y que le gusta leer
//    y conoce a lo sumo un libro que puede prestar.
// Colaboracion: conoce un Libro. A veces es propietaria del libro.

#ifndef HH_PERSONA
#define HH_PERSONA

#include <string>
using namespace std;
#include "Libro.h"

class Persona
{
  private:
    string nombre;
    Libro *libro;
    bool soyElPropietarioDelLibro;
    
  public:
    Persona(string nombre);
    virtual ~Persona();
    virtual Libro *venderLibro();
    /** Si no tiene ningún libro, lo compra y es propietario de él, y retorna true.
     * Si ya tiene un libro, no lo puede comprar y retorna false.
    */
    virtual bool comprarLibro(Libro *libro);
    virtual string comoTeLlamas();
    virtual string tituloDeTuLibro();
};

#endif

