//Edad.cpp
#include "Edad.h"
#include <ctime>
#include "iostream"
#include <stdfix.h>
#include "string"
Edad::Edad(string _Nombre, int _diaNac, int _mesNac, int _anhoNac) {
	Nombre=_Nombre;
	diaNac= _diaNac;
	mesNac= _mesNac;
	anhoNac= _anhoNac;
};
Edad::~Edad(){
}
void Edad::Idade(){
	time_t now= time(0);
	tm* time= localtime(&now);
	int diaAct=time->tm_mday;
	int mesAct= 1+time->tm_mon;
	int anhoAct= 1900+ time->tm_year;
	 if(mesNac<mesAct){
		 edad=anhoAct-anhoNac;
	 }
	 else if(mesNac==mesAct){
		 if(diaNac<=diaAct){
			 edad=anhoAct-anhoNac;
		 }
		 else{
			 edad=(anhoAct-anhoNac)-1;
		 }
	 }
	 else if(mesNac>mesAct){
		 edad=(anhoAct-anhoNac)-1;
	 };
	 cout<<"La edad de "<<Nombre<<" es : "<<edad<<endl;
	 system("pause");
}

