#include <iostream>
using namespace std;
int main ()
{
  int a=232,i=0,j=0,result=0,b=0;
  cout<<"Los primeros 50 numeros son: ";
  for(i=1;i<=a;i++)
  {
    for(j=1;j<=i;j++)
    {
      result=i%j;
      if(result==0)
      {
        b=b+1;
      }
    }
    if(b==2)
    {
      cout<<" "<<i;
    }
  b=0;
   }
}
