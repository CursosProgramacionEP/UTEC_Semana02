// Sesión 2A - Actividad 3: Números primos
//
// DEFINICIÓN: un entero mayor que 1 es primo si sus únicos divisores
// positivos son 1 y él mismo. El 1 no es primo. El 2 es el único par primo.
//
// IDEA DEL ALGORITMO: en vez de contar divisores, busca el MENOR divisor de n
// empezando desde 2. Solo hay dos desenlaces posibles:
//   - encuentra un divisor intermedio  -> n es compuesto
//   - no encuentra ninguno y llega a n -> n es primo

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;      // el número que se va a evaluar
    int m = 2;  // candidato a divisor; arranca en 2 porque el 1 divide a todos

    cout << "Ingrese un entero mayor a 1: ";
    cin >> n;

    // El operador % da el RESIDUO de dividir n entre m.
    // Si n % m vale 0, entonces m divide exacto a n: es un divisor.
    //
    // La condición del while es la expresión "n % m", sin ==, < ni >.
    // En C++ un número sirve como condición: 0 es falso, cualquier otro
    // valor es verdadero. Por eso esto equivale a escribir (n % m != 0)
    // y se lee: "mientras m NO divida a n, prueba con el siguiente".
    //
    // El bucle se detiene en el PRIMER divisor que encuentra.
    while (n % m) {
        m++;
    }

    // Al salir, m es el menor divisor de n mayor o igual a 2.
    // Si ese divisor resulta ser el propio n, es que ninguno entre 2 y n-1
    // lo dividía: n es primo. Compararlos evita usar una bandera booleana.
    //
    // Traza con n = 13 (primo):   13%2=1, 13%3=1, ... 13%12=1, 13%13=0 -> m=13 == n
    // Traza con n = 12 (compuesto): 12%2=0 en la primera vuelta        -> m=2  != n
    if (n == m) {
        cout << n << " es PRIMO";
    } else {
        cout << n << " no es primo";
    }

    cout << endl;

    // CUIDADO: el programa asume que n > 1, tal como pide el enunciado.
    // Con n = 1 el bucle NUNCA termina, porque 1 % m vale 1 para todo m >= 2
    // y la condición jamás se hace falsa.

    return 0;
}
