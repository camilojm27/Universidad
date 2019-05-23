/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-08
  Fecha última modificación: 2019-03-08
  Versión: 0.1
  Licencia: GPL
*/

// Utilidad: Entender la herencia con polimorfismo (una única interfaz con muchas implementaciones).
// El polimorfismo significa que puedo acceder a una colección de objetos de clases distintas 
// de manera uniforme, sin diferenciarlos. El único requerimiento es que hereden de la misma
// clase base.
// Es decir, puedo guardarlos en el mismo array, a pesar de ser de tipos distintos. Y puedo acceder
// a ellos por medio de un puntero a la clase base. 

// La principal ventaja de la herencia es que permite polimorfismo. 

// En lenguajes como Ruby el polimorfismo existe siempre, es automático y no hay que hacer nada para
// conseguirlo. En lenguajes como C++ y Java, para conseguir polimorfismo hay que crear un árbol de
// herencia.


// En este ejemplo vamos a desarrollar lo básico de un programa de dibujo, que permite manejar círculos,
// rectánculos y triángulos isósceles.


#include "Figura.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "TrianguloIsosceles.h"

#include<iostream>
using namespace std;



int main()
{
//  Figura a("aaaa", 2,3);   // No se puede fabricar este objeto porque le faltan las funciones virtuales puras.
  
  int cantidadDeFiguras=5;
  Figura **misFiguras = new Figura*[cantidadDeFiguras];
  misFiguras[0] = new Rectangulo(10,20);
  misFiguras[1] = new TrianguloIsosceles(40,30);
  misFiguras[2] = new TrianguloIsosceles(20,80);
  misFiguras[3] = new Circulo(100,100);
  misFiguras[4] = new Rectangulo(2,5);


  for(int cualFigura=0; cualFigura<cantidadDeFiguras; cualFigura++)
    cout << "Figura: " << misFiguras[cualFigura]->comoTeLlamas() << "  Área= " 
    <<  misFiguras[cualFigura]->area() << " Perímetro= " 
    << misFiguras[cualFigura]->perimetro() << endl;

  for(int cualFigura=0; cualFigura<cantidadDeFiguras; cualFigura++)
    delete misFiguras[cualFigura];
  delete [] misFiguras;

  return 0;
}




