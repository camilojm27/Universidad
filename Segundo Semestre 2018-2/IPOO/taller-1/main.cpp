/*
  Archivo: Main.cpp
  Autor: Camilo Jose Mezu, Santiago Martinez Mesa.
  Basado en el codigo de Angel Garcia Baños (angel.garcia@correounivalle.edu.co)
  Email: camilo.mezu@correounivalle.edu.co, santiago.mesa@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2018-09-07
  Versión: 1.0
  Licencia: GPL
*/

// Ejemplo con una clase y dos objetos.
// Utilidad: Hacer una mudanza. Vamos a modelar un camión para transportar mis objetos,
// que tienen distintos pesos.
// El camión tiene un número de placa y una capacidad máxima. Si se supera esa
// capacidad, me avisará, para que el objeto que intento subir lo guarde en el otro
// camión.


#include <iostream>
#include "camion.h"
using namespace std;

int main()
{
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);

  int objetos[8] = { 1000, 3000, 5000, 2000, 500, 1800, 4000, 3000 };

  for(int cualObjeto = 0; cualObjeto < 8; cualObjeto++)
  {
    int objetoATransportar = objetos[cualObjeto];
    if(not unCamion.cargarUnObjeto(objetoATransportar))
      if(not otroCamion.cargarUnObjeto(objetoATransportar))
        cout << "El objeto número " << cualObjeto << " que pesa " << objetos[cualObjeto] << " no se puede cargar en ningún camión." << endl;
  }

  cout << "El camión " << unCamion.cualEsLaPlaca() << " transportó " << unCamion.hacerMudanza() << " kg." << endl;
  cout << "El camión " << otroCamion.cualEsLaPlaca() << " transportó " << otroCamion.hacerMudanza() << " kg." << endl;

  return 0;
}
