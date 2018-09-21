#ifndef INVISIBLE_H
#define INVISIBLE_H 
#include "Escenario.h"

class Invisible:public Escenario
{
private:
	int visibles;
	int vidas;
	int tipo;
public:
	int getVidas();
	int getVisibles();
	int getTipo();
	void setTipo(int);
	void setVidas(int);
	void setVisibles(int);

	Invisible();
	//~Invisible();
	
};
#endif

/*
Esta pista se caracteriza porque a la hora de jugar solo es visible la mitad de las
bombas enemigas que hay en el tablero, esta clase tiene un número aleatorio del 1-3 que
simboliza el número de vidas que tendrá el usuario, así como un valor que indique el tipo
de bomba que se usará.

*/