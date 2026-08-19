// Sesión 2A - Ejercicio propuesto 1: Hasta cero
//
// Lee varios números enteros hasta que se introduzca el cero.
// Al terminar muestra cuántos números se leyeron, cuántos fueron pares
// y cuántos impares. El cero NO entra en el conteo.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    int leidos = 0;   // contador de números válidos (sin contar el cero)
    int pares = 0;
    int impares = 0;

    cout << "Ingrese números enteros (0 para terminar):" << endl;
    cin >> numero;

    // El cero es la marca de fin, por eso se lee ANTES de entrar al bucle:
    // si el usuario escribe 0 de una vez, no se cuenta nada.
    while (numero != 0) {
        leidos++;

        // Un número es par si al dividirlo entre 2 el residuo es cero.
        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        cin >> numero;  // se lee el siguiente antes de volver a evaluar
    }

    cout << "Cantidad de números leídos: " << leidos << endl;
    cout << "Cantidad de números pares: " << pares << endl;
    cout << "Cantidad de números impares: " << impares << endl;

    return 0;
}
