/*
  Archivo: Hash.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-12-01
  Fecha última modificación: 2017-12-01
  Versión: 0.1
  Licencia: GPL
*/

#include "Hash.h"
using namespace std;


Hash::Hash()
{
  // No hace nada
}


Hash::~Hash()
{
  // No hace nada
}


bool Hash::anadir(string indice, string valor)
{
  int hash = formulaHash(indice);
  if(indices[hash] == "")
  {
    indices[hash] = valor;
    return true;
  }
  return false;
}


string &Hash::buscar(string indice)
{
  int hash = formulaHash(indice);
  return indices[hash]; // Esto hay que mejorarlo, en el caso de que haya colisión
}


string &Hash::operator [](string indice)
{
  return buscar(indice);
//  int hash = formulaHash(indice);
//  return indices[hash]; // Esto hay que mejorarlo, en el caso de que haya colisión
}


bool Hash::borrar(string indice)
{
  int hash = formulaHash(indice);
  indices[hash] = "";  // Esto hay que mejorarlo, en el caso de que haya colisión
  return true;
}


bool Hash::existe(string indice)
{
  int hash = formulaHash(indice);
  if(indices[hash] == "") // Esto hay que mejorarlo, en el caso de que haya colisión
    return true;
  return false;
}


void Hash::imprimir()
{
  for(int elemento=0; elemento<100; elemento++)
    if(indices[elemento] != "")
      cout << "{" << elemento << " ==> " << indices[elemento] << "}" << endl;
}


int Hash::formulaHash(string indice)
{
  int suma=0;
  for(int cualLetra=0; cualLetra<indice.length(); cualLetra++)
    suma = suma + indice[cualLetra];

  return suma % 100;  
}


Hash *Hash::shallowCopy()
{
  // ToDo
}


Hash *Hash::deepCopy()
{
  // ToDo
}

