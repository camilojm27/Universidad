/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-10
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


#include "Carro.h"
#include "Bicicleta.h"

#include"stdlib.h"
#include<iostream>
using namespace std;



int main()
{
  srand(time(0));  // Genera una semilla al azar para el generador de números aleatorios
  //====================================================
  // Esto es lo que ya teníamos hasta ahora:
  Carro carro(120, "carro chevrolet", 22);  // Velocidad máx=120, diámetro ruedas=22 pulgadas
  Bicicleta bicicleta(30, "bici eléctrica", 18);  // Velocidad máx=30, diámetro ruedas=18 pulgadas

  carro.avanzar(80, 3); // Velocidad, tiempo
  carro.avanzar(10, 0.1); // Velocidad, tiempo
  bicicleta.avanzar(20, 1); // Velocidad, tiempo
  bicicleta.avanzar(220, 1); // Velocidad, tiempo

  cout << carro.queTipoEres() << endl;
  cout << "El carro recorrió " << carro.kmRecorridos() << " kilómetros" << endl;
  cout << bicicleta.queTipoEres() << endl;
  cout << "La bicicleta recorrió " << bicicleta.kmRecorridos() << " kilómetros" << endl;

  //====================================================
  // Carros y Bicicletas van a almacenarse en el mismo array
  // misVehiculos es un array de 3 punteros que apuntan a Vehiculos:
  Vehiculo **misVehiculos = new Vehiculo*[3];
  misVehiculos[0] = new Bicicleta(80, "bici de carreras", 19);  // Velocidad máx=80, diámetro ruedas=19 pulgadas
  misVehiculos[1] = new Bicicleta(40, "bici de montaña", 15);  // Velocidad máx=40, diámetro ruedas=15 pulgadas
  misVehiculos[2] = new Carro(120, "carro kia", 24);  // Velocidad máx=120, diámetro ruedas=24 pulgadas


  for(int cualVehiculo=0; cualVehiculo<3; cualVehiculo++)
  {
    misVehiculos[cualVehiculo]->avanzar(1000, 1);
    cout << "El vehículo " << misVehiculos[cualVehiculo]->queTipoEres() << " ha recorrido ";
    cout << misVehiculos[cualVehiculo]->kmRecorridos() << " kilómetros" << endl;
  }

  // Por cada new hay que hacer un delete:
  for(int cualVehiculo=0; cualVehiculo<3; cualVehiculo++)
    delete misVehiculos[cualVehiculo];
  delete [] misVehiculos;

  return 0;
}




