#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"
#include<iostream>
#pragma once 
using namespace std;
class Rectangulo : public Forma {
public:
	Rectangulo();
	~Rectangulo();
	void CalcularArea();
	void CalcularPerimetro();
	void CambiarTamanho(float );
	void ImprimirRect();
	void setDatoRect(float, float);
private:
	float LadoMay;
	float LadoMen;
};

#endif

