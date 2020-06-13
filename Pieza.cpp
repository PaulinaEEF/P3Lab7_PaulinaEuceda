#include "Pieza.h"

Pieza::Pieza(int fila, int columna, Pieza*** tablero)
{
	this->fila=fila; 
	this->columna=columna;
	this->tablero=tablero;	
	
}

bool Pieza::movimiento(int x, int y){
	if(validarPiezas(x, y)){
		if(tablero[x][y]!=NULL){
			tablero[x][y] = tablero[fila][columna];
			cout<<"Se lo comioooo :0\n";
		}
		
		tablero[x][y] = tablero[fila][columna];
		tablero[fila][columna] = NULL;
		fila = x;
		columna = y;
		return true;
		
	}else{
		return false;
	}
}

char Pieza::getChar(){
	return this->caracter;
}

Pieza::~Pieza()
{
	delete tablero;
}
