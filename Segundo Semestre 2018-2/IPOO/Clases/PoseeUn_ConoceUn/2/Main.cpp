/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-03-15
  Fecha última modificación: 2019-03-15
  Versión: 0.1
  Licencia: GPL
*/

// Ana compra un libro titulado "Sapiens". Luego se lo vende a Jorge.


#include "Libro.h"
#include "Persona.h"
#include <iostream>
using namespace std;


int main()
{
  Libro *libro1 = new Libro("Sapiens");
  Persona miAmiga("Ana");
  Persona miAmigo("Jorge");
  
  miAmiga.comprarLibro(libro1);

  cout << miAmiga.comoTeLlamas() << " está leyendo " << miAmiga.tituloDeTuLibro() << endl;
  cout << miAmigo.comoTeLlamas() << " está leyendo " << miAmigo.tituloDeTuLibro() << endl;
  
//  miAmigo.comprarLibro(miAmiga.venderLibro());
  Libro *libroVendido = miAmiga.venderLibro();
  miAmigo.comprarLibro(libroVendido);


  cout << miAmiga.comoTeLlamas() << " está leyendo " << miAmiga.tituloDeTuLibro() << endl;
  cout << miAmigo.comoTeLlamas() << " está leyendo " << miAmigo.tituloDeTuLibro() << endl;
  cout << "TITULO DEL LIBRO: " << libro1->cualEsElTitulo() << endl;

  delete libro; // ERROR: doble borrado
  return 0;
}


