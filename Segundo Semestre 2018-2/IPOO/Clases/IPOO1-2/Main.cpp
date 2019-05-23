/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-09-14
  Fecha última modificación: 2018-09-14
  Versión: 0.1
  Licencia: GPL
*/

/*
  Tablas de multiplicar con bucles
*/

#include <iostream>
using namespace std;



int main()
{
  {
    cout << "Tabla de multiplicar (bucles for)" << endl;
    cout << " \t";
    for(int dato1=1; dato1<=10; dato1++)
      cout << " \t" << dato1;
    cout << endl;
    for(int dato1=1; dato1<=12; dato1++)
      cout << "========";
    cout << endl;
    for(int dato1=1; dato1<=10; dato1++)
    {
      cout << dato1 <<"\t|\t";
      for(int dato2=1; dato2<=10; dato2++)
        cout << dato1*dato2 << " \t";
      cout << endl;
    
    }
  }

  {
    cout << "Tabla de multiplicar (bucles while)" << endl;
    cout << " \t";
    int dato1=1;
    while(dato1<=10)
    {
      cout << " \t" << dato1;
      dato1++;
    }
    cout << endl;
  }
  
  {
    int dato1=1; 
    while(dato1<=12)
    {
      cout << "========";
      dato1++;
    }
    cout << endl;
  }
  
  {
    int dato1=1;
    while(dato1<=10)
    {
      cout << dato1 <<"\t|\t";
      for(int dato2=1; dato2<=10; dato2++)
        cout << dato1*dato2 << " \t";
      cout << endl;
      dato1++;
    }
  }

  {
    cout << "Tabla de multiplicar (bucles do while)" << endl;
    cout << " \t";
    int dato1=1;
    do
    {
      cout << " \t" << dato1;
      dato1++;
    }
    while(dato1<=10);
    cout << endl;
  }
  
  {
    int dato1=1; 
    do
    {
      cout << "========";
      dato1++;
    }
    while(dato1<=12);
    cout << endl;
  }
  
  {
    int dato1=1;
    do
    {
      cout << dato1 <<"\t|\t";
      for(int dato2=1; dato2<=10; dato2++)
        cout << dato1*dato2 << " \t";
      cout << endl;
      dato1++;
    }
    while(dato1<=10);
  }

  return 0;
}












