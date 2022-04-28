#include <iostream>
using namespace std;
int main(){
	float num_may = 0,num_men=9999999,x,num,suma= 0,media;
	
	cout<<"Cuantos numeros desea ingresar :"; cin>>x;
	
	for(int i =1;i<=x;i++){
		cout<<"Ingrese el numero "<<i<<" : "; cin>>num;
		
		suma = num + suma;
		
		if(num_may<num){
			num_may=num;
		}
		if(num_men>num){
			num_men=num;
		}
	}
	media = suma/x;
	cout<<"El numero mayor es :"<<num_may<<endl;
	cout<<"El numero menor es :"<<num_men<<endl;
	cout<<"La media aritmetica es:"<<media;
	return 0;
}
