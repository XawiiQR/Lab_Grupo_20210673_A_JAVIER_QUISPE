#ifndef ELIPSE_H
#define ELIPSE_H
#include "Forma.h"
using namespace std;
class Elipse : public Forma {
public:
	Elipse();
	~Elipse();
	void Area();
	void ImprimirElipse();
	void setDatoElip(float, float);
private:
		float RadioMay;
		float RadioMen;
		float area;
};

#endif

