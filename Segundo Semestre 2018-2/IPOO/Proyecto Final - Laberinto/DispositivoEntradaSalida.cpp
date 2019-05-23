/*
  Archivo: DispositivoEntradaSalida.cpp
  Autor: Ángel García Baños
  Email: angel.garcia@correounivalle.edu.co
  Fecha creación: 2018-02-28
  Fecha última modificación: 2018-03-04
  Versión: 0.1
  Licencia: GPL
*/


#include "DispositivoEntradaSalida.h"


DispositivoEntradaSalida::DispositivoEntradaSalida(int fila_Tablero,
                                                   int columna_Tablero,
                                                   int alto_Tablero,
                                                   int ancho_Tablero,
                                                   int fila_FichaSiguiente,
                                                   int columna_FichaSiguiente,
                                                   int alto_FichaSiguiente,
                                                   int ancho_FichaSiguiente,
                                                   int fila_nombre,
                                                   int columna_nombre,
                                                   int ancho_nombre,
                                                   int fila_puntos,
                                                   int columna_puntos,
                                                   int ancho_puntos,
                                                   int fila_ganadores,
                                                   int columna_ganadores,
                                                   int ancho_ganadores,
                                                   int alto_ganadores,
                                                   int fila_mensaje, 
                                                   int columna_mensaje
                                                   )
  : fila_Tablero(fila_Tablero), 
    columna_Tablero(columna_Tablero),
    alto_Tablero(alto_Tablero),
    ancho_Tablero(ancho_Tablero),
    fila_FichaSiguiente(fila_FichaSiguiente),
    columna_FichaSiguiente(columna_FichaSiguiente),
    alto_FichaSiguiente(alto_FichaSiguiente),
    ancho_FichaSiguiente(ancho_FichaSiguiente),
    fila_nombre(fila_nombre),
    columna_nombre(columna_nombre),
    ancho_nombre(ancho_nombre),
    fila_puntos(fila_puntos),
    columna_puntos(columna_puntos),
    ancho_puntos(ancho_puntos),
    fila_ganadores(fila_ganadores),
    columna_ganadores(columna_ganadores),
    ancho_ganadores(ancho_ganadores),
    alto_ganadores(alto_ganadores),
    fila_mensaje(fila_mensaje), 
    columna_mensaje(columna_mensaje)
{
}


DispositivoEntradaSalida::~DispositivoEntradaSalida()
{
}





