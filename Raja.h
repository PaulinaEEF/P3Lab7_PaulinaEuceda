#ifndef RAJA_H
#define RAJA_H

#include "Pieza.h"

class Raja : public Pieza
{
	public:
		Raja(int , int , Pieza*** , char );
		bool validarPiezas(int, int);
		~Raja();
	protected:
};

#endif
