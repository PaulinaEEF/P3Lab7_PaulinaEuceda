#include <iostream>
#include"Infanteria.h"
#include"Torre.h"
#include"Caballo.h"
#include"Chatarunga.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::cout;
int main(int argc, char** argv) {
	cout<<"Buenas, espero que disfrute el juego porque el programador no disfrutó programarlo :)\n";
	Chatarunga* cha = new Chatarunga();
	cha->crearTablero();
	cha->printTablero();
	cha->jugar();
	delete cha;
	return 0;
}
