#include <iostream>
#include<time.h>
using namespace std;
void Imprimir(int tamanho,float* array){
	for(int i=0;i<tamanho;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}
int main(){
	srand(time(NULL));
	int tamanho;
	cout<<"Ingrese el tamanho del Vector: "<<endl;
	cin>>tamanho;
	for(int i=0;i<10;i++){
		float* array=new float[tamanho];
		float* array2= new float[tamanho];
		float* array3=new float [tamanho];
		for(int i=0;i<tamanho;i++){
			array[i]=1+rand()%(11-1);
			array2[i]=1+rand()%(11-1);
			array3[i]=(array[i]*array2[i]);
		}
		cout<<endl<<"Vector A: "<<endl;
		Imprimir(tamanho,array);
		cout<<endl<<"Vector B"<<endl;
		Imprimir(tamanho,array2);
		cout<<endl<<"Producto punto de los Vectores[A.B]:"<<endl;
		Imprimir(tamanho,array3);
		cout<<endl;
		delete[]array;
		delete[]array2;
		delete[]array3;
	}
	return 0;
}
	
