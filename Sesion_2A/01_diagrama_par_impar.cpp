// Sesión 2A - Actividad 1: Leyendo diagramas (primer diagrama)
// Determina si un número entero ingresado es par o impar.
// Estructura de control: selectiva if-else.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y;

    cout << "Ingrese un entero: ";
    cin >> x;
    y = x % 2;

    if (y == 0) {
        cout << "El número ingresado es PAR" << endl;
    } else {
        cout << "El número ingresado es IMPAR" << endl;
    }

    return 0;
}
