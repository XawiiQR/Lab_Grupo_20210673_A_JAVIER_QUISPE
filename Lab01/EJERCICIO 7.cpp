#include <iostream>
using namespace std;

int main(){
	int num1,num2;
	cout<<"Ingrese 2 numeros enteros: "<<endl;
	cin>>num1>>num2;
	if(num1<num2){

		if(num2%num1==0){
			cout<<"el n�meeo "<<num1<<" es divisor de "<<num2<<endl;
		}
		else{
			cout<<"el n�meeo "<<num1<<" no es divisor de "<<num2<<endl;
		}
	}
	else if(num2<num1){
		if(num1%num2==0){
			cout<<"el n�meeo "<<num2<<" es divisor de "<<num1<<endl;
		}
		else{
			cout<<"el n�meeo "<<num2<<" no es divisor de "<<num1<<endl;
		}
	}
	else
	{
		cout<<"los numeros ingresados son iguales y su division es 1 "<<endl;
	}
	return 0;
}
