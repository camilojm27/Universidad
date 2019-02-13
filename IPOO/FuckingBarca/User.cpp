/*
  Archivo: User.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-12
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/


#include"User.h"


User::User(Persona &unaPersona) : persona(unaPersona)
{
}


void User::jugar()
{
  while(true)
  {
    cout << "ELIGE UNA OPCIÓN:" << endl << "===========" << endl;
    cout << "0 = terminar (me rindo)" << endl;
    cout << "1 = mover lechuga de la orilla a la barca" << endl;
    cout << "2 = mover oveja de la orilla a la barca" << endl;
    cout << "3 = mover lobo de la orilla a la barca" << endl;
    cout << "4 = mover lechuga de la barca a la orilla" << endl;
    cout << "5 = mover oveja de la barca a la orilla" << endl;
    cout << "6 = mover lobo de la barca a la orilla" << endl;
    cout << "7 = subir a la barca, navegar y bajar en la otra orilla" << endl;
    int opcion;
    cin >> opcion;
    if(opcion==0)
    {
      cout << "TE RENDISTE!!!" << endl;
      break;
    }
    if(opcion>=1 and opcion<=7)
    {
      if(not persona.recibirOrden(opcion))
        break;
    }
    else
      cout << "Opción equivocada" << endl;
  }
}



