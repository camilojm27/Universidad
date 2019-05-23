/*
  Archivo: HallDeLaFama.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-28
  Fecha última modificación: 2018-03-05
  Versión: 0.1
  Licencia: GPL
*/

#include "HallDeLaFama.h"


HallDeLaFama::HallDeLaFama(string archivo)
{
  numeroDeGanadores = 0;
// ToDo para el PROYECTO (no hace falta hacerla para el Taller2)
}


HallDeLaFama::~HallDeLaFama()
{
// ToDo para el PROYECTO (no hace falta hacerla para el Taller2)
}


void HallDeLaFama::nuevoGanador(string nombre, int puntaje)
{
// ToDo para el Taller2
}


void HallDeLaFama::ordenar()
{
// ToDo para el Taller2
}


string HallDeLaFama::listaDeGanadores()
{
  string resultado = "";

  for(int cual=0; cual<numeroDeGanadores; cual++)
    resultado += ganadores[cual] + "\t" + to_string(puntos[cual]) + "\n";

  return resultado;
}




