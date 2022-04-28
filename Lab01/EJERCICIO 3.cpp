#include <iostream>
using namespace std;
int main()
{
	int hora,minuto;
	string formato;
	cout<<"Que hora es :( ingrese solo numeros del 0 al 23): ";
	cin>>hora;
	cout<<"minutos?: ";
	cin>>minuto;
	if (24>hora and hora>11)
	{
		formato="Pm";
	}
	else {
		formato="Am";
	}
	if(25>hora and hora>12){
		hora=hora-12;
	}
	cout<<"la hora es: "<<hora<<":"<<minuto<<" "<<formato<<endl;
	return 0;
}
