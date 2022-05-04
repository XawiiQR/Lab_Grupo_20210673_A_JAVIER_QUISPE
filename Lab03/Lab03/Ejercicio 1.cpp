#include <iostream>
using namespace std;

void Potencia(){
	int i=0, numero2, num1,b,a;
	cout<<"ingrese el un numeroque desea elevar a la potencia: "<<endl;
	cin>>num1;
	cout<<"ingrese la potencia: "<<endl;
	cin>>numero2;
	b=num1;
	a=num1;
	while(i<numero2-1){
		a=a*b;
		i++;
	}
	cout<<num1<<" elevado al "<<numero2<<" es: "<<a;
}
int main(int argc, char *argv[]) {
	Potencia();
	return 0;
}
