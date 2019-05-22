/*
  Archivo: main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2017-10-20
  Fecha última modificación: 2019-02-22
  Versión: 0.1 
  Licencia: GPL
*/

// Utilidad: excepciones

#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
  // Si pedimos demasiada memoria (que el computador no tenga) se genera una excepción:
  int tamano = 8;

  for(int veces = 0; veces<10000000;veces++)
  {
    cout << "Veces=" << veces << endl;
    double *vector = new double[800000000];
    for(int elemento = 0; elemento<tamano; elemento++)
      vector[elemento] = elemento* 1.2;
    for(int elemento = 0; elemento<tamano; elemento++)
      cout << vector[elemento] << "    ";
    cout << endl;
  }
*/

    /*  
  // Podemos manejarla así:
  try
  {
    int tamano = 8;
    for(int veces = 0; veces<10000000;veces++)
    {
      cout << "Veces=" << veces << endl;
      double *vector = new double[800000000];
      for(int elemento = 0; elemento<tamano; elemento++)
        vector[elemento] = elemento* 1.2;
      for(int elemento = 0; elemento<tamano; elemento++)
        cout << vector[elemento] << "    ";
      cout << endl;
    }
  
  }
  catch(...)
  {
    cout << "ERROR: No hay espacio en memoria" << endl;
  }
  return 0;
*/

    // Otras excepciones:

    /*
  int numerador = 7;
  int denominador = 0;
  int cociente = numerador/denominador;
*/
    bool reintentar = true;
    while (reintentar)
    {
        try
        {
            cout << "Dime el numerador: ";
            int numerador;
            cin >> numerador;
            cout << "Dime el denominador: ";
            int denominador;
            cin >> denominador;

            if (numerador == 77)
                throw 1;
            if (denominador == 0)
                throw string("NO DIVIDAS POR CERO, POR FAVOR");
            int cociente = numerador / denominador;
            cout << "El resultado de dividir " << numerador << " entre " << denominador << " es " << cociente << endl;
            reintentar = false;
        }
        catch (string mensaje)
        {
            cout << "ERROR: " << mensaje << endl;
            cout << "¿Quieres volverlo a intentar? (s/n)" << endl;
            string opcion;
            cin >> opcion;
            if (opcion == "n")
                reintentar = false;
        }
        catch (int codigo)
        {
            cout << "ERROR: codigo" << codigo << endl;
        }
    }

    return 0;
}
