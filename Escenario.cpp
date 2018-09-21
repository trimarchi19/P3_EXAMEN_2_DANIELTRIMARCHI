#include "Escenario.h"


	Escenario::Escenario(){

	}
	void Escenario::setTablero(char** pTablero){

		tablero=pTablero;
	}
	char** Escenario::getTablero(){
		return tablero;
	}
	void Escenario::ImprimeTablero(){
		for (int i = 0; i < 11; ++i)
		{
			for (int j = 0; j < 13; ++i)
			{
				cout<<"["<<tablero[i][j]<<"]";
			}
			cout<<endl;
		}
	}
	void Escenario::deleteTablero(){
		for (int i = 0; i < 11; ++i)
		{
			delete tablero[i];
		}
		delete[] tablero;
	}