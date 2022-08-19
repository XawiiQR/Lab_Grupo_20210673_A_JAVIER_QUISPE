
#include <iostream>
using namespace std;

class Functor {
	
public:    
	
	void operator()() {//sin parametros
		cout << "Hola Mundo"<<endl;
	}
	int  operator()(int a , int b) {//Con parametros y retorno
		return a+b;
	}
};

int main() {
	
	//Creamos el objeto de la clase Functor
	Functor func;
	
	// Llamamos al objeto
	func();
	int suma =func(10 ,20);
	cout<<"La suma es " <<suma; 
	return 0;
}

