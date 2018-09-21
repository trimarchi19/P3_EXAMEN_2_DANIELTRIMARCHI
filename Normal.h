#ifndef NORMAL_H
#define NORMAL_H 

#include "Bomba.h"
class Normal: public Bomba
{
private:
	int alcance;
public:
	Normal();
	void setAlcance(int);
	int getAlcance();

	//~Normal();
	
};
#endif


/*

Este tipo de bomba guarda el valor de su alcance, el cual es un número aleatorio
del 1-4 y afecta solo a las celdas libres de obstáculo.



*/