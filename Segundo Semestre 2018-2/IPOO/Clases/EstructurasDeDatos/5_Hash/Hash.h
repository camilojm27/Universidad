/*
  Archivo: Hash.h
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-12-01
  Fecha última modificación: 2017-12-01
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Hash
// Responsabilidad: es un hash de strings (ìndices) en strings (valores), al que se pueden
//    añadir elementos, buscarlos y borrarlos.
// Colaboración: ninguna


#include<iostream>
using namespace std;


#ifndef HH_Hash
#define HH_Hash

class Hash
{
  private:
    string indices[100];

  public:
    /** Construye un Hash vacío.
     *  - Entrada: ninguna
    */
    Hash();
    /** Destruye el Hash. No tiene que hacer nada.
    */
    ~Hash();
    /** Añade un nuevo elemento índice al Hash, asignándole un valor.
        - Entrada: un índice (string) y un valor (string)
        - Salida: true si se pudo (no hubo colisión)
    */
    bool anadir(string indice, string valor);
    /** Busca un índice y retorna su valor
        - Entrada: el string índice
        - Salida: la referencia al string valor. Como es una referencia puede
        aparecer en el lado izquierdo de una asignación.
    */
    string &buscar(string indice);
    /** Busca un índice y retorna su valor
        - Entrada: el string índice
        - Salida: la referencia al string valor. Como es una referencia puede
        aparecer en el lado izquierdo de una asignación.
    */
    string &operator [](string indice);
    /** Hace una copia superficial, cediendo propiedad.
     *  Atención: si el árbol no tiene elementos, entonces no logra hacer una copia
     *  superficial, sino profunda.
    */
    Hash *shallowCopy();
    /** Hace una copia profunda, cediendo propiedad
    */
    Hash *deepCopy();
    /** Borra un índice del Hash
        - Entrada: el string a borrar. Si hay más de uno, solo borra el primero.
        - Salida: retorna false si no lo encontró.
    */
    bool borrar(string indice);
    /** Verifica si existe un cierto índice en el Hash.
     *  - Entrada: el string a buscar.
     *  - Salida: retorna true si lo encontró y false en caso contrario.
    */
    bool existe(string indice);
    /** Imprime en pantalla (cout) el Hash
     *  - Entrada: ninguna
     *  - Salida: ninguna
    */
    void imprimir();      

  protected:
    int formulaHash(string indice);
};
  
#endif
