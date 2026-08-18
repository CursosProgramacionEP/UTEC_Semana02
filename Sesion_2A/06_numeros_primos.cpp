// Sesión 2A - Actividad 3: Números primos
// Indica si un número entero mayor a 1 es primo o no.
// Busca el menor divisor m de n: si ese divisor es el propio n, entonces n es primo.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, m = 2;
    cout << "Ingrese un entero mayor a 1: ";
    cin >> n;

    while (n % m) {
        m++;
    }

    if (n == m) {
        cout << n << " es PRIMO";
    } else {
        cout << n << " no es primo";
    }

    cout << endl;

    return 0;
}
