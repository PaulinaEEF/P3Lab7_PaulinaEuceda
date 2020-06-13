#include "Torre.h"



Torre::Torre(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Torre::validarPiezas(int x, int y){
	if(tablero[x][y] == NULL){
		
		if(x==fila || y==columna){//valida misma fila
			return true;
		}
		else{
			return false;
		}
		
	}else{
		return true;
	}
}

Torre::~Torre()
{
}
