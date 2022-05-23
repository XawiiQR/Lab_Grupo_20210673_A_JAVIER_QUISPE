#include "Rectangulo.h"
#include <iostream>
#pragma once
using namespace std;
Rectangulo::Rectangulo(){
	
}

Rectangulo::~Rectangulo() {
	
}
void Rectangulo::setDatoRect(float _LadoMay , float _LadoMen){
	LadoMay=_LadoMay;
	LadoMen=_LadoMen;
}
void Rectangulo::CalcularArea(){
	int Area=LadoMay*LadoMen;
	cout<<"El area del "<<Nombre<<" es: "<<Area<<endl;
}
void Rectangulo::CalcularPerimetro(){
	int Peri=(LadoMay*2)+(LadoMen*2);
	cout<<"El perimetro del "<<Nombre<<" es: "<<Peri<<endl;
}
void Rectangulo::CambiarTamanho(float _Escala){
	LadoMay=LadoMay*_Escala;
	LadoMen=LadoMen*_Escala;
}
void Rectangulo::ImprimirRect(){
	Imprimir();
	cout<<"El lado del "<<Nombre<<" son: Lado Mayor="<<LadoMay<<" y Lado Menor="<<LadoMen<<endl;
}

