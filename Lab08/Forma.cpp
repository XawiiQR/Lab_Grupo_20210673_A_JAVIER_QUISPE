#include "Forma.h"
#include <iostream>
using namespace std;
Forma::Forma() {
	
}

Forma::~Forma() {
	
}
void Forma::Dato(int _X, int _Y,string _Nombre){
	X=_X;
	Y=_Y;
	Nombre=_Nombre;
}
void Forma::Imprimir(){
	cout<<"El Nombre de la figura es: "<<Nombre<<endl;
	cout<<"El color del "<<Nombre<<" es: "<<Color<<endl;
	cout<<"El centro del "<<Nombre<<" es: ("<<X<<","<<Y<<")"<<endl;
}
void Forma::ObtenerColor(string _Color){
	Color=_Color;
}
void Forma::CambiarColor(string _Color){
	Color=_Color;
}
void Forma::Mover(int _X, int _Y){
	X=_X;
	Y=_Y;
}
