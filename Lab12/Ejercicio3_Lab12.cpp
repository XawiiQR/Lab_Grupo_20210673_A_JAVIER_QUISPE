#include <iostream>
using namespace std;
class Nodo{
private:
	int dato;
	Nodo *siguiente;
	friend class Cola;//para aceder a los elementos privados de la clase nododesde Lista
};
class Cola{
public:
	Cola();
	int getFront();
	void addFront(int _dato);
	
	~Cola();
	void printLista();
	void tamanhoLista();
	void eliminarElemnt();
	void BuscarElemento(int);
private:
	Nodo* cabeza;
	int longitudList;
};
Cola::Cola(){
	cabeza=NULL;
}
Cola::~Cola(){
	while(cabeza!=NULL){
		eliminarElemnt();
	}
}
int Cola::getFront(){
	return cabeza->dato;
}
void Cola::addFront(int _dato){
	Nodo* NewNodo= new Nodo;
	NewNodo->dato=_dato;
	NewNodo->siguiente=cabeza;
	cabeza=NewNodo;
}
	

void Cola:: printLista(){
	Nodo *ptr=cabeza;
	while(ptr!=NULL){
		if ((ptr->siguiente)!=NULL){
			cout<<ptr->dato<<" -> ";
		}
		else{
			cout<<ptr->dato;
		}
		
		ptr=ptr->siguiente;
	}
	cout<<endl;
}
void Cola::tamanhoLista(){
	
	longitudList=0;
	
	if (cabeza==NULL){
	
		return;
		
	}
	
	Nodo*ptr=cabeza;
	
	while (ptr!=NULL){
	
		ptr=ptr->siguiente;
		
		longitudList++;
		
	}
	
}
	
void Cola::eliminarElemnt(){
	this->tamanhoLista();
	Nodo *ptr1=cabeza;
	Nodo *ptr2=NULL;
	
	if (cabeza==NULL){
		cout<<endl<<"No se puede borrar nada: la lista está vacía."<<endl;
		return; 
	}
	else if (cabeza->siguiente==NULL){
		cabeza=NULL;
		delete cabeza;
		return; 
	}
	int tam;
	tam=longitudList;
	while(tam-->1){
		ptr2=ptr1;
		ptr1=ptr1->siguiente;
	}
	ptr2->siguiente=ptr1->siguiente;
	delete ptr1;
}
void Cola:: BuscarElemento(int valor){
	this->tamanhoLista();
	int tam=longitudList;
	Nodo *ptr=cabeza;
	int i=0;
	while(ptr!=NULL){
		
		if ((ptr->siguiente)!=NULL){
			if ((ptr->dato)==valor){
				cout<<"el valor ingresado se encuentra en la posicion numero "<<tam-i<<" de la Cola."<<endl;
			}
			i=i+1;
		}
		
		ptr=ptr->siguiente;
	}
	
}
int main(int argc, char *argv[]) {
	Cola lista;
	lista.addFront(9);
	lista.addFront(2);
	lista.addFront(3);
	lista.addFront(4);
	lista.addFront(9);
	lista.addFront(9);
	lista.addFront(1);
	lista.addFront(7);
	lista.addFront(2);
	lista.printLista();
	lista.eliminarElemnt();
	lista.printLista();
	lista.BuscarElemento(9);
	return 0;
}
