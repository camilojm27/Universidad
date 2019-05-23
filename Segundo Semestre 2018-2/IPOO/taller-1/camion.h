#include <string>

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

/*
Clase: camion
  Responsabilidad: Esta clase modela un vehiculo de tipo camion, el cual posee placa y una capacidad maxima,
  Al  camion se le asignan ciertos objetos de diferentes pesos, los cuales, al superar la capicad maxima, avisan al usuario,
  que no se pueden agregar mas, y deben ser puestos en otro camion.
  Finalmente, reporta el peso en kilogramos que cada uno de los camiones pudo transportar.
Colaboración: ninguna
*/

using namespace std;

class Camion
{
  private:
    string placa;
    int capacidadMax;
    int pesoTotalCarga;

  public:
    Camion(string laPlaca, int laCapacidadMaxima);
    bool cargarUnObjeto(int pesoDelObjeto);  // true = se pudo hacer; false = no se pudo
    int hacerMudanza();  // Retorna la carga que transportó
    string cualEsLaPlaca();
};
