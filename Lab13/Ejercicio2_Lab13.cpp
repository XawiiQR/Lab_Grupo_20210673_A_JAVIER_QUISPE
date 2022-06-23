#include <iostream>
using namespace std;
struct Alumnos{
	string Nombre;
	char Grupo;
	float PrimeraFase;
	float SegundaFase;
	float TerceraFase;
	float ProyectoFinal;
	
};
int main(int argc, char *argv[]) {
	int numero ,valor;
	
	cout<<"De cuantos alumnos deseas ingresar los datos : "<<endl;
	cin>>numero;
	Alumnos* alumnos = new Alumnos[numero];
	for(int i=0; i<numero; i++){
		cout<<"Ingrese el nombre del alumno: "<<endl;
		cin>>alumnos[i].Nombre;
		cout<<"Ingrese el grupo al que pertenece "<<alumnos[i].Nombre<<endl;
		cin>>alumnos[i].Grupo;
		cout<<"Ingrese la nota de la Primera Fase de "<<alumnos[i].Nombre<<endl;
		cin>>alumnos[i].PrimeraFase;
		cout<<"Ingrese la nota de la Segunda Fase de "<<alumnos[i].Nombre<<endl;
		cin>>alumnos[i].SegundaFase;
		cout<<"Ingrese  la nota de la Tercera Fase de "<<alumnos[i].Nombre<<endl;
		cin>>alumnos[i].TerceraFase;
		cout<<"Ingrese la nota del Proyecto Final de "<<alumnos[i].Nombre<<endl;
		cin>>alumnos[i].ProyectoFinal;
		
	}
	for(int i=0;i<numero; i++){
		float notaFinal1=0, notaFinal2=0;
		notaFinal1=(alumnos[i].PrimeraFase*(15/100.0))+(alumnos[i].SegundaFase*(20/100.0));
		notaFinal2=(alumnos[i].TerceraFase*(25/100.0))+(alumnos[i].ProyectoFinal*(40/100.0));
		cout<<" El alumno / alumnma "<<alumnos[i].Nombre<<" del grupo "<<alumnos[i].Grupo<<" tiene las siguientes notas: "<<endl;
		cout<<"  Primer Fase: "<<alumnos[i].PrimeraFase<<endl;
		cout<<"  Segunda Fase: "<<alumnos[i].SegundaFase<<endl;
		cout<<"  Tercera Fase: "<<alumnos[i].TerceraFase<<endl;
		cout<<"  Proyecto Final: "<<alumnos[i].ProyectoFinal<<endl;
		cout<<"  La Nota Final es: "<<notaFinal1+notaFinal2<<endl;
	}
	return 0;
}

