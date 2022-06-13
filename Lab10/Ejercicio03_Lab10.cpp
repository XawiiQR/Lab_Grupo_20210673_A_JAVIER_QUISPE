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
	bool insertMed(int datos,int posicion);
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
bool ListaEnlazada::insertMed(int datos,int posicion){
	Nodo* nuevoNodo= new Nodo(datos);
	this->tamanhoLista();
	if (longitudList>1 && posicion<longitudList && posicion>0){
		Nodo* aux1=cbz;
		Nodo* aux2=NULL;
		while (posicion-->=1){
			aux2=aux1; /*posicion del elemento actual*/
			aux1=aux1->NodoSgt;
		}
		aux2->NodoSgt=nuevoNodo;
		nuevoNodo->NodoSgt=aux1;
		return true;
	}
	else{
		cout<<"Posicion no valida."<<endl;
		return false;
	}
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
	while (true){
		cout<<endl<<"Ingrese un entero: ";
		cin>>_Dato;
		while (true){
			cout<<"Ingrese la posicion en lista : ";
			cin>>ubic;
			posicionValida=list.insertMed(_Dato,ubic);
			if (posicionValida==1){
				break;
			}
		}
		list.printTamList();
		list.imprimirLista();
		while (true){
			cout<<endl<<"¿Deseas agregar otro elemento? "<<endl<<"1. Sí"<<endl<<"2. No"<<endl<<"Ingresar opción por número: ";
			cin>>option;
			if(option==1){
				break;
			}
			else if(option==2){
				finish=true;
				break;
			}
			else{
				cout<<"Opción no válida. "<<endl;
			}
		}
		if(finish==true){
			break;
		}
	}
	return 0;
}
