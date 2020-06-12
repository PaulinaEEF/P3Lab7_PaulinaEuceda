#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	public:
		Pieza(int, int, Pieza***);
		virtual bool validarPiezas(int, int)=0;
		bool movimiento(int, int);
		char getChar();
		~Pieza();
	protected:
		Pieza*** tablero;
		int fila, columna;
		char caracter;
};

#endif
