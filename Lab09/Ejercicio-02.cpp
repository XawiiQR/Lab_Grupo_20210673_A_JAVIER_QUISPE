#include<iostream>
#include<list>
#include<cmath>
using namespace std;
template <class T>
void operacionesbasicas(T,T);
int main() {
    while (true) {
        string opcion;
        cout << "Eliga el tipo de numeros para las operaciones:"<<endl;
        cout<<"1.Numeros enteros"<<endl;
        cout<<"2.Numeros decimales"<<endl;
		cin >> opcion;
        if (opcion == "1") {
            int x, y;
            cout << "Primer numero entero: ";
            cin >> x;
            cout << "Segundo numero entero: ";
            cin >> y;
            operacionesbasicas<int>(x, y);
            break;
        }
        else if (opcion == "2") {
            float x, y;
            cout << "Primer numero decimal: ";
            cin >> x;
            cout << "Segundo numero decimal: ";
            cin >> y;
            operacionesbasicas<float>(x, y);
            break;
        }
        else {
            cout << "Valor incorrecto." << endl;
        }
    }
    return 0;
}
template <class T>
void operacionesbasicas(T num1, T num2) {
    cout << "\tLa suma es: " << num1 + num2 << endl;
    cout << "\tLa resta es: " << num1 - num2 << endl;
    cout << "\tLa multiplicacion es: " << num1 * num2 << endl;
    cout << "\tLa division es: " << num1 / num2 << endl;
}
