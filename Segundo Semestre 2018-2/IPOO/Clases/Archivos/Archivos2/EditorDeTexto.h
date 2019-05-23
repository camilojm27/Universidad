/*
  Archivo: EditorDeTexto.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-26
  Fecha última modificación: 2019-02-26
  Versión: 0.1
  Licencia: GPL
*/

/*
  Clase: EditorDeTexto
  Responsabilidad: leer, modificar (insertar una línea) y salvar un archivo de texto
  Colaboración: ninguna
*/

#ifndef EditorDeTexto_HH
#define EditorDeTexto_HH

#include <fstream>
#include <iostream>
#include <string>
using namespace std;


class EditorDeTexto
{
  private:
    string nombreArchivo;
    string *lineasTexto;  // Es un puntero a strings (un array de strings)
    int numeroDeLineas;
    
  public:
    /**
      Lee un archivo de texto
    */
    EditorDeTexto(string nombreArchivo);
    /**
      Salva el archivo de texto con el mismo nombre que tenía
    */
    ~EditorDeTexto(); // Destructor
    /**
      Imprime todas las líneas de texto en el flujo especificado (puede ser el flujo de un archivo o la pantalla cout)
    */
    void imprimir(ostream &flujo);
    /**
      Inserta una linea de texto en la posición dada (0=al principio, 1=después de la primera línea, etc)
      Retorna true si se pudo hacer, y false en caso contrario (debido a que posicion tiene un valor raro)
    */
    bool insertar(string linea, int posicion);

  protected:
    /**
      Inserta una línea de texto al final de todas las demás
    */
    void insertarAlFinal(string linea);
};

#endif

