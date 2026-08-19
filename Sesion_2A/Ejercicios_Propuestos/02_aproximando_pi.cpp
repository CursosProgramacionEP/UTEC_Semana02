// Sesión 2A - Ejercicio propuesto 2: Aproximando pi
//
// La serie infinita es:
//   pi = 3 + 4/(2*3*4) - 4/(4*5*6) + 4/(6*7*8) - 4/(8*9*10) + ...
//
// Se muestran 60 aproximaciones. La primera usa solo el primer término (el 3)
// y cada aproximación siguiente agrega un término más de la serie.
//
// Observando la lista se ve en qué aproximación el valor deja de cambiar.

#include <iostream>
#include <iomanip>   // para setprecision: mostrar más decimales
#include <string>
using namespace std;

int main() {
    double pi = 3.0;      // acumula la suma; empieza con el primer término
    double signo = 1.0;   // alterna entre +1 y -1 en cada término
    double k = 2.0;       // primer factor del denominador: 2, luego 4, 6, 8...

    // Esta línea controla CÓMO se muestran los decimales en pantalla.
    //
    //   fixed            -> usa notación normal (3.1415926536) y nunca
    //                       científica (3.14159e+00). Además hace que
    //                       setprecision cuente los decimales que van
    //                       DESPUÉS del punto.
    //   setprecision(10) -> mostrar 10 decimales.
    //
    // Sin ella, cout muestra 6 dígitos EN TOTAL, contando los de antes del
    // punto: π saldría como 3.14159 y todas las aproximaciones se verían
    // casi iguales, así que no se notaría en cuál se estabiliza el valor.
    //
    // Basta escribirla una vez: afecta a todos los cout que vengan después.
    // Se puede comentar esta línea y volver a ejecutar para comparar.
    cout << fixed << setprecision(10);

    cout << "Aproximacion 1: " << pi << endl;

    // Ya se mostró la primera, faltan 59.
    for (int i = 2; i <= 60; i++) {
        // Término actual: 4 / (k * (k+1) * (k+2)), con su signo.
        pi = pi + signo * 4.0 / (k * (k + 1) * (k + 2));

        signo = -signo;   // el siguiente término lleva el signo contrario
        k = k + 2;        // los denominadores avanzan de dos en dos

        cout << "Aproximacion " << i << ": " << pi << endl;
    }

    return 0;
}
