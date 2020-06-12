#include "Raja.h"

Raja::Raja(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Raja::validarPiezas(int x, int y){
	if(x==fila-1 && y==columna-1){//valida esquina superior izquierda
		return true;
	}
	else if(x==fila-1 && y==columna){//valida arriba
		return true;
	}
	else if(x==fila-1 && y==columna+1){//valida esquina superior derecha
		return true;
	}
	else if(x==fila && y==columna-1){//valida a la izquiera
		return true;
	}
	else if(x==fila && y==columna){//valida la misma posicion
		return false;
	}
	else if(x==fila && y==columna+1){//valida a la derecha
		return true;
	}
	else if(x==fila+1 && y==columna-1){//valida esquina inferior izquierda
		return true;
	}
	else if(x==fila+1 && y==columna){//valida abajo
		return true;
	}
	else if(x==fila+1 && y==columna+1){//valida esquina inferior derecha
		return true;
	}else{
		return false;
	}
	
}
Raja::~Raja()
{
}
