#include <iostream>
using namespace std;

void Bisiesto(){
	int anho;
	cout<<"ingrese el a�o que desea saber si es bisiesto: "<<endl;
	cin>>anho;
	if(anho%4==0){
		if(anho%100==0){
			if(anho%400==0){
				cout<<"El a�o "<<anho<<" si es Bisisesto "<<endl;
			}
			else{
				cout<<" El a�o "<<anho<< " no es Bisiesto"<<endl;
			}
		}
		else{
			cout<<"El a�o "<<anho<<" si es Bisiesto"<<endl;
		}
	}
	else{
		cout<<"El a�o "<<anho<<" no es Bisiesto"<<endl;
	}
}
int main(){
	Bisiesto();
	return 0;
}
