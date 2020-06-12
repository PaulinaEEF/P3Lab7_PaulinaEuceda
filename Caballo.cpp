#include "Caballo.h"

Caballo::Caballo(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Caballo::validarPiezas(int x, int y){
	if(tablero[x][y] == NULL){
		
		if(x==fila-2 && y==columna-1){//valida esquina superior izquierda arriba
			return true;
		}
		else if(x==fila-1 && y==columna-2){//valida esquina superior a la par
			return true;
		}
		else if(x==fila-2 && y==columna+1){//valida esquina superior derecha arriba
			return true;
		}
		else if(x==fila-2 && y==columna+1){//valida esquina superior derecha par
			return true;
		}
		else if(x==fila+1 && y==columna-2){//valida esquina inferior izquierda par
			return true;
		}
		else if(x==fila+2 && y==columna-1){//valida esquina inferior izquierda arriba
			return true;
		}
		else if(x==fila+1 && y==columna+2){//valida esquina inferior derecha par
			return true;
		}
		else if(x==fila+2 && y==columna+1){//valida esquina inferior derecha arriba
			return true;
		}
		else{
			return false;
		}
		
	}else{
		return false;
	}
}

Caballo::~Caballo()
{
}
