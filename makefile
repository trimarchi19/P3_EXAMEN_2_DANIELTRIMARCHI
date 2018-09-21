main:main.o Bomba.o Bomba_V.o Jugador.o Item.o Normal.o Escenario.o Invisible.o Espina.o
	g++ main.o Bomba.o Bomba_V.o Jugador.o Item.o Normal.o Escenario.o Invisible.o Espina.o -o main
	
main.o: main.cpp
	g++ -c main.cpp
Bomba.o: Bomba.cpp Bomba.h
	g++ -c Bomba.cpp
Bomba_V.o: Bomba_V.cpp Bomba_V.h
	g++ -c Bomba_V.cpp
Normal.o: Normal.cpp Normal.h
	g++ -c Normal.cpp
Escenario.o: Escenario.cpp Escenario.h
	g++ -c Escenario.cpp
Item.o: Item.cpp Item.h
	g++ -c Item.cpp
Jugador.o: Jugador.cpp Jugador.h
	g++ -c Jugador.cpp
Invisible.o: Invisible.cpp Invisible.h
	g++ -c Invisible.cpp
Espina.o: Espina.cpp Espina.h
	g++ -c Espina.cpp	
clear:
	rm* .o
	