#include "Escenario.h"


	Escenario::Escenario(){
		tablero=new Item**[11];
		for (int i = 0; i < 11; ++i)
		{
			tablero[i]=new Item*[13];
			for (int j = 0; j < 13; ++j)
			{
				tablero[i][j]=new Item[1];
			}
		}

		for (int i = 0; i < 11; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
				tablero[i][j]=new Item();
				if(i%2 !=0 && j%2 !=0){

					tablero[i][j]->setElemento('-');
				}
			}
			cout<<endl;
		}
		tablero[0][0]= new Jugador("Vitor",true,true);
		tablero[0][0]->setElemento('J');
		tablero[0][0]->setCord_i(0);
		tablero[0][0]->setCord_j(0);


		tablero[10][0]= new Jugador("Bot",true,false);
		tablero[10][0]->setElemento('B');
		tablero[0][0]->setCord_i(10);
		tablero[0][0]->setCord_j(0);		
		
		tablero[0][12]= new Jugador("Bot",true,false);
		tablero[0][12]->setElemento('B');
		tablero[0][0]->setCord_i(0);
		tablero[0][0]->setCord_j(12);		
				
		tablero[10][12]= new Jugador("Bot",true,false);
		tablero[10][12]->setElemento('B');
		tablero[0][0]->setCord_i(10);
		tablero[0][0]->setCord_j(12);		
	}
	void Escenario::setTablero(Item*** pTablero){

		tablero=pTablero;
	}
	Item*** Escenario::getTablero(){
		return tablero;
	}
	void Escenario::ImprimeTablero(){
		for (int i = 0; i < 11; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
				cout<<"["<<tablero[i][j]->getElemento()<<"]";
			}
			cout<<endl;

		}
	}
	void Escenario::deleteTablero(){
		for (int i = 0; i < 11; ++i)
		{
			for (int j = 0; j < 13; ++j)
			{
				delete tablero[i][j];
			}
					delete tablero[i];
		}
		delete[] tablero;
	}

	Bomba* Escenario::getBombas(int x){
		return bombas[x];
	}
	void Escenario::setBomba(Bomba* b){
		bombas.push_back(b);
	}
