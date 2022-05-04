//Ejercicio 4
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int Ma[5][3];
	cout<<"ingrese los datos prala matriz"<<endl;
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<" Posicion"<<i<<","<<j<<endl;
			cin>>Ma[i][j];
		}
	}
	for(int i=0; i<5;i++){
		for(int j=0; j<3; j++){
			cout<<Ma[i][j];
		}
		cout<<endl;
	}
	int suma=0;
	for(int i=0; i<5;i++){
		if(i%2==0){
			for(int j=0; j<3; j++){
				suma=Ma[i][j]+suma;
			}
		
		cout<<"la suma de la fila "<<i<<" es: "<<suma<<endl;
		suma=0;
		}
	}
	return 0;
}

