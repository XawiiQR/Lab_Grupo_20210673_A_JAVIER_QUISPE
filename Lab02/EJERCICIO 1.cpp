#include <iostream>
using namespace std;
int main()
{

  int suma=0;
  for(int i=1 ;i<101;i++ ){
    if( i % 2 == 0 ) {
      suma=suma+i;
    }
  }
  cout<< " La suma es : " <<suma<<endl;

  return 0;
}
