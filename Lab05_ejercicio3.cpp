#include <iostream>
#include<time.h>
using namespace std;
void mostrar(float** Matriz,int tamanho1,int tamanho2){
	cout<<"Vector:"<<endl;
	for(int i=0;i<tamanho1;i++){
		for(int j=0;j<tamanho2;j++){
			cout<<Matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}
void eliminar(float** Matriz,int tamanho1,int tamanho2){
	int fila,columna;
	cout<<"Cambiar:"<<endl;
	cout<<"Fila: ";
	cin>>fila;
	cout<<"Columna: ";
	cin>>columna;
	cout<<"**********Nueva Matriz**********"<<endl;
	Matriz[fila-1][columna-1]=0;
	mostrar(Matriz,tamanho1,tamanho2);
}
void ordenar(float** Matriz,int tamanho1,int tamanho2){
	srand(time(NULL));
	for(int i=0;i<tamanho1;i++){
		for(int j=0;j<tamanho2-1;j++){
			int aux=0;
			for(int h=0;h<tamanho2-1;h++){
				if(Matriz[i][h]>Matriz[i][h+1]){
				aux=Matriz[i][h+1];
					Matriz[i][h]=Matriz[i][h+1];
					Matriz[i][h+1]=aux;
				}
			}
		}
	}
}
void insertar(float** Matriz,int tamanho1,int tamanho2){
	srand(time(NULL));
	for(int i=0;i<tamanho1;i++){
		for(int j=0;j<tamanho2;j++){
			Matriz[i][j]=1+rand()%(10-1);
		}
	}
}
int main(){
	int tamanho1,tamanho2;
	tamanho1=5;
	tamanho2=5;
	float** Matriz=new float*[tamanho1];
	for(int i=0;i<tamanho1;i++){
		Matriz[i]=new float[tamanho2];
	}
	insertar(Matriz,tamanho1,tamanho2);
	ordenar(Matriz,tamanho1,tamanho2);
	mostrar(Matriz,tamanho1,tamanho2);
	eliminar(Matriz,tamanho1,tamanho2);
	for(int i=0;i<tamanho2;i++){
		delete[] Matriz[i];
	}
	delete[]Matriz;
}

