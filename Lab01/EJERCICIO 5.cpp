#include <iostream>
using namespace std;

int main(){
	float numero;
	int valor_int,a,b;
	
	cout<<"Ingrese un n�mero flotante: "<<endl; cin>>numero;
	valor_int = numero*10000000;
	a = valor_int%10000000; 
	b = valor_int/10000000;
	if(a>4444445){
		cout<<"El n�mero redondeaado es: "<<b+1;
	}
	else{
		cout<<"El n�mero redondeado es: "<<b;
	}
	
	return 0;
}
