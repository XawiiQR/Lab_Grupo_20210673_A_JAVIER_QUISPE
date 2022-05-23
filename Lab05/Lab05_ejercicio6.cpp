#include <iostream>
using namespace std;
int sumar(int a,int b){
	return a+b;
}
int restar(int a,int b){
	return a-b;
}
int multiplicar(int a,int b){
	return a*b;
}
int dividir(int a,int b){
	if(b==0){
		cout<<"NO SE PUEDE DIVIDIR "<<endl;
	return -1;
	}
	return a/b;
}
void Ingresar_dato(int& numero){
	int i=0;
	do{
	cout<<"Ingresa el numero "<<i+1<<endl;
	cin>>numero;
	i++;
	}while(numero<=0);
}
int main(){
	int(*ptr)(int,int);
	int numero1=0;
	int numero2=0;
	Ingresar_dato(numero1);
	Ingresar_dato(numero2);
	int opcion=-1;
	
	do{
		cout<<"**********MENU**********"<<endl;
		cout<<"1. SUMAR "<<endl;
		cout<<"2. RESTAR"<<endl;
		cout<<"3. MULTIPLICAR"<<endl;
		cout<<"4. DIVIDIR"<<endl;
		cout<<"0. SALIR"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"El resultado es: ";
				ptr=sumar;
				break;
			}
			case 2:{
				cout<<"El resultado es: ";
				ptr=restar;
				break;
			}
			case 3:{
				cout<<"El resultado es: ";
				ptr=multiplicar;
				break;
			}
			case 4:{
				cout<<"El resultado es: ";
				ptr=dividir;
				break;
			}
			case 0:{
				cout<<"Salir"<<endl;
				break;
			}
			default:
				cout<<"OPCION NO VALIDA"<<endl;
				break;
			}
			if(opcion>=1 && opcion<=4){
				cout<<ptr(numero1,numero2)<<endl;
			}
		}while(opcion!=0);
}
