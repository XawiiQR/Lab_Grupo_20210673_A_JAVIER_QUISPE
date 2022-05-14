//Alumno.h
#ifndef ALUMNO_H
#define ALUMNO_H
#pragma once
#include <iostream>
using namespace std;
class Alumno {
private:
	string Nombre;
	string ApePa;
	string ApeMa;
	int CUI;
	int nota1,nota2,nota3;
public:
	Alumno(int, string, string, string , int ,int , int);
	~Alumno();
	void Mostrar();
	
	
};

#endif

