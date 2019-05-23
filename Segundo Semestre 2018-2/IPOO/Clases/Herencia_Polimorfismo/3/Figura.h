/*
  Archivo: Figura.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/


// Clase: Figura
// Responsabilidad: mantiene los datos de una figura geométrica (nombre, ancho, alto). Puede calcular su área y su perímetro.
// Colaboración: ninguna. Es una clase virtual pura, que no se puede instanciar. Hay que heredar de ella e implementar las funciones area() y perimetro().


// A partir de ahora, hay que poner virtual delante de todas las funciones, excepto del constructor, para que funcione el polimorfismo.


#ifndef HH_Figura
#define HH_Figura

#include<string>
using namespace std;



class Figura
{
  protected:
    string nombre;
    double ancho;
    double alto;

  public:
    /** Construye una figura geométrica con un nombre, un ancho y un alto
    */
    Figura(string nombre, double ancho, double alto);
    /** Retorna el nombre de la Figura
    */
    virtual string comoTeLlamas();
    /** Calcula el area.
        Debe implementarse en las clases derivadas
    */ 
    virtual double area()=0;
    /** Calcula el perímetro.
        Debe implementarse en las clases derivadas
    */ 
    virtual double perimetro()=0;
};



#endif
