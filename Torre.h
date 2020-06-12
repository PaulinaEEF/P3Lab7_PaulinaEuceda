#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"

class Torre : public Pieza
{
	public:
		Torre(int, int, Pieza***, char);
		bool validarPiezas(int, int);
		~Torre();
	protected:
};

#endif
