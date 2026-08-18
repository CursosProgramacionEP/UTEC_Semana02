// Sesión 2B - Actividad 4: Circuito digital
// Muestra todas las combinaciones de entradas x0, x1, x2, x3 que activan el circuito.
// Salida del circuito: y = (!x0 && !x1) || (x2 && x3)
// Estructura de control: cuatro bucles for anidados.

#include <iostream>
#include <string>
using namespace std;

int main() {
    bool salida = false;

    cout << "El circuito se activa cuando \n";
    cout << "x0\tx1\tx2\tx3\n";

    for (int x0 = 0; x0 < 2; x0++) {
        for (int x1 = 0; x1 < 2; x1++) {
            for (int x2 = 0; x2 < 2; x2++) {
                for (int x3 = 0; x3 < 2; x3++) {
                    salida = (!x0 && !x1) || (x2 && x3);
                    if (salida) {
                        cout << x0 << "\t" << x1 << "\t" << x2 << "\t" << x3 << "\n";
                    }
                }
            }
        }
    }
    cout << endl;

    return 0;
}
