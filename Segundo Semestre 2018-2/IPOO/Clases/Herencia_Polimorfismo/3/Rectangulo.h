/*
  Archivo: Rectangulo.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


// Clase: Rectangulo
// Responsabilidad: mantiene los datos de un rectángulo ("Rectángulo", ancho, alto). Puede calcular su área y su perímetro.
// Colaboración: es una Figura. Implementa las funciones area() y perímetro()


#ifndef HH_Rectangulo
#define HH_Rectangulo

#include "Figura.h"


class Rectangulo : public Figura  // Hereda de Figura
{
  public:
    /** Construye un Rectángulo con un ancho y un alto
    */
    Rectangulo(double ancho, double alto);
    /** Calcula el area.
    */ 
    virtual double area();
    /** Calcula el perímetro.
    */ 
    virtual double perimetro();
};

#endif
