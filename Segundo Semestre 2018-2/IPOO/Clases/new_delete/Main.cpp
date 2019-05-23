/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-10-20
  Fecha última modificación: 2019-02-22
  Versión: 0.1 
  Licencia: GPL
*/

// Utilidad: manejo dinámico de memoria: new y delete

#include<iostream>
using namespace std;




int main()
{
  cout << "En este computador, el tamaño de un double es " << sizeof(double) << endl;
/*
  {
    int valor = 19;
    cout << "El tamaño de la variable valor es " << sizeof(valor) << " bytes en memoria y su valor es " << valor << endl;
  }
*/
//  valor =7;
  

  {
    int *pValor = new int;   // Esta es la forma de crear dinámicamente un objeto en memoria
    *pValor = 25;
    delete pValor;  // Esta es la forma de borrar el objeto de memoria
    pValor = 0;  // Recomendación del profesor, para que si hago algo con el puntero, genere un error inmediatamente
  }
  



  int *otroPuntero=0; // Evitemos punteros locos

  {
    int *pValor = new int;
    *pValor = 25;
    cout << "El tamaño del puntero pValor es " << sizeof(pValor) << " bytes en memoria y vale " << pValor << endl;
    cout << "El tamaño del contenido del puntero pValor es " << sizeof(*pValor) << " bytes en memoria y su contenido es " << *pValor << endl;
    otroPuntero = pValor;
  }
  
  
  cout << "El valor del objeto creado dinámicamente sigue siendo: " << *otroPuntero << endl;
  delete otroPuntero;
  otroPuntero=0;
  cout << "El tamaño del puntero pValor es " << sizeof(otroPuntero) << " bytes en memoria y vale " << otroPuntero << endl;

//  return 0;


  cout << "" << "Memoria dinámica para un array 1D:" << endl;
  cout << "" << "==================================" << endl;
  int tamano = 8;
  double *vector = new double[tamano]; // dinámica
//  double vector[tamano];  // estática. Hace lo mismo que la sentencia anterior, pero de forma estática

  double *aux = vector;
  
  for(int elemento = 0; elemento<tamano; elemento++)
  {
    *vector++ = elemento * 2;  // Se puede expandir a las dos sentencias siguientes:

//    *vector = elemento * 2;  // vector es también un puntero.
//    vector = vector + 1;

    // Las dos sentencias anteriores se pueden sustituir por:
//    *(vector+ elemento) = elemento * 2;  // vector es también un puntero.

    // La sentencia anterior es equivalente a:
//    vector[elemento] = elemento* 2;    // vector es un array 1D
  
  }

  vector = aux;  
  for(int elemento = 0; elemento<tamano; elemento++)
    cout << *vector++ << "    ";
//    cout << vector[elemento] << "    ";
  cout << endl;
  
  delete [] aux;      // Esta es la forma de borrar un array creado dinámicamente
  vector = 0;
  aux = 0;

  return 0;
  
//  Bicicleta *vector = new Bicicleta[tamano]; // dinámica

  
}


