#include "Bomba.h"
	int Bomba::getContador(){

	}
	void Bomba::setContador(){
		contador-=1;
	}
	Bomba::Bomba(){

	}
	Bomba::Bomba(int pCont){

		contador=pCont;
	}Bomba::Bomba(int pCont ,char elemento,int i,int j ):Item(elemento,i,j){
		contador=pCont;
	}


