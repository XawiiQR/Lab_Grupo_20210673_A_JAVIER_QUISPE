#include <iostream>
using namespace std;
struct Jugador{
	string nombre;
	int edad;
	float talla;
};
int main(int argc, char *argv[]) {
	Jugador jugador[10];
	for(int i=0; i<10; i++){
		cout<<"Ingrese el nombre del jugador numero "<<i+1<<endl;
		cin>>jugador[i].nombre;
		cout<<"Ingrese la edad del jugador  "<<jugador[i].nombre<<endl;
		cin>>jugador[i].edad;
		cout<<"Ingrese la talla del jugador  "<<jugador[i].nombre<<endl;
		cin>>jugador[i].talla;
	}
	for(int i=0; i<10; i++){
		if((jugador[i].edad<20 )&&(jugador[i].talla>1.70)){
			cout<<"El jugador "<<jugador[i].nombre<<" es menor de 20 años y tiene una altura mayor a los 1.70 mts"<<endl;
		}
	}
	return 0;
}

