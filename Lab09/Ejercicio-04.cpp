#include<iostream>
#include<list>
#include<cmath>
using namespace std;

template <class A>
A num_menor(A arreglo[5]) {
    A min = arreglo[0];
    for (int i = 0; i < 5; i++) {
        if (arreglo[i] <= min)
            min = arreglo[i];
    }
    return min;
}
template <class A>
A num_mayor(A arreglo[5]) {
    A max = arreglo[0];
    for (int i = 0; i < 5; i++) {
        if (arreglo[i] >= max)
            max = arreglo[i];
    }
    return max;
}
int main() {
    int numeros_enteros[5] = { 10,7,2, 8, 6 };
    float numeros_float[5] = { 12.1, 8.7, 5.6, 8.4, 1.2 };
    cout<<"*********************ARREGLO ENTEROS************************"<<endl;
    cout << "Menor del arreglo entero es: " <<num_menor<int>(numeros_enteros) << endl;
    cout << "Mayor del arreglo entero es: " <<num_mayor<int>(numeros_enteros) << endl;
    cout << endl;
    cout<<"*********************ARREGLO FLOAT************************"<<endl;
    cout << "Menor del arreglo float es: " <<num_menor<float>(numeros_float) << endl;
    cout << "Mayor del arreglo float es: " <<num_mayor<float>(numeros_float) << endl;
    return 0;
}
