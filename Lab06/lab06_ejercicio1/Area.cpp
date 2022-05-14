//Area.cpp
#include "Area.h"
Area::Area(int _lado1, int _lado2, int _lado3,int _base,int _altura){
	lado1=_lado1;
	lado2= _lado2;
	lado3=_lado3;
	base=_base;
	altura=_altura;
}

Area::~Area(){
	
}
void Area::Area_triangulo(){
	float area=0;
	int s=0;
	s= (lado1+lado2+lado3)/2;
	float x=0;
	x=s*(s-lado1)*(s-lado2)*(s-lado3);
	area=pow(x,(0.5));
	
	cout<<"El area del triangulo es "<<area<<endl;
}
void Area::Area_rectangulo(){
	cout<<"El area del rectangulo es "<<base*altura<<endl;
}
void Area::Peri_triangulo(){
	cout<<"El perimetro del triangulo es "<<lado1+lado2+lado3<<endl;
}
void Area::Peri_rectangulo(){
	cout<<"El perimetro del rectangulo es "<<(base*2)+(altura*2)<<endl;
}
