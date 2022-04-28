#include <iostream>
using namespace std;

int main()
{ 
	cout<<"Los numeros multiplos de 5 son : "<<endl;
	for(int i = 1; i<101; i++){
		if( i % 5 == 0 ) {
			cout<< i<<" ";
		}
	}
	
	return 0;
}
