#include<iostream>
#include<cmath>
using namespace std;

    template <typename A>
void descendente(A lista[5]) {
    A b;
    for (int i = 0; i<= 4; i ++) {
        for (int j = i; j <= 4; j += 1) {
            if (lista[i] > lista[j]) {
                b = lista[i];
                lista[i] = lista[j];
                lista[j] = b;
            }
        }
    }
    A lista2[5];
    int aux = 0;
    for (int i = 4; i >= 0; i--) {
        lista2[aux]= lista[i];
        aux++;
    }
    for (int i = 0; i < 5;i ++) {
        cout << lista2[i] << " ";
    }
}

template <class A>
void ascendente(A lista[5]) {
    A b;
    for (int i = 0; i <= 4; i ++) {
        for (int j = i; j <= 4; j += 1) {
            if (lista[i] > lista[j]) {
                b = lista[i];
                lista[i] = lista[j];
                lista[j] =b;
            }
        }
    }
    for (int i = 0; i < 5; i ++) {
        cout << lista[i] << " ";
    }
}


int main() {
    int numero_enteros[5] = { 5,7,2,8,6};
    float numeros_float[5] = { 10.1, 8.4, 3.6, 4.4, 11.2 };
    cout << "El arreglo entero ordenado: " << endl;
    cout<<"Ascendente: ";
    ascendente<int>(numero_enteros);
    cout << endl;
    cout<<"Descendente: ";
    descendente<int>(numero_enteros);
    cout << endl;
    cout << endl;
    cout << "El arreglo float ordenado: " << endl;
    cout<<"Ascendente: ";
    ascendente<float>(numeros_float);
    cout << endl;
    cout<<"Descendente: ";
    descendente<float>(numeros_float);
    return 0;
}
