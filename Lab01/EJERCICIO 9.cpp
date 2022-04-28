#include <iostream>
using namespace std;

int main(){
	int suma=0, array[10];
	for(int i=0;i<10;i++){
		cout<<"Ingrese el numero "<<i+1<<endl;
		cin>>array[i];
	}
	for(int j=0; j<10; j++){
		if(array[j]<0){
			suma=array[j]+suma;
		}
	}
	cout<<"la suma de los numeros ( solonegativos) ingresados es : " <<suma;
}
