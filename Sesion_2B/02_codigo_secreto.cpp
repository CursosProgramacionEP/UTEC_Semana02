// Sesión 2B - Actividad 2: Código secreto
// Lee enteros de forma indefinida y se detiene cuando los tres últimos valores
// ingresados son 0 - 0 - 7.
// Las variables funcionan como una ventana de tres posiciones que se desplaza
// con cada nueva lectura.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int primero = 1, segundo = 1, tercero = 1;
    cout << "Ingrese los enteros" << endl;

    while (!(primero == 0 && segundo == 0 && tercero == 7)) {
        primero = segundo;
        segundo = tercero;
        cin >> tercero;
    }

    return 0;
}
