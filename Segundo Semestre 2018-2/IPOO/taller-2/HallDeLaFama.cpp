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
  


 if(numeroDeGanadores<10){
 int aux=0;
 for(int contador=0 ; contador<numeroDeGanadores; contador++)
 {
    for(int i=1;i<10;i++)
    {
        if(numeroDeGanadores==9 && puntaje>puntos[i])
        {
            if(puntos[i]<puntos[i-1])
            {
                aux=puntos[i];
                ganadores[i]=nombre;
                puntos[i]=puntaje;
                cout<<"PI: "<<puntos[i]<<"PI-1: "<<puntos[i-1]<<endl;
            }
            
            
            cout << "Hola " << nombre<< endl;
        }
    }
    ganadores[numeroDeGanadores] = nombre;
    puntos[numeroDeGanadores] = puntaje;
     //Verificador Del contador
 }
cout  <<"Posicion en el arreglo: "<<numeroDeGanadores<<endl;

    numeroDeGanadores++;


    cout  << nombre <<" "<<puntaje<<endl;
  

}}



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
