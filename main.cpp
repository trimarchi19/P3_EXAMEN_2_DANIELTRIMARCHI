#include <iostream>
#include <string>
#include <vector>
#include "Bomba.h"
#include "Bomba_V.h"
#include "Escenario.h"
#include "Invisible.h"
#include "Normal.h"
#include "Espina.h"
#include "Jugador.h"
#include <string>

using namespace std;
void jugar(string);
int main()
{
	int opt;
	string nombre;
	do{
		cout<<"==========================="<<endl;
		cout<<"[1] Jugar"<<endl
		<<"[2] Salir"<<endl
		<<"Que desea Hacer?: ";
		cin >>opt;
		if(opt==1){
			cout<<"Ingrese su Nombre:";
			cin >>nombre;
			jugar(nombre);
		}
	}while(opt!=1);

	return 0;
}
void jugar(string nombre){
	bool vivo=true;
	char array[256];
		string movimientos;
	int muertos=0;
	char opt2;
	int ip,jp,bombass;
	//bool triple=false;
	int pos_i=0,pos_j=0;
		do{
		cout <<"[1] Normal"<<endl
		<<"[2] Espinas"<<endl;
		cout<<"Ingrese el tipo de Bomba:";
		cin >>opt2;
		}while(opt2!='1' && opt2!='2');


	Jugador* player1=new Jugador();
	Escenario* mapa=new Escenario();
	mapa->ImprimeTablero();

	
	do{
		/*
		for(int k=0;k<mapa->getBombas().size();k++){
			if((mapa->getBombas(k))->getContador()){

			}
		}
		*/
		cout<<"===================================="<<endl;
		cout<<"[1] SI"<<endl;
		cout<<"[2] NO"<<endl;
		cout<<"Quiere dejar una Bomb?: ";
		cin>>bombass;
		int arriba=0,abajo=0,derecha=0,izquierda=0;
		cout<<"Ingrese su movimientos:";
		cin >>movimientos;
		for(int i=0;i<movimientos.length();i++){
			array[i]=movimientos.at(i);
		}
		for (int i = 0; i < movimientos.length(); ++i)
		{
			arriba=0;abajo=0;derecha=0;izquierda=0;
			if(array[i]=='w'){
				arriba+=1;
			}else if(array[i]=='s'){
				abajo+=1;
			}else if(array[i]=='d'){
				derecha+=1;
			}else if(array[i]=='a'){
				izquierda+=1;
			}
			jp=pos_j+derecha-izquierda;
			ip=pos_i-arriba+abajo;

			if(jp>-1 && jp<13 && ip>-1 && ip<13){

			if((mapa->getTablero())[ip][jp]->getElemento()==' '){
					(mapa->getTablero())[ip][jp]->setElemento('J');
					(mapa->getTablero())[ip][jp]->setCord_i(ip);
					(mapa->getTablero())[ip][jp]->setCord_j(jp);
				if(bombass==1){
					mapa->getTablero()[pos_i][pos_j]=NULL;
					mapa->getTablero()[pos_i][pos_j]=new Bomba(3,'P',ip,jp);
					mapa->setBomba(((Bomba*)mapa->getTablero()[pos_i][pos_j]));
					bombass=0;
				}else{
					mapa->getTablero()[pos_i][pos_j]->setElemento(' ');
				}
				pos_j=jp;
				pos_i=ip;
			}

			}else{
				cout<<"Salee de la Matriz"<<endl;
			}
		}
		mapa->ImprimeTablero();

		

	}while(vivo==true && muertos!=3);
	if(vivo==true){
		cout<<"FELICIDADES HAS GANADO!!!"<<endl;
	}else{
		cout<<"TE HAN DERROTADO..."<<endl;
	}
}
//|v1 = rand() % 100; 