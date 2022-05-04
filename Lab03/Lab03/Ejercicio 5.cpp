#include <iostream>
using namespace std;

int validar(int numero){
	if (0<numero && numero<101){
		return numero;
	}
	return 0;
}
int Par(int num){
	if(num%2==0){
		return num;
	}
	return 0;
}
int suma(int num){
	if(num>0){
		int suma=0;
		for(int i=2;i<=num;i++){
			if(i%2==0){
				suma=suma+i;
			}
		}
		return suma;
		}
	else{
		return 0;
	}
}
int main(){
	int num;
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	if(suma(Par(validar(num)))>0){
		cout<<"La suma de los numeros pares del 2 al "<<num<<" es : "<<suma(Par(validar(num)));
	}
	else{
		cout<<"El numero ingresado no es par";
	}
	return 0;
}
