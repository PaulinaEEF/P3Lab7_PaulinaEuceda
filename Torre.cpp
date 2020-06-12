#include "Torre.h"



Torre::Torre(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Torre::validarPiezas(int, int){
	return false;
}

Torre::~Torre()
{
}
