/*
  Archivo: Rueda.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-10
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Rueda
// Responsabilidad: representa una rueda, que tiene un diámetro y puede estar o no pinchada.
//   Las ruedas de diámetro mayor a 20 pulgadas se pinchan una vez de cada 2, mientras que las ruedas menores se pinchan
//   dos veces de cada 5.
// Colaboracion: ninguna

#ifndef HH_Rueda
#define HH_Rueda

#include<stdlib.h>


class Rueda
{
  private:
    double diametro;
    bool pinchada;
    
  public:
    Rueda(double diametro);
    void pincharAlAzar();
    bool estaPinchada();
    void despinchar();
};

#endif

