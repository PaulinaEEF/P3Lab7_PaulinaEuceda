#include "Chatarunga.h"

Chatarunga::Chatarunga()
{
	this->size=8;
}

bool Chatarunga::jugar(){
	int turnos=0;
	int x,y, fil, col;
	int salida=1;
	string coor;
	while(true){
		cout<<"\n1) Seguir Jugando \nCualquier otro numero) Parar \nElija la opcion que desea: ";
		cin>>salida;
		cout<<endl;
		if(salida==1){
			if(turnos%2==0){
				cout<<"---Jugador de piezas blancas---"<<endl;
			}else{
				cout<<"---Jugador de piezas negras---"<<endl;
			}
			
			
			cout<<"Elija la coordenada en [letra][numero]-[letra][numero]: ";
			cin>>coor;
			x = coor[4] -48;
			y = coor[1] -65;
			fil = coor[11] -48;
			col = coor[8] -65;
			
			
			while(x<0 || x>7 || y<0 || y>7){
				cout<<"No se puede, fuera de los limites el que quiere mover. \nElija la coordenada en x de la pieza que desee mover: ";
				cin>>x;
				cout<<"Elija la coordenada en y de la pieza que desee mover: ";
				cin>>y;
			}
			while(tablero[x][y]==NULL){
				cout<<"No se puede, no hay nada. \nElija la coordenada en x de la pieza que desee mover: ";
				cin>>x;
				cout<<"Elija la coordenada en y de la pieza que desee mover: ";
				cin>>y;
			}
			
			
			
			while(fil<0 || fil>7 || col<0 || col>7){
				cout<<"No se puede, fuera de los limites donde quiere mover. \nElija la coordenada en x de donde quiere mover: ";
				cin>>fil;
				cout<<"Elija la coordenada en y de donde quiere mover: ";
				cin>>col;
			}
			
			
			if(tablero[x][y]->movimiento(fil, col)){
				printTablero();
				turnos++;
			}else{
				cout<<"\nUps. Algo fue mal. Intente de nuevo.\n";
			}
		}
		
		
		else{
			cout<<"Sayonara"<<endl;
			break;
		}
	
//	cout<<"x: ";
//	cin >> x;
//	cout<<"y: ";
//	cin >> y;
//	
//	cout<<"res "<<tablero[6][0]->validarPiezas(x,y)<<endl;
	}
}

void Chatarunga::crearTablero(){
	
	tablero = new Pieza**[size];
	
	for(int i = 0;i<size;i++){
		tablero[i] = new Pieza*[size];
	}
	///instanciar size x size Piezas
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i<2){
				if(i==0){
					if(j==0 || j==7){
						
						tablero[i][j] = new Torre(i, j, tablero, 'T');

					}if(j==1 || j==6){

						tablero[i][j] = new Caballo(i, j, tablero,'C');

					}if(j==2 || j==5){

						tablero[i][j] = new Elefante(i, j, tablero,'E');

					}if(j==3){

						tablero[i][j] = new Raja(i, j, tablero,'R');

					}if(j==4){

						tablero[i][j] = new Ministro(i, j, tablero,'M');

					}
					
				}else if(i==1){
					tablero[i][j] = new Infanteria(i, j, tablero,'I');
				}
			}else if(i>=6){
				if(i==6){
					tablero[i][j] = new Infanteria(i, j, tablero,'L');
				}else if(i==7){
					if(j==0 || j==7){
						tablero[i][j] = new Torre(i, j, tablero,'Y');
					}
					else if(j==1 || j==6){
						tablero[i][j] = new Caballo(i, j, tablero,'O');
					}
					else if(j==2 || j==5){
						tablero[i][j] = new Elefante(i, j, tablero,'3');
					}
					else if(j==3){
						tablero[i][j] = new Ministro(i, j, tablero,'W');
					}
					else if(j==4){
						tablero[i][j] = new Raja(i, j, tablero,'P');
					}
				}
			}else{
				tablero[i][j] = NULL;
			}
		   	
		}
	}
}

void Chatarunga::printTablero(){
	cout<<"   A  B  C  D  E  F  G  H  "<<endl;
	for(int i=0;i<size;i++){
		cout<<i<<" ";
		for(int j=0;j<size;j++){
			//cout<<"j "<<j<<endl;
			if(tablero[i][j] == NULL){
				cout<<"[.]";
			}else{
				cout<<"[";
				cout<<tablero[i][j]->getChar();
				cout<<"]";
			}
		}
		cout<<endl;
	}
}

Chatarunga::~Chatarunga()
{
	for(int i=0;i<size;i++)
		for(int j=0;j<size;j++){
			delete tablero[i][j];
		}
		
	for(int i = 0;i<size;i++){
		delete[] tablero[i];
	}
	
	delete[] tablero;
}
