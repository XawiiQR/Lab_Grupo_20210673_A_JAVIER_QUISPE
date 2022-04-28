#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Ingrese el numero que desea saber la tabla"<<endl;
	cin>>numero;
	cout<<"La tabla del n�mero "<<numero<<" es: "<<endl;
	for(int i=0; i<13;i++){
		cout<<" "<<numero<<" x "<<i<<" = "<<numero*i<<endl;
	}
	return 0;
}
