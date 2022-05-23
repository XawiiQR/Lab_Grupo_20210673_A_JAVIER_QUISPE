#include <iostream>
using namespace std;
void Set(string*vector,int tamanho){
	cout<<"Colocar las Silabas del Array: "<<endl;
	for(int i=0;i<tamanho;i++){
		cin>>vector[i];
	}
}
void mostrar(string*vector,int tamanho){
	cout<<endl;
	cout<<"TEXTO CONCATENADO: "<<endl;
	for(int i=0;i<tamanho;i++){
		cout<<vector[i];
	}
	cout<<endl;
}
void concatenar(string*vector,string*array1,string*concatenacion,int
				tamanho,int tamanho2){
	int longitudtotal=0;
	int i=0;
	for(;i<tamanho2;i++){
		concatenacion[i]=array1[i];
	}
	int j=0;
	for(;j<tamanho;j++){
		concatenacion[i]=vector[j];
		i++;
	}
}
int main(){
	int tamanho,tamanho2;
	cout<<"TAMAÑO PRIMER VECTOR: "<<endl;
	cin>>tamanho;
	cout<<"TAMAÑO SEGUNDO VECTOR: "<<endl;
	cin>>tamanho2;
	string* array1=new string[tamanho];
	string* array2=new string[tamanho2];
	string* concatenacion=new string[tamanho+tamanho2];
	cout<<"VECTOR 1: "<<endl;
	Set(array1,tamanho);
	cout<<"VECTOR 2: "<<endl;
	Set(array2,tamanho2);
	concatenar(array1,array2,concatenacion,tamanho,tamanho2);
	mostrar(concatenacion,(tamanho+tamanho2));
	delete[] array1;
	delete[] array2;
	delete[] concatenacion;
}


