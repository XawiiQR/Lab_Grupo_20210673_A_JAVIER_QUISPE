#ifndef FORMA_H
#define FORMA_H
#include<iostream>
using namespace std;
class Forma {
protected:
	string Color;
	int X;
	int Y;
	string Nombre;
public:
	Forma();
	~Forma();
	void Imprimir();
	void Dato(int , int , string);
	void ObtenerColor(string);
	void CambiarColor(string);
	void Mover(int, int);

};

#endif

