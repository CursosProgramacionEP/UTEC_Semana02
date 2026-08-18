// Sesión 2A - Actividad 1: Leyendo diagramas (segundo diagrama)
// Analiza el discriminante de una ecuación cuadrática ax^2 + bx + c
// e indica la naturaleza de sus raíces.
// Estructura de control: selectiva múltiple if / else if / else.

#include <iostream>
#include <string>
using namespace std;

int main() {
    float a, b, c, delta;

    cout << "Ingrese a: ";
    cin >> a;
    cout << "Ingrese b: ";
    cin >> b;
    cout << "Ingrese c: ";
    cin >> c;

    delta = b*b - 4*a*c;

    if (delta == 0) {
        cout << "Las raíces reales dobles";
    } else if (delta > 0) {
        cout << "Las raíces son reales";
    } else {
        cout << "Las raíces son complejas";
    }

    return 0;
}
