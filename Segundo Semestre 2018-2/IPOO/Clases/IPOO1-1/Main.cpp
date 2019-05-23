/*
  Archivo: Main.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-13
  Fecha última modificación: 2018-08-24
  Versión: 0.1
  Licencia: GPL
*/

/*
  Tengo 3 amigos con ciertas edades y quiero ver a lo largo de los años
  como cumplen la mayoría de edad.
  Luego voy a hacer un sorteo, y si coincide la identificación
  con el número generado al azar, doy un premio a la persona.
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;



int main()
{
  srand(time(0)); // Inicializa la semilla aleatoria con la fecha y hora actual
  
  Persona luisa("Luisa García", "TI.1", 16, true);
  Persona pepe("Pepe Restrepo", "TI.2", 14, false);
  Persona antonia("Antonia Salazar", "TI.3", 17, true);

  for(int tiempo=2018; tiempo<2028; tiempo++)
  {
    cout << "Estamos en el año " << tiempo << endl;
    luisa.esTuCumpleanhos();
    pepe.esTuCumpleanhos();
    antonia.esTuCumpleanhos();

    if(luisa.dimeTuEdad() == 18)
    {
      cout << "Bienvenid" << luisa.terminacionGenero() << " al mundo de los adultos, " << luisa.comoTeLlamas() << endl;
      cout << "Tu identificación era " << luisa.dimeTuIdentificacion() << endl;
    }
    if(pepe.dimeTuEdad() == 18)
    {
      cout << "Bienvenid" << pepe.terminacionGenero() << " al mundo de los adultos, " << pepe.comoTeLlamas() << endl;
      cout << "Tu identificación era " << pepe.dimeTuIdentificacion() << endl;
    }
    if(antonia.dimeTuEdad() == 18)
    {
      cout << "Bienvenid" << antonia.terminacionGenero() << " al mundo de los adultos, " << antonia.comoTeLlamas() << endl;
      cout << "Tu identificación era " << antonia.dimeTuIdentificacion() << endl;
    }
  }
  
  // Sorteo:
  cout << "Comienza el sorteo!!! Son 10 premios" << endl;
  
  
  
//  int vez=0;
//  while(vez<10)
  for(int vez=0; vez<10; vez++)
  {
    int numeroAleatorio = rand() % 10;  
//    string aux = to_string(numeroAleatorio);
//    string tarjetaDeIdentidadPremiada = "TI." + aux;

    string tarjetaDeIdentidadPremiada = "TI." + to_string(numeroAleatorio);
    cout << "La tarjeta ganadora es " << tarjetaDeIdentidadPremiada << endl;

    if(luisa.tienesEstaIdentificacion(tarjetaDeIdentidadPremiada))
      cout << "Felicitaciones, " << luisa.comoTeLlamas() << "!!" << endl;
    if(pepe.tienesEstaIdentificacion(tarjetaDeIdentidadPremiada))
      cout << "Felicitaciones, " << pepe.comoTeLlamas() << "!!" << endl;
    if(antonia.tienesEstaIdentificacion(tarjetaDeIdentidadPremiada))
      cout << "Felicitaciones, " << antonia.comoTeLlamas() << "!!" << endl;
//    vez++;
  }
  
  return 0;
}



/*
  while(not miPajarito.tengaComida())
  {
    miPajarito.darleDeComer();
  }

  for(;not miPajarito.tengaComida();)
  {
    miPajarito.darleDeComer();
  }

*/






