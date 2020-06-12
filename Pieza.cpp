#include "Pieza.h"

Pieza::Pieza(int fila, int columna, Pieza*** tablero)
{
	this->fila=fila; 
	this->columna=columna;
	this->tablero=tablero;	
	
}

bool Pieza::movimiento(int, int){
	
}

char Pieza::getChar(){
	return this->caracter;
}

Pieza::~Pieza()
{
}
