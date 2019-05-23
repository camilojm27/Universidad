/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-07
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

#include<iostream>
using namespace std;



int main()
{
  Carro carro(120, "carro chevrolet");
  Bicicleta bicicleta(30, "bici eléctrica");

  carro.avanzar(80, 3); // Velocidad, tiempo
  carro.avanzar(10, 0.1); // Velocidad, tiempo
  bicicleta.avanzar(20, 1); // Velocidad, tiempo
  bicicleta.avanzar(220, 1); // Velocidad, tiempo

  cout << carro.queTipoEres() << endl;
  cout << "El carro recorrió " << carro.kmRecorridos() << " kilómetros" << endl;
  cout << bicicleta.queTipoEres() << endl;
  cout << "La bicicleta recorrió " << bicicleta.kmRecorridos() << " kilómetros" << endl;

  cout << "============================" << endl;
  
  Vehiculo **misVehiculos = new Vehiculo*[3];
  misVehiculos[0] = new Bicicleta(80, "bici de carreras");
  misVehiculos[1] = new Bicicleta(40, "bici de montaña");
  misVehiculos[2] = new Carro(120, "carro kia");


  for(int cualVehiculo=0; cualVehiculo<3; cualVehiculo++)
  {
    misVehiculos[cualVehiculo]->avanzar(1000, 1);
    cout << "El vehículo " << misVehiculos[cualVehiculo]->queTipoEres() << " ha recorrido ";
    cout << misVehiculos[cualVehiculo]->kmRecorridos() << " kilómetros" << endl;
  }

  for(int cualVehiculo=0; cualVehiculo<3; cualVehiculo++)
    delete misVehiculos[cualVehiculo];
  delete [] misVehiculos;

  return 0;
}



















