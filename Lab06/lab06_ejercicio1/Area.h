//Area.h
#ifndef AREA_H
#define AREA_H
//Definición de la clase carro -> archivo "Carro.h"
#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class Area
{
public:
	Area(int, int, int, int, int);
	~Area();
	void Area_triangulo();
	void Area_rectangulo();
	void Peri_triangulo();
	void Peri_rectangulo();
private:
	int altura;
	int base;
	int lado1;
	int lado2;
	int lado3;
};

#endif
