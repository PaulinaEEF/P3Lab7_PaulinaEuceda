#include "Ministro.h"

Ministro::Ministro(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Ministro::validarPiezas(int x, int y){
	if(tablero[x][y] == NULL){
		if(x==fila-1 && y==columna-1){//valida esquina superior izquierda
			return true;
		}
		else if(x==fila-1 && y==columna+1){//valida esquina superior derecha
			return true;
		}
		else if(x==fila && y==columna){//valida la misma posicion
			return false;
		}
		else if(x==fila+1 && y==columna-1){//valida esquina inferior izquierda
			return true;
		}
		else if(x==fila+1 && y==columna+1){//valida esquina inferior derecha
			return true;
		}else{
			return false;
		}
		
	}else{
		return false;
	}
}

Ministro::~Ministro()
{
}
