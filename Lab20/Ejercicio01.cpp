#include <iostream>
#include<memory>
using namespace std;
class Punto{
public:
	Punto(double x, double y): x(x),y(y){};
	void print(){
		std::cout<<"("<<x<<","<<y<<")\n";
	}
	void X(double _x){
		this->x=_x;
	};
	void Y(double _y){
		this->y=_y;
	};
private:
	double x{},y{};
};
int main(int argc, char *argv[]) {
	double *d = new  double (1.0); //Creamos el Puntero double
	Punto *pt = new Punto (1.0, 2.0); //Creamos puntero de la Clase Punto
	cout<<*d<<endl; //imprimimos el valor del puntero  d
	pt->print(); //Imprimimos el valor del puntero pt
	*d = 2.0;// cambiamos el valor del puntero d a 2.0
	cout<<*d<<endl;//Imprimimos el  nuevo valor del puntero d
	(*pt).X(3.0);//Cambiamos al puntero pt el valor x   a 3.0 mediante la funcion x
	(*pt).Y(3.0);//Cambiamos al puntero pt el valor y   a 3.0 mediante la funcion y
	pt->print();//Imprimos el valor  pt
	pt->X(3.0);//Cambiamos al puntero pt el valor x  a 3.0 mediante la funcion puntero
	pt->Y(3.0);//Cambiamos al puntero pt el valor y  a 3.0 mediante la funcion puntero
	pt->print();
	delete d; //Liberamos memoria de d
	delete pt; //Liberamos memoria de pt
	return 0;
}
