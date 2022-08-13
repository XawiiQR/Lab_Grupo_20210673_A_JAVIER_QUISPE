#include <iostream>
using namespace std;
class RLS{
private:
	float xsuma=0;
	float ysuma=0;
	float xysuma=0;
	float x2suma=0;
public:
	void operator()(int vect_X [],int vect_Y [],int tamanho){
		for(int j=0; j<tamanho; j++){
			xsuma+=vect_X[j];
			x2suma+=vect_X[j]*vect_X[j];
			ysuma+=vect_Y[j];
			xysuma+=vect_X[j]*vect_Y[j];
		}
		cout<<"**********Formula: y = a + bx**********"<<endl;
		float rest1=((tamanho*xysuma)-(xsuma*ysuma));
		float rest2=((tamanho*x2suma)-(xsuma*xsuma));
		float m=rest1/rest2;
		cout<<endl<<"**********Resultado:**********"<<endl;
		cout<<"m = "<<m<<endl;
		cout<<"a = "<<(xsuma/tamanho)<<endl;
		cout<<"b = "<<(ysuma/tamanho)<<endl;
		
	}
};
int main(int argc, char *argv[]) {
	int vectX [4]={5,4,3,2};
	int vectY[4]={9,1,8,2};
	RLS regresion;
	regresion(vectX,vectY,4);
	return 0;
}

