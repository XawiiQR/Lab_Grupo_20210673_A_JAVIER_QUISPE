#include <iostream>
using namespace std;
int main() {
	int num1,num2,aux;
	int *ptr1=&num1;
	int *ptr2=&num2;
	cout<<"Ingrese el valor para el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el valor para el segundo numero: ";
	cin>>num2;
	cout<<"**********Mostrar Valores*********" <<endl;
	cout<<"Primer numero :"<<num1<<endl;
	cout<<"Segundo numero :"<<num2<<endl;

	aux=*ptr1;
	*ptr1=*ptr2;
	*ptr2=aux;
	cout<<"**********Intercambio de Valores*********" <<endl;
	cout<<"Primer numero :"<<num1<<endl;
	cout<<"Segundo numero :"<<num2<<endl;
}
