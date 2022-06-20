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
	
private:
	Nodo* cabeza;
	int longitudList;
};
Cola::Cola(){
	cabeza=NULL;
}
Cola::~Cola(){
	
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
	
	return 0;
}
