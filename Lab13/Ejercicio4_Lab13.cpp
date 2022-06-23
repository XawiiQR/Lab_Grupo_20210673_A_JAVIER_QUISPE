#include <iostream>
using namespace std;
struct Empleado{
	string nombre;
	string sexo;
	float sueldo;
	
};
int main(int argc, char *argv[]) {
	int cantidad;
	
	cout<<"Ingrese la cantidad de Empleados de la Empresa: "<<endl;
	cin>>cantidad;
	Empleado* empleado= new Empleado[cantidad];
	for(int i=0; i<cantidad; i++){
		cout<<"Ingrese el nombre del Empleado numero "<<i+1<<": "<<endl;
		cin>>empleado[i].nombre;
		cout<<"Ingrese el sexo del empleado "<<empleado[i].nombre<<" : "<<endl;
		cin>>empleado[i].sexo;
		cout<<"Ingrese el sueldo del empleado "<<empleado[i].nombre<<" : "<<endl;
		cin>>empleado[i].sueldo;
	}
	float mayor=0;
	float menor=99999999999;
	for(int i=0; i<cantidad; i++){
		if(mayor<empleado[i].sueldo){
			mayor=empleado[i].sueldo;
		}
		if(menor>empleado[i].sueldo){
			menor=empleado[i].sueldo;
		}
	}
	cout<<"El Mayor sueldo es: "<<mayor<<endl;
	cout<<"El Menor sueldo es: "<<menor<<endl;
	for(int i=0;i<cantidad;i++){
		if(mayor==empleado[i].sueldo){
			cout<<"El/La empleado/empleada "<<empleado[i].nombre<<" es de sexo "<<empleado[i].sexo<<" y tiene el mayor sueldo de la Empresa."<<endl;
		}
		if(menor==empleado[i].sueldo){
			cout<<"El/La empleado/empleada "<<empleado[i].nombre<<" es de sexo "<<empleado[i].sexo<<" y tiene el menor sueldo de la Empresa."<<endl;
		}
	}
	return 0;
}

