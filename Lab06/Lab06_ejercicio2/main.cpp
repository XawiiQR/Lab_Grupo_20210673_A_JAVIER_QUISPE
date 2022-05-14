//main.copp
#include<iostream>
#include <stdfix.h>
#include "alumno.h"

using namespace std;

int main (int argc, char *argv[]) {
	Alumno alumno= Alumno(20210673,"Javier","Quispe","Rojas",16,15,10);
	alumno.Mostrar();
	return 0;
}

