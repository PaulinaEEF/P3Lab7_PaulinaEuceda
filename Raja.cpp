#include "Raja.h"

Raja::Raja(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Raja::validarPiezas(int x, int y){
	return false;
}
Raja::~Raja()
{
}
