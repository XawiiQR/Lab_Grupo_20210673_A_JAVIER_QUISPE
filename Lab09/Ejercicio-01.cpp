#include<iostream>
#include<list>
#include<cmath>
using namespace std;

template <class P>
P num_menor(P a, P b, P c) {
    P min=a;
    P alt[3] = { a, b, c };
    for (int i = 0; i < 3; i++) {
        if (alt[i] <= min)
            min = alt[i];
    }
        return min;
    }
template <class P>
P num_mayor(P x, P y, P z) {
    P max = x;
    P alt[3] = { x, y, z };
    for (int i = 0; i < 3; i++) {
        if (alt[i] >= max)
        max = alt[i];
    }
    return max;
}
int main() {
    cout << "Numero menor: " << num_menor<int>(23,12,11)<< " y el mayor es: " << num_mayor<int>(23, 12, 11) << ", de los numeros 23, 12, 11" << endl;
    cout << "Numero menor: " << num_menor<float>(19.65,11.34, 11.63) << " y el mayor es: " << num_mayor<float>(19.65,11.34, 11.63) << ", de los numeros 19.65, 11.34,11.63" << endl;
    cout << "Numero menor: " << num_menor<double>(8.1563,12.1562, 7.1526) << " y el mayor es: " <<num_mayor<double>(8.1563, 12.1562, 7.1526) << ", de los numeros8.1563, 12.1562,7.1526" << endl;
    return 0;
}
