//main.cpp
#include<iostream>
#include <stdfix.h>
#include "Area.h"
#include <math.h>
using namespace std;

int main (int argc, char *argv[]) {
	Area ar = Area(3,4,5,4,5);
	ar.Area_triangulo();
	ar.Peri_triangulo();
	ar.Peri_rectangulo();
	ar.Area_rectangulo();
	return 0;
}

