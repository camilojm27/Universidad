/*
  Archivo: Persona.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2018-08-24
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: Persona
  Responsabilidad: Simula ser una persona que tiene un nombre, identificación, edad
  y sexo. Le puedo preguntar por sus datos básicos (nombre, identificación, edad, 
  sexo), le puedo preguntar si una identificación dada es la suya. Le puedo 
  avisar de que es su cumpleaños (para que incremente su edad).
  Colaboración: ninguna

*/



#ifndef Persona_HH
#define Persona_HH

#include <string>
using namespace std;



class Persona
{
  private:
    string miNombre;
    string identificacion;
    int miEdad;
    bool esFemenina;

  public:
    Persona(string nombre, string identificacion, int edad, bool esFemenina);  // Constructor del objeto
    string comoTeLlamas();
    bool tienesEstaIdentificacion(string cedula);
    void esTuCumpleanhos();
    int dimeTuEdad();
    string terminacionGenero();
    string dimeTuIdentificacion();
};

#endif

