#include <iostream>
#include <vector>
using namespace std;

class Stack{
private:
	vector<int>Pila;
	int indexTop;
	int maxSize;
public:
	Stack();
	int top();
	void push(int);
	void pop();
	void mostrarPila();
	void Buscar(int);
	
};

Stack::Stack(){
	indexTop=-1;
	
}

void Stack::push(int elemento)//insertamos un nuevo elemento a la pila
{
	Pila.push_back(elemento);
}

void Stack::pop()//elimina el ultimo elemento ingresado en la pila
{
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
		Pila.pop_back();
		cout<<"Elemento Eliminado."<<endl;
	}
}

void Stack::mostrarPila(){
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
		cout<<"**********Los Elementos de la Pila son**********"<<endl;
		for(int i=Pila.size()-1; i>=0;i--){
			cout<<Pila[i]<<endl;
		}
	}
}
void Stack::Buscar(int num){
	int numero,j=0;
	if(Pila.size()==0){
		cout<<"La pila no tiene elementos"<<endl;
	}
	else{
	
		for(int i=0; i<Pila.size();i++){
			if(Pila[i]==num){
				cout<<endl<<"El numero "<<num<<" se encontro en la ubicacion "<<i+1<<endl;
				j++;
			}
		}
		if(j<1){
			cout<<endl<<"No se encontro el numero ingresado"<<endl;
		}
	}
}
int main(int argc, char *argv[]) {
	vector<int>Pila;
	Stack pila;
	string opcion;
	
	while(true){
		cout<<"**********MENU**********"<<endl;
		cout<<"1. Agregar elemento a la Pila"<<endl;
		cout<<"2. Eliminar elemento"<<endl;
		cout<<"3. Buscar elemento"<<endl;
		cout<<"4. Mostrar Pila"<<endl;
		cout<<"5. Salir"<<endl;
		cout << "Opcion: ";
		cin>>opcion;
		string numero;
		int _num;
		if(opcion=="1"){
			cout<<"Ingrese un numero para la Pila" <<endl;
			cin>>numero;
			sscanf(numero.data(), "%d", &_num);
			pila.push(_num);
		}
		else if(opcion=="2"){
			pila.pop();
		}
		else if(opcion=="3"){
			cout<<"Ingrese el numero que desees buscar en la Pila" <<endl;
			cin>>numero;
			sscanf(numero.data(), "%d", &_num);
			pila.Buscar(_num);
		}
		else if(opcion=="4"){
			pila.mostrarPila();
		}
		else if(opcion=="5"){
			break;
		}
		else{
			cout<<"Valor incorrecto. Vuelva a intentarlo."<<endl;
		}	
	}
	
	return 0;
}

