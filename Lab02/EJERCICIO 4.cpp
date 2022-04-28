#include <iostream>
using namespace std;

int main ()
{
	int a,b,i=0,j=0,result=0,c=0;
	cout<<"ingrese 2 numeros en interbalo para hallar los numeros primos: "<<endl;
	cin>>a>>b;
	cout<<"Los primeros 50 numeros son: ";
	for(i=a;i<=b;i++)
	{
		for(j=1;j<=i;j++)
		{
			result=i%j;
			if(result==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			cout<<" "<<i;
		}
		c=0;
	}
}
