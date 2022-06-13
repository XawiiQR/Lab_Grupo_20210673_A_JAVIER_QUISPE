#include <iostream>
using namespace std;
class Nodo{
public:
	int dato;// declaramos una variabke
	Nodo* NodoSgt; //declaramos un puntero
	Nodo();//constructor de la clase nodo
	~Nodo();// destructor de la clase nodo
	Nodo(int _dato);
};
Nodo::Nodo(){
	dato=0;
	NodoSgt=NULL;
}

Nodo::~Nodo(){
	
}

Nodo::Nodo(int _dato){
	this->dato=_dato;
	this->NodoSgt=NULL;
}
class ListaEnlazada{
	Nodo* cbz;
	int longitudList;
public:
	ListaEnlazada();
	~ListaEnlazada();
	void setNodo(int dato);
	void imprimirLista();
	void tamanhoLista();
	void printTamList();
	void eliminarElemnt();
};
ListaEnlazada::ListaEnlazada(){
	cbz=NULL;
}

ListaEnlazada::~ListaEnlazada(){
	
}
void ListaEnlazada::setNodo(int dato){
	Nodo* newNodo= new Nodo(dato);
	if (cbz==NULL){
		cbz=newNodo;
		return;
	}
	Nodo* aux=cbz;
	while (aux->NodoSgt!=NULL){
		aux=aux->NodoSgt;
	}
	aux->NodoSgt=newNodo;/*Nodo ingresado va al final*/
}
void ListaEnlazada::imprimirLista(){
	Nodo* aux=cbz;
	if (cbz==NULL){
		cout<<"La lista enlazada no contiene ningun elemento."<<endl;
		return; 
	}
	cout<<"Los elementos de la lista enlazada son: ";
	while (aux!=NULL){
		if ((aux->NodoSgt)!=NULL){
			cout<<aux->dato<<"-> ";
		}
		else{
			cout<<aux->dato;
		}
		aux=aux->NodoSgt;
	}
	cout<<endl;
}
void ListaEnlazada::tamanhoLista(){
	longitudList=0;
	if (cbz==NULL){
		return;
	}
	Nodo* auxExtra=cbz;
	while (auxExtra!=NULL){
		auxExtra=auxExtra->NodoSgt;
		longitudList++;
	}
}
void ListaEnlazada::printTamList(){
	this->tamanhoLista();
	cout<<endl<<"La lista tiene "<<longitudList<<" elementos"<<endl;
}

void ListaEnlazada::eliminarElemnt(){
	this->tamanhoLista();
	Nodo *aux1=cbz;
	Nodo *aux2=NULL;
	if (cbz==NULL){
		cout<<endl<<"No se puede borrar nada: la lista está vacía."<<endl;
		return; 
	}
	else if (cbz->NodoSgt==NULL){
		cbz=NULL;
		delete cbz;
		return; 
	}
	int tam;
	tam=longitudList;
	while(tam-->1){
		aux2=aux1;
		aux1=aux1->NodoSgt;
	}
	aux2->NodoSgt=aux1->NodoSgt;
	delete aux1;
}
int main(int argc, char *argv[]) {
	int _Dato,ubic, option;
	bool posicionValida, finish;
	finish=false;
	ListaEnlazada list;
	list.setNodo(9);
	list.setNodo(2);
	list.setNodo(3);
	list.setNodo(4);
	list.setNodo(9);
	list.setNodo(9);
	list.setNodo(1);
	list.setNodo(7);
	list.setNodo(2);
	list.printTamList();
	list.imprimirLista();
	cout<<endl<<"Eliminando el último elemento. "<<endl;
	list.eliminarElemnt();
	list.printTamList();
	list.imprimirLista();
	list.eliminarElemnt();
	list.printTamList();
	list.imprimirLista();
	list.eliminarElemnt();
	list.printTamList();
	list.imprimirLista();
	list.eliminarElemnt();
	list.printTamList();
	list.imprimirLista();
	list.eliminarElemnt();
	list.printTamList();
	list.imprimirLista();
	list.setNodo(0);
	list.printTamList();
	list.imprimirLista();
	return 0;
}

