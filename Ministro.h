#ifndef MINISTRO_H
#define MINISTRO_H

#include "Pieza.h"

class Ministro : public Pieza
{
	public:
		Ministro(int , int , Pieza*** , char );
		bool validarPiezas(int, int);
		~Ministro();
	protected:
};

#endif
