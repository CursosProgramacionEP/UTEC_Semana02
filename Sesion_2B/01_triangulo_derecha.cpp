// Sesión 2B - Actividad 1: Triángulos en consola (segunda versión)
//
// Ahora el triángulo queda alineado a la DERECHA:
//
//     Ingrese n: 5
//         *
//        **
//       ***
//      ****
//     *****
//
// IDEA: cada línea lleva dos partes. Primero unos espacios en blanco y
// después los asteriscos. Lo que cambia respecto a la primera versión es
// que aquí hay que imprimir los espacios ANTES.
//
//   linea 1 de 5 -> 4 espacios + 1 asterisco
//   linea 2 de 5 -> 3 espacios + 2 asteriscos
//   linea 3 de 5 -> 2 espacios + 3 asteriscos
//
// Se ve el patrón: los espacios son (n - i) y los asteriscos son i.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Primer bucle interno: los espacios de la izquierda.
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Segundo bucle interno: los asteriscos.
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;   // se termina la línea y se pasa a la siguiente
    }

    return 0;
}
