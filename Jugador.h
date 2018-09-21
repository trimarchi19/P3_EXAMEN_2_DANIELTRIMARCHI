#ifndef JUGADOR_H
#define JUGADOR_H 
#include "Item.h"

class Jugador:public Item
{
private:
	string nombre;
	bool estado;
	bool controlador;
public:
	string getNombre();
	bool getEstado();
	bool getControlador();

	void setEstado(bool);
	void setControlador(bool);
	void setNombre(string);

	Jugador();
	Jugador(string,bool,bool);
	
};
#endif












/*
Cada jugador debe tener un nombre, el estado (vivo/muerto) y el tipo de controlador
(player o bot). E


*/