#ifndef ESCENARIO_H
#define ESCENARIO_H 
#include <string>
#include <vector>
#include "Bomba.h"
#include <iostream>
using namespace std;

class Escenario
{
private:
	vector<Bomba*>bombas;
	string nombre;
	char** tablero;
public:
	Escenario();
	void setTablero(char**);
	char** getTablero();
	void ImprimeTablero();
	void deleteTablero();
	//~Escenario();
	
};
#endif


/*
Para el desarrollo de la práctica se requiere crear un escenario, el cual consta de un
nombre, una matriz de dimensión 11x13, dicha matriz es de Items, el cual posee las
coordenadas en las que se encuentra cada elemento dentro de la matriz, una lista de
bombas, así mismo esta clase se encarga de la administración de la matriz.


*/