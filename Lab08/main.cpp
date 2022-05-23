#include<iostream>
#include "Circulo.h"
#include "Cuadro.h"
using namespace std;
int main (int argc, char *argv[]) {
	/*Forma obj = Forma();
	obj.Dato(5 ,5, "rectangulo");
	obj.ObtenerColor("rojo");
	obj.Imprimir();
	obj.Mover(3,6);
	obj.CambiarColor("Azul");
	obj.Imprimir();*/
	Rectangulo obj2= Rectangulo();
	obj2.setDatoRect(6,4.5);
	obj2.Dato(5 ,5, "rectangulo");
	obj2.ObtenerColor("Rojo");
	obj2.CalcularArea();
	obj2.CalcularPerimetro();
	obj2.ImprimirRect();
	cout<<endl;
	obj2.CambiarTamanho(2);
	obj2.CalcularArea();
	obj2.CalcularPerimetro();
	obj2.Mover(10,20);
	obj2.CambiarColor("Azul");
	obj2.ImprimirRect();
	cout<<endl;
	Elipse obj3 = Elipse();
	obj3.setDatoElip(6,3);
	obj3.Dato(4,6.5, "Elipse");
	obj3.ObtenerColor("rosado");
	obj3.Area();
	obj3.ImprimirElipse();
	obj3.Mover(7,-5);
	obj3.CambiarColor("verde");
	obj3.ImprimirElipse();
	cout<<endl;
	Cuadro obj4=Cuadro();
	obj4.Dato(5 ,5, "Cuadrado");
	obj4.setDatoRect(4,4);
	obj4.ObtenerColor("morado");
	obj4.CalcularArea();
	obj4.CalcularPerimetro();
	obj4.ImprimirRect();
	cout<<endl;
	obj4.CambiarTamanho(5);
	obj4.CalcularArea();
	obj4.CalcularPerimetro();
	obj4.Mover(15,25);
	obj4.CambiarColor("amarillo");
	obj4.ImprimirRect();
	cout<<endl;
	Circulo obj5 = Circulo();
	obj5.setDatoElip(6,6);
	obj5.Dato(8,10, "circulo");
	obj5.ObtenerColor("celeste");
	obj5.Area();
	obj5.ImprimirElipse();
	obj5.Mover(6,21);
	obj5.CambiarColor("fucsia");
	obj5.ImprimirElipse();
	cout<<endl;
	
	return 0;
}

