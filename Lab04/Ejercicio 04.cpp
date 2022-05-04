using namespace std;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,cont,m,i,tabla[100];
	i=0;
	for (a=100;a>=1;a--)
	{
		cont=0;
		for (m=1;m<=a;m++)
		{
			if (a%m==0)
			{
				cont++;
			}
		}
		if (cont==2 || m==1 || m==0)
		{
			tabla[i]=a;
			i++;
		}
	}
	for (a=0;a<i;a++)
	{
		printf("%d\n",tabla[a]);
	}
	system("PAUSE");
	return 0;
}
