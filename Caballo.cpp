#include "Caballo.h"

Caballo::Caballo(int fila, int columna, Pieza*** tablero, char caracter):Pieza(fila, columna, tablero)
{
	this->caracter=caracter;
}

bool Caballo::validarPiezas(int x, int y){
	
	return false;
}

Caballo::~Caballo()
{
}
