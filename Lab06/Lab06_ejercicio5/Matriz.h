//Matriz.h
#ifndef MATRIZ_H
#define MATRIZ_H
#include<stdlib.h>
#include<time.h>
#pragma once
#include <iostream>
using namespace std;
class Matriz {
private:
	int Ma[3][3];
	int numero;
public:
	Matriz();
	
	void Buscar(int);
};

#endif

