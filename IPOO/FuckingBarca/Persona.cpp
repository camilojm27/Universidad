/*
  Archivo: Persona.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2019-02-05
  Fecha última modificación: 2019-02-13
  Versión: 0.1
  Licencia: GPL
*/

#include"Persona.h"


Persona::Persona(Barca *barca, Orilla *orillaIzquierda, Orilla *orillaDerecha)
{
  this->barca = barca;
  this->orillaIzquierda = orillaIzquierda;
  this->orillaDerecha = orillaDerecha;
  this->orillaEnLaQueEstoy = orillaIzquierda;
}
    
    
bool Persona::recibirOrden(int codigo)
{
  // Hacer el movimiento:
  if(codigo==1)
  {
    Objeto *objetoAMover = orillaEnLaQueEstoy->dame("lechuguita");
    if(objetoAMover==0)
      cout << "No hay lechugas en la orilla" << endl;
    else
      if(not barca->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  if(codigo==2)
  {
    Objeto *objetoAMover = orillaEnLaQueEstoy->dame("ovejita");
    if(objetoAMover==0)
      cout << "No hay ovejas en la orilla" << endl;
    else
      if(not barca->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  if(codigo==3)
  {
    Objeto *objetoAMover = orillaEnLaQueEstoy->dame("lobito");
    if(objetoAMover==0)
      cout << "No hay lobos en la orilla" << endl;
    else
      if(not barca->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  if(codigo==4)
  {
    Objeto *objetoAMover = barca->dame("lechuguita");
    if(objetoAMover==0)
      cout << "No hay lechugas en la barca" << endl;
    else
      if(not orillaEnLaQueEstoy->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  if(codigo==5)
  {
    Objeto *objetoAMover = barca->dame("ovejita");
    if(objetoAMover==0)
      cout << "No hay ovejas en la barca" << endl;
    else
      if(not orillaEnLaQueEstoy->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  if(codigo==6)
  {
    Objeto *objetoAMover = barca->dame("lobito");
    if(objetoAMover==0)
      cout << "No hay lobos en la barca" << endl;
    else
      if(not orillaEnLaQueEstoy->recibe(objetoAMover))
        cout << "TIRASTE AL AGUA A " << objetoAMover->comoTeLlamas() << endl;
  }
  
  // Imprimir estado después del movimiento:
  orillaIzquierda->imprimir();
  barca->imprimir();
  orillaDerecha->imprimir();
  cout << endl;

  if(codigo==7)
  {
    // Me muevo:
    orillaEnLaQueEstoy->seSubioPersona(false);
    barca->seSubioPersona(true);

    // Imprimir la persona en la barca:
    orillaIzquierda->imprimir();
    barca->imprimir();
    orillaDerecha->imprimir();
    cout << endl;

    // Verifico si he perdido:
    if(orillaEnLaQueEstoy->alguienPuedeComer())  
    {
      cout << "PERDISTE!!!!"<<  endl;
      return false; // El juego terminó y perdí
    }
    if(orillaEnLaQueEstoy == orillaIzquierda)
      orillaEnLaQueEstoy = orillaDerecha;
    else
      orillaEnLaQueEstoy = orillaIzquierda;

    barca->navegarA(orillaEnLaQueEstoy);
    orillaEnLaQueEstoy->seSubioPersona(true);
    barca->seSubioPersona(false);
    

    orillaIzquierda->imprimir();
    barca->imprimir();
    orillaDerecha->imprimir();
    cout << endl;
  }
  
  // Verifico si he ganado:
  if(orillaDerecha->estanTodosAlli())
  {
    cout << "GANASTE!!!!!" << endl;
    return false;  // Gané y el juego terminó
  }

  return true; // El juego continúa
}
