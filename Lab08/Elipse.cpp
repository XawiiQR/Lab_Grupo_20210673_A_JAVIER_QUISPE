#include "Elipse.h"
#include <iostream>
#pragma once

using namespace std;
Elipse::Elipse() {
	
}

Elipse::~Elipse() {
	
}
void Elipse::Area(){
	area= 3.14*(RadioMay*RadioMen);
	
}
void Elipse::ImprimirElipse(){
	Imprimir();
	cout<<"El area del "<<Nombre<<" es: "<<area<<endl;
	
}
void Elipse::setDatoElip(float _RadioMay, float _RadioMen){
	RadioMay=_RadioMay;
	RadioMen=_RadioMen;
}

