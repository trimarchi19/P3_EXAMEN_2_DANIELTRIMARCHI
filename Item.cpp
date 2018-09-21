#include "Item.h"

	char Item::getElemento(){
		return elemento;
	}
	void Item::setElemento(char pElemento){
		elemento=pElemento;
	}
	int Item::getCord_i(){
		return cord_i;
	}
	int Item::getCord_j(){
		return cord_j;
	}
	void Item::setCord_i(int i){
		cord_i=i;
	}
	void Item::setCord_j(int j){
		cord_j=j;
	}
	Item::Item(){
		elemento=' ';
	}
	Item::Item(char pElemento,int i,int j){
		elemento=pElemento;
		cord_i=i;
		cord_j=j;
	}