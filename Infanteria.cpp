#include "Infanteria.h"


Infanteria::Infanteria(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Infanteria::validarPiezas(int x, int y){
	return false;
}

Infanteria::~Infanteria()
{
}
