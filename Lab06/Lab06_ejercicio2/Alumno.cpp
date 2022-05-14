//Alumno.cpp
#include "Alumno.h"

Alumno::Alumno(int _CUI, string _ApePa, string _ApeMa ,string _Nombre, int _nota1, int _nota2, int _nota3) {
	CUI= _CUI;
	ApePa =_ApePa;
	ApeMa= _ApeMa;
	Nombre=_Nombre;
	nota1=_nota1;
	nota2=_nota2;
	nota3=_nota3;
}
Alumno::~Alumno(){
	
}
void Alumno::Mostrar(){
	float Promedio;
	Promedio=(nota1+nota2+nota3)/3;
	cout<<CUI<<" "<<ApePa<<" "<<ApeMa<<" "<<Nombre<<endl;
	if(Promedio>10.5){
		cout<<"El alumno aprobo la asignatura de ciencia de la computacion con el promedio de "<<Promedio;;
	}
	else{
		cout<<"El alumno no aprobo la asignatura de ciencia de la computacion con el promedio de "<<Promedio;
	}
}
	
