#include <iostream>
#include<ctime>
using namespace std;
struct Persona {
	string nombre;
	int dia, mes;
};
int main() {
	
	int n;
	cout << "Ingrese el numero de Personas que desee almacenar sus datos: ";
	cin>>n;
	Persona* alumnos = new Persona[n];
	for (int i = 0; i < n; i++) {
		cout << "Nombre del compaņero: " << endl;
		cin >> alumnos[i].nombre;
		cout << "Dia de cumpleaņos del compaņero: " << endl;
		cin >> alumnos[i].dia;
		cout << "Mes del cumpleņos del compaņero: " << endl;
		cin >> alumnos[i].mes;
	}
	time_t now= time(0);
	tm* time= localtime(&now);
	for(int i=0; i<n; i++){
		if((time->tm_mon)+1==alumnos[i].mes){
			cout<<"El compaņero que cumpleaņos este mes es: "<<alumnos[i].nombre<<endl;
		}
	}
	return 0;
}
	
