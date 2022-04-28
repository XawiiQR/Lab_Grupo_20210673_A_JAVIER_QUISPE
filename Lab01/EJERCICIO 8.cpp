#include <iostream>
using namespace std;

int main(){
	int cantidad,numeros,i,j;
	float suma=0;
	
	cout<<"�De cuantos numeros desea hallar la media ?"<<endl;
	cin>>cantidad;
	int *array;
	array= new int[cantidad];
	
	for(i=0;i<cantidad;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>array[i];
	}
	for(j=0;j<cantidad;j++){
		suma=array[j]+suma;
	}
	cout<<"La media de los numero ingresados es "<<suma/cantidad;
	
	return 0;
}
