#include <iostream>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Chatarunga.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x, y;
	char z;
	Chatarunga* cha = new Chatarunga();
	cha->crearTablero();
	cha->printTablero();
	cha->jugar();
//	Infanteria* infan = new Infanteria(x, y, z);
//	Torre* torre = new Torre(x, y, z);
	delete cha;
	return 0;
}
