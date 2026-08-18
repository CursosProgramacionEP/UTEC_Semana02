// Sesión 2B - Actividad 1: Triángulos en consola
// Lee un entero positivo n e imprime un triángulo de asteriscos alineado a la izquierda.
// Estructura de control: bucles for anidados.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
