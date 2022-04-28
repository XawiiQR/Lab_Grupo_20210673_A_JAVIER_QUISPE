#include <iostream>
using namespace std;
int main(){
  int x,num1=0,num2=1,num3=1;
  cout<<"Cuantos numeros quiere en su serie Fibonaci: ";
  cin>>x;
  cout<<"1 ";
  for(int i=1;i<x;i++){
    num3 =num1 + num2;
    cout<<num3<<" ";
    num1 = num2;
    num2 = num3;
  }
  return 0;
}
