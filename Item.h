#ifndef ITEM_H
#define ITEM_H 
#include <string>
using namespace std;
class Item
{
private:
	int cord_i,cord_j;
	char elemento;
public:
	char getElemento();
	void setElemento(char);
	int getCord_i();
	int getCord_j();
	void setCord_i(int);
	void setCord_j(int);
	Item();
	Item(char,int,int);
	//~Item();
	
};
#endif
/*
, el cual posee las
coordenadas en las que se encuentra cada elemento dentro de la matriz,


*/