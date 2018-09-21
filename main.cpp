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
	int muertos=0,opt2;
	int ip,jp;
	int pos_i=0,pos_j=0;
	Jugador* player1=new Jugador();
	Escenario* mapa=new Escenario();
	mapa->ImprimeTablero();
		do{
		cout <<"[1] Normal"<<endl
		<<"[2] Espinas"<<endl;
		cout<<"Ingrese el tipo de Bomba:";
		cin >>opt2;
		}while(opt2<0 && opt2>2);
		
	do{
		int arriba=0,abajo=0,derecha=0,izquierda=0;
		cout<<"Ingrese su movimientos:";
		cin >>movimientos;
		for(int i=0;i<movimientos.length();i++){
			array[i]=movimientos.at(i);
		}
		for (int i = 0; i < movimientos.length(); ++i)
		{
			if(array[i]=='w'){
				arriba+=1;
			}else if(array[i]=='s'){
				abajo+=1;
			}else if(array[i]=='d'){
				derecha+=1;
			}else if(array[i]=='a'){
				izquierda+=1;
			}
		}
			cout<<"Mov::"<<derecha<<"-> " <<abajo<<" .. "<<izquierda<<"<- "<<arriba<<" l"<<endl;
			jp=pos_j+derecha-izquierda;
			ip=pos_i-arriba+abajo;
			cout<<"---"<<jp<<endl;
			cout<<"---"<<ip<<endl;

			if(jp>-1 && jp<13 && ip>-1 && ip<13){
				cout<<"Buscando...."<<endl;

				if((mapa->getTablero())[ip][jp]->getElemento()==' '){
				cout<<"Entro....................."<<endl;
				(mapa->getTablero())[ip][jp]->setElemento('P');
				(mapa->getTablero())[ip][jp]->setCord_i(ip);
				(mapa->getTablero())[ip][jp]->setCord_j(jp);
				mapa->getTablero()[pos_i][pos_j]==new Item();
				pos_j=jp;
				pos_i=ip;
				//s
				mapa->ImprimeTablero();
			}

			}else{
				cout<<"Salee de la Matriz"<<endl;
			}
		

	}while(vivo==true && muertos!=3);
	if(vivo==true){
		cout<<"FELICIDADES HAS GANADO!!!"<<endl;
	}else{
		cout<<"TE HAN DERROTADO..."<<endl;
	}
}
//|v1 = rand() % 100; 