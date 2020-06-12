#ifndef CHATARUNGA_H
#define CHATARUNGA_H
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Elefante.h"
#include"Ministro.h"
#include"Raja.h"

#include<iostream>

using std::cout;
using std::endl;

class Chatarunga
{
	public:
		Chatarunga();
		void crearTablero();
		void printTablero();
		~Chatarunga();
	protected:
		int size;
		Pieza*** tablero;
//		Infanteria* infan;
//		Torre* torre;
//		Caballo* cab;
//		Elefante* elef;
//		Ministro* min;
//		Raja* raj;
};

#endif
