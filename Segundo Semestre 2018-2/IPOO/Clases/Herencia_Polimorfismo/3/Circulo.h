/*
  Archivo: Circulo.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


// Clase: Circulo
// Responsabilidad: mantiene los datos de un Circulo ("Circulo", ancho, alto). Puede calcular su área y su perímetro.
// Colaboración: es una Figura. Implementa las funciones area() y perímetro


#ifndef HH_Circulo
#define HH_Circulo

#include "Figura.h"


class Circulo : public Figura  // Hereda de Figura
{
  private:
    const double Pi;
    
  public:
    /** Construye un Circulo con un ancho y un alto
    */
    Circulo(double ancho, double alto);
    /** Calcula el area.
    */ 
    virtual double area();
    /** Calcula el perímetro.
    */ 
    virtual double perimetro();
};

#endif
