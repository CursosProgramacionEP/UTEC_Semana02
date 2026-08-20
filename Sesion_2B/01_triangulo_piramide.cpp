// Sesión 2B - Actividad 1: Triángulos en consola (tercera versión)
//
// El triángulo ahora crece hacia los dos lados, como una pirámide:
//
//     Ingrese n: 5
//         *
//        ***
//       *****
//      *******
//     *********
//
// IDEA: igual que el anterior, espacios primero y asteriscos después,
// pero la cantidad de asteriscos cambia:
//
//   linea 1 -> 4 espacios + 1 asterisco
//   linea 2 -> 3 espacios + 3 asteriscos
//   linea 3 -> 2 espacios + 5 asteriscos
//   linea 4 -> 1 espacio  + 7 asteriscos
//
// Los asteriscos van 1, 3, 5, 7... o sea los impares. La fórmula que
// genera esa secuencia es (2 * i - 1):
//   i=1 -> 2*1-1 = 1     i=2 -> 2*2-1 = 3     i=3 -> 2*3-1 = 5

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero positivo: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Espacios de la izquierda: uno menos en cada línea.
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Asteriscos: 1, 3, 5, 7... dos más en cada línea.
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
