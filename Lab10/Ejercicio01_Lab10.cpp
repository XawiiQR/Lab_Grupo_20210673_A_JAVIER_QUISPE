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
public:
	ListaEnlazada();
	~ListaEnlazada();
	void setNodo(int dato);
	void imprimirLista();
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
int main(int argc, char *argv[]) {
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
	list.imprimirLista();
	return 0;
}

