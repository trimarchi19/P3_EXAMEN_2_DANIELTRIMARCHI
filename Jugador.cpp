#include "Jugador.h"


	string Jugador::getNombre(){
		return nombre;
	}
	bool Jugador::getEstado(){
		return estado;
	}
	bool Jugador::getControlador(){
		return controlador;
	}

	void Jugador::setEstado(bool pEstado){
		estado=pEstado;
	}	
	void Jugador::setControlador(bool pControlador){
		controlador=pControlador;
	}
	void Jugador::setNombre(string pNom){
		nombre=pNom;
	}

	Jugador::Jugador(){

	}
	Jugador::Jugador(string pNom,bool pEstado,bool pControlador){
		nombre=pNom;
		controlador=pControlador;
		estado=pEstado;
	}