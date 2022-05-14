//Edad.h
#ifndef EDAD_H
#define EDAD_H
#pragma once
#include <iostream>
using namespace std;
class Edad {
public:
	Edad(string,int,int,int);
	~Edad();
	void Idade();
private:
	int diaNac, mesNac, anhoNac;
	string Nombre;
	int edad;
};


#endif

