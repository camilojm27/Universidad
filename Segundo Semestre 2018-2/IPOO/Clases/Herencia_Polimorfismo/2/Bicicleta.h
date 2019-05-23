/*
  Archivo: Bicicleta.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-07
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Bicicleta
// Responsabilidad: representa una bicicleta, con las misma interfase y estado interno que un Vehiculo.
//    Además de las funcionalidades del vehículo, también se puede plegar, desplegar y preguntarle si está
//    plegada. 
// Colaboracion: es parecido a un vehículo

#ifndef HH_Bicicleta
#define HH_Bicicleta

#include"Vehiculo.h"


class Bicicleta : public Vehiculo
{
  private:
    bool biciDoblada;
    
  public:
    Bicicleta(double velocidadMaxima, string tipo);
    /** Nueva función.
        Doblar la bicicleta para poder guardarla
    */
    void doblar();
    /** Nueva función.
        Desdobla la bicicleta para poder usarla
    */
    void desdoblar();
    /** Nueva función.
        Me dice si está doblada o no
    */
    bool estaDoblada();
};

#endif

