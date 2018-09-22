#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"
class Bomba:public Item{
private:
	int contador;
public:
	int getContador();
	void setContador();
	Bomba();
	Bomba(int);
	Bomba(int,char,int,int);
	//~Bomba();
	
};
#endif

/*
La clase bomba se caracteriza porque guarda un número que indica el turno a explotar.
Cada vez que el usuario se mueva, las bombas reducen en 1 su contador, al llegar a 0 el
contador la bomba debe explotar.




*/