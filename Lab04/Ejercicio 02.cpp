//Ejercicio 2
#include <iostream>
using namespace std;
bool buscar(int x, int array[]){
	for(int i=0; i<8; i++){
		if(array[i]==x){
			return true;
		}
		
	}
	return false;
}
int main(int argc, char *argv[]) {
	int array[8];
	int x;
	cout<<"Ingrese 8 números: "<<endl;
	for(int i=0; i<8;i++){
		cin>>array[i];
	}
	cout<<"Que número desea busacar: "<<endl;
	cin>>x;
	if(buscar(x,array)==1){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
	
	return 0;
}

