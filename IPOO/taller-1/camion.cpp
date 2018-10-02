#include "camion.h"

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

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placa = laPlaca;
  capacidadMax = laCapacidadMaxima;
  pesoTotalCarga = 0;
}


bool Camion::cargarUnObjeto(int pesoDelObjeto)
{
  if(pesoTotalCarga + pesoDelObjeto <= capacidadMax)
  {
    pesoTotalCarga = pesoTotalCarga + pesoDelObjeto;
    return true;
  }
  else
    return false;
}

int Camion::hacerMudanza()
{
    return pesoTotalCarga;
}

string Camion::cualEsLaPlaca()
{
    return placa;
}
