#include<iostream>
#include<list>
#include<cmath>
using namespace std;
template <class aea>
string correodealumno(char,aea);
int main() {
    for (int i = 0; i < 5; i++) {
        cout << "****************Alumno "<<i+1<<"****************" << endl;
        cout<<endl;
        char nombre; string apellido;
        cout << "Ingrese la primera letra de su nombre: ";
        cin >> nombre;
        cout << "Ingrese el primer apellido: ";
        cin >> apellido;
        cout << "Su correo seria: " << correodealumno<string>(nombre,apellido) << endl;
        cout<<endl;
    }
    return 0;
}

template <class aea>
string correodealumno(char letra, aea apellido) {
    string correo = "@unsa.edu.pe";
    correo = letra + apellido + correo;
    return correo;
}
