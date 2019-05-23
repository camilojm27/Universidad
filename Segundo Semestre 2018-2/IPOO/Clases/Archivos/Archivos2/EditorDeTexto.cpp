/*
  Archivo: EditorDeTexto.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-26
  Fecha última modificación: 2019-02-26
  Versión: 0.1
  Licencia: GPL
*/

#include "EditorDeTexto.h"


EditorDeTexto::EditorDeTexto(string nombreArchivo)
{
  this->nombreArchivo = nombreArchivo;
  lineasTexto = 0;
  numeroDeLineas = 0;
  
  ifstream flujo;
  flujo.open(nombreArchivo);
  if(not flujo.is_open())
    return;

  string linea;
  while(not flujo.eof())
  {
    getline(flujo, linea);
    insertarAlFinal(linea);
  }
  flujo.close();
}


EditorDeTexto::~EditorDeTexto()
{
  ofstream flujo;
  flujo.open(nombreArchivo);
  if(not flujo.is_open())
    cerr << "ERROR al tratar de abrir (para escribir) el archivo " << nombreArchivo << endl;
  else
  {
    imprimir(flujo);
    flujo.close();
  }

  if(lineasTexto!=0)
    delete [] lineasTexto;
  lineasTexto=0;
}


void EditorDeTexto::imprimir(ostream &flujo)
{
  for(int cualLinea=0; cualLinea<numeroDeLineas; cualLinea++)
    flujo << lineasTexto[cualLinea] << endl;
}


bool EditorDeTexto::insertar(string linea, int posicion)
{
  if(posicion<0 or posicion>numeroDeLineas)
    return false;
  insertarAlFinal("");
  for(int cualLinea=numeroDeLineas-2; cualLinea>=posicion; cualLinea--)
    lineasTexto[cualLinea+1] = lineasTexto[cualLinea];

  lineasTexto[posicion] = linea;
}


void EditorDeTexto::insertarAlFinal(string linea)
{
  string *tmp = new string[numeroDeLineas+1];

  for(int cualLinea=0; cualLinea<numeroDeLineas; cualLinea++)
    tmp[cualLinea] = lineasTexto[cualLinea];
  tmp[numeroDeLineas] = linea;
  numeroDeLineas++;

  delete [] lineasTexto;
  lineasTexto = tmp;
  tmp = 0;
}


