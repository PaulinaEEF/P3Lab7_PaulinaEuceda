#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(int , int , Pieza*** , char );
		bool validarPiezas(int, int);
		~Caballo();
	protected:
};

#endif
