/*
  Archivo: TrianguloIsosceles.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


// Clase: TrianguloIsosceles
// Responsabilidad: mantiene los datos de un Triangulo Isosceles ("TrianguloIsosceles", ancho, alto). Puede calcular su área y su perímetro.
// En un triángulo isósceles, hay un lado horizontal, que es la base y que mide (ancho). Y hay un vértice centrado encima a una altura (alto) sobre la base.
// Colaboración: es una Figura. Implementa las funciones area() y perímetro


#ifndef HH_TrianguloIsosceles
#define HH_TrianguloIsosceles

#include "Figura.h"


class TrianguloIsosceles : public Figura  // Hereda de Figura
{
  public:
    /** Construye un Rectángulo con un ancho y un alto
    */
    TrianguloIsosceles(double ancho, double alto);
    /** Calcula el area.
    */ 
    virtual double area();
    /** Calcula el perímetro.
    */ 
    virtual double perimetro();
};

#endif
