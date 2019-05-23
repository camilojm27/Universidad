# Archivo: Makefile
# Camilo Mezu Mina (1824313)
# Email: camilo.mezu@correounivalle.edu.co
# Fecha creación: 2019-03-31
# Fecha última modificación: 2019-04-22
# Versión: 1
#Licencia: GPL

vpath %.h ClasesYaHechas Test

ejecutables =  DispositivoEntradaSalida.o DispositivoTerminal.o  \
 HallDeLaFama.o Laberinto.o Test_Laberinto.o 

compile = g++ -std=c++11 -lncurses   -c

test: $(ejecutables)
	g++ $(ejecutables) -o LaberintoTerminado.o -lncurses && make clean


DispositivoEntradaSalida.o: DispositivoEntradaSalida.h
	$(compile) DispositivoEntradaSalida.cpp


DispositivoTerminal.o: DispositivoTerminal.h
	$(compile) DispositivoTerminal.cpp

HallDeLaFama.o: HallDeLaFama.h
	$(compile) HallDeLaFama.cpp

Laberinto.o: Laberinto.cpp Laberinto.h 
	$(compile) Laberinto.cpp 

Test_Laberinto.o:  Laberinto.h DispositivoTerminal.h 
	$(compile) Test/Test_Laberinto.cpp
.PHONY : clean
clean : 
	-rm $(ejecutables)