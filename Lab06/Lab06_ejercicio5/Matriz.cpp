//Matriz.cpp
#include "Matriz.h"

Matriz::Matriz() {
	srand(time(NULL));
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			Ma[i][j]=1+rand()%(9-1);
		}
	}
	cout<<"**********La Matriz es: **********"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<Ma[i][j]<<" ";
		}
		cout<<endl;
	}
}
void Matriz::Buscar(int _numero){
	numero=_numero;
	int contador=0;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(Ma[i][j]==numero){
				cout<<"el numero "<<numero<<" se encontro en la posicion ["<<i<<"]["<<j<<"]"<<endl;
				contador=contador+1;
			}
		}
	}
	if(contador==0){
		cout<<"el numero "<<numero<<" no se encontro" <<endl;
	}
	
}
