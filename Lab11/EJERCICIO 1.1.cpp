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
	bool empty();
	int top();
	void push();
	void pop();
	void mostrarPila();
	
};

Stack::Stack(){
	indexTop=-1;
	
}

bool Stack::empty()//Devuelve si la Pila esta vacia
{ 
	if(indexTop==-1){//Si es igual a -1 nos retorna 1 que esta vacia
		return true;
	}
	return false;// en otro caso nos retorna 0 que es falso
	
}

void Stack::push()//insertamos un nuevo elemento a la pila
{
	/*
	if(indexTop +1<maxSize){//si es menor al limite , seguira agregando
		array[++indexTop]=item;//posiciona en la ubicacion del array y anhade
	}*/
	int i=0;
	int elemento, opcion;
	do {
		
		cout<<"Ingrese el elemento "<<i+1<<" de la Pila."<<endl;
		cin>>elemento;
		Pila.push_back(elemento);
		cout<<"¿Desea agregar otro elemento?"<<endl;
		cout<<" 1(Si)"<<endl<<" 2(No)"<<endl;
		cin>>opcion;
		i++;
	} while (opcion==1);
}

/*
void Stack::pop()//elimina el ultimo elemento ingresado en la pila
{
	if(!empty()){//si la pila no esta vacia eliminamos el ultimo elemento
		indexTop--;
	}
}
*/
void Stack::mostrarPila(){
	cout<<"**********Los Elementos de la Pila son**********"<<endl;
	for(int i=Pila.size()-1; i>=0;i--){
		cout<<Pila[i]<<endl;
	}
}
int main(int argc, char *argv[]) {
	vector<int>Pila;
	Stack pila;
	pila.push();
	pila.mostrarPila();
	return 0;
}
