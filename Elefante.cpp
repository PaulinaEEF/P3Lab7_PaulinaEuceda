#include "Elefante.h"
using std::cout;
Elefante::Elefante(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Elefante::validarPiezas(int x, int y){
	if(tablero[x][y] == NULL){
		
		if(x==fila-2 && y==columna-2){//valida esquina superior izquierda
			return true;
		}
		else if(x==fila-2 && y==columna+2){//valida esquina superior derecha
			return true;
		}
		else if(x==fila && y==columna){//valida la misma posicion
			return false;
		}
		else if(x==fila+2 && y==columna-2){//valida esquina inferior izquierda
			return true;
		}
		else if(x==fila+2 && y==columna+2){//valida esquina inferior derecha
			return true;
		}
		else{
			return false;
		}
		
	}else{
		return false;
	}
}

Elefante::~Elefante()
{
}
