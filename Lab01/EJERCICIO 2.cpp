#include <iostream>
using namespace std;
int main(){
	
	string Nomb,Ap_pa,Ap_ma;
	
	cout<<"Ingrese su primer nombre :"; cin>>Nomb;
	cout<<"Ingrese su apellido paterno :"; cin>>Ap_pa;
	cout<<"Ingrese su apellido materno :"; cin>>Ap_ma;
	
	cout<<"Su correo UNSA es: "<<Nomb[0]<<Ap_pa<<Ap_ma[0]<<"@unsa.edu.pe";
	
	return 0;
}
