/*
  Archivo: Ordenar.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-09-26
  Fecha última modificación: 2018-09-25
  Versión: 0.1
  Licencia: GPL
*/

#include"Ordenar.h"


Ordenar::Ordenar()
{
  // No hace nada
}


void Ordenar::imprimir(int matriz[], int tamano, string mensaje)
{
  cout << mensaje;
  
//  if(tamano>0)
    cout << matriz[0];
  
  for(int elemento=1; elemento<tamano; elemento++)
  {
    cout << ", " << matriz[elemento];
  }
  cout << endl;
}


void Ordenar::copiar(int matrizOrigen[], int matrizDestino[], int tamano)
{
  for(int elemento=0; elemento<tamano; elemento++)
  {
    matrizDestino[elemento] = matrizOrigen[elemento];
  }
}


void Ordenar::burbuja(int matriz[], int tamano)
{
  bool haHabidoCambios;
  
  do
  {  
    haHabidoCambios = false;
    for(int elemento = 0; elemento+1 < tamano; elemento++)
    {
      if(matriz[elemento] > matriz[elemento+1])
      {
        int aux = matriz[elemento+1];
        matriz[elemento+1] = matriz[elemento];
        matriz[elemento] = aux;
        haHabidoCambios = true;
      }
    }
  }
  while(haHabidoCambios);
}



void Ordenar::seleccion(int matriz[], int tamano)
{
  for(int ordenado=0; ordenado<tamano; ordenado++)
  {
    for(int desordenado=ordenado+1; desordenado<tamano; desordenado++)
    {
      if(matriz[ordenado] > matriz[desordenado])
      {
        int aux = matriz[ordenado];
        matriz[ordenado] = matriz[desordenado];
        matriz[desordenado] = aux;
      }
    }
  }
}


int Ordenar::buscar(int matriz[], int tamano, int elemento)
{
  for(int indice=0; indice<tamano; indice++)
    if(matriz[indice] == elemento)
      return indice;
      
  return -1;
}




















void Ordenar::insercion(int matriz[], int tamano)
{
  for(int desordenado=1; desordenado<tamano; desordenado++)
  {
    int valorAInsertar = matriz[desordenado];
    for(int ordenado=desordenado-1; ordenado>=0; ordenado--)
    {
      if( matriz[ordenado] > valorAInsertar)
      {
        matriz[ordenado+1] = matriz[ordenado];
        matriz[ordenado] = valorAInsertar;
      }
    }
  }
}

