#ifndef ESPINA_H
#define ESPINA_H 

#include "Bomba.h"

class Espina:public Bomba
{
private:
	int numero;

public:
	Espina();
	//~Espina();
	void setNumero(int);
	int getNumero();
	
};
#endif

/*
Una de las 2 tipos de bomba más poderosos, esta afecta a todos los espacios
libres de la fila y columna en las que se encuentra y guarda un número que es la cantidad
de bombas que pone el usuario.


*/