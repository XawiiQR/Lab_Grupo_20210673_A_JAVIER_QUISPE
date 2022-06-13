#include <iostream>
using namespace std;

class nodo{
public:
	int dato;
	nodo* NodoSgt;
	nodo(){
	}
	nodo* agregar1(nodo*,int);
	void mostrar(nodo*);
};

nodo* nodo::agregar1(nodo* start, int numero){
	
	nodo* nuevo=new nodo;
	nuevo->dato=numero;
	nuevo->NodoSgt=start;
	return nuevo;
}

void nodo::mostrar(nodo*start){
	cout<<" "<<endl;
	for(nodo *p=start;p!=NULL;p=p->NodoSgt){
		cout<<p->dato<<"->";
	}
}

int main(){
	int tam;
	int num;
	nodo* start=NULL;
	cout<<"Ingrese el tamano de la lista :"<<endl;
	cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Numero: "<<endl;
		cin>>num;
		start=start->agregar1(start,num);
	}
	
	start->mostrar(start);
	return 0;
	
}
