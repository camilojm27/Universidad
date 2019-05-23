/*
  Archivo: Vehiculo.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-11-07
  Fecha última modificación: 2017-11-10
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Vehiculo
// Responsabilidad: representa un vehiculo, con un cuentakilometros y una velocidad máxima alcanzable. 
//   Se le puede pedir que avance a una cierta velocidad durante un cierto tiempo y que me diga los kilómetros recorridos.
// Colaboracion: posee Ruedas  (también se dice: contiene Ruedas). Lo que importa es que quede claro que el Vehiculo es
// el propietario de las Ruedas.


/*
  Usando esta clase vamos a ver tres cosas:
  - Relación "posee", que básicamente es poner otros objetos en los atributos privados.
  - Como crear arrays de tamaño variable con new.
  - El destructor debe deshacer las operaciones realizadas en el constructor u otras funciones, tales como
    devolver memoria (delete), cerrar archivos, cerrar canales de comunicación con bases de datos o internet, etc.
    En nuestro caso, debe destruir los objetos que posea (destruir los objetos de los que es propietario).
    Es muy importante usar comentarios para explicar qué objetos son propietarios de qué otros objetos.
*/

#ifndef HH_Vehiculo
#define HH_Vehiculo

#include"Rueda.h"
#include<string>
using namespace std;


class Vehiculo
{
  private:
    double kilometrosRecorridos;
    double velocidadMaxima;
    string tipo;
    int numeroDeRuedas;
    Rueda **ruedas; // Un puntero a un array de ruedas. El Vehiculo es el propietario de las Ruedas
//    Rueda ruedas[4];  // Por valor
//    Rueda &(ruedas[4]);  // Por referencia. ruedas es un array de 4 referencias a Rueda
//    Rueda (&ruedas)[4];  // Por referencia. ruedas es una referencia a un array de 4 Ruedas


  public:
    Vehiculo(double velocidadMaxima, string tipo, int numeroDeRuedas, double diametroRueda);
    virtual ~Vehiculo();  // Como es porpietario de las Ruedas, las destruye
    virtual void avanzar(double velocidadKm_hora, double tiempo_horas);
    virtual double kmRecorridos();
    virtual string queTipoEres();
};

#endif

