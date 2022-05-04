#include <iostream>
using namespace std;

void Primo(){
	
	int num_primo,result=0,c=0;
	cout<<"ingrese el numero para hallar el interbalo de los numeros primos: ";
	cin>>num_primo;
	cout<<"Los numros primos del 1 al "<<num_primo<<" son: "<<endl;
	for(int i=1;i<=num_primo; i++){
		for(int j=1; j<=i;j++){
			result=i%j;
			if(result==0){
				c=c+1;
			}
		}
		if(c==2){
			cout<<" "<<i;
		}
		c=0;
	}
	
}
int main(){
	Primo();
	return 0;
}
