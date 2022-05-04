// Ejercicio 1
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int x;
	string Nombre[3];
	string Apellido[3];
	int edad[3];
	int dni[3];
	cout<<"Ingrese los datos de las personas: "<<endl;
	for(int i=0; i<3; i++){
		cout<<"Persona numero "<<i+1<<endl;
		cout<<" Nombres : ";
		fflush(stdin);
		getline(cin,Nombre[i]);
		cout<<" Apellidos: ";
		fflush(stdin);
		getline(cin,Apellido[i]);
		cout<<" Edad: ";
		fflush(stdin);
		cin>>edad[i];
		cout<<" DNI : ";
		cin>>dni[i];
		
	}
	cout<<"Los datos de que persona quieres ver :";
	cin>>x;
	cout<<"Nombres: "<<Nombre[x-1]<<endl;
	cout<<" Apellido: "<< Apellido[x-1]<<endl;
	cout<<"Edad: "<<edad[x-1]<<endl;
	cout<<"DNI: "<<dni[x-1]<<endl;
	return 0;
}
