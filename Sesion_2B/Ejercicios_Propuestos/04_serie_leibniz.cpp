// Sesión 2B - Ejercicio propuesto 4: Serie de Leibniz
//
// Fórmula descubierta por Gottfried Wilhelm Leibniz en el siglo XVII:
//
//     pi/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...
//
// Los denominadores son los números impares: 1, 3, 5, 7, 9...
// y los términos se van sumando y restando alternadamente.
//
// El programa pide cuántos términos usar y aproxima pi.
// Nota: la suma da pi/4, así que al final hay que multiplicar por 4.

#include <iostream>
#include <iomanip>   // para setprecision
#include <string>
using namespace std;

int main() {
    int terminos;

    double suma = 0.0;      // acumula la serie (dará pi/4)
    double signo = 1.0;     // el primer término es positivo
    double denominador = 1.0;

    cout << "¿Cuántos términos desea usar? ";
    cin >> terminos;

    for (int i = 1; i <= terminos; i++) {
        // Se suma el término actual con su signo: + 1/1, - 1/3, + 1/5...
        suma = suma + signo / denominador;

        signo = -signo;                    // el siguiente término va al revés
        denominador = denominador + 2.0;   // 1, 3, 5, 7... de dos en dos
    }

    double pi = suma * 4.0;

    // fixed + setprecision(10) muestra 10 decimales, para poder comparar
    // cuántos dígitos coinciden con el valor real de pi.
    cout << fixed << setprecision(10);
    cout << "Aproximación de pi con " << terminos << " términos: " << pi << endl;
    cout << "Valor real de pi:                    3.1415926536" << endl;

    return 0;
}
