// Sesión 2B - Ejercicio propuesto 3: Encuesta de una cafetería
//
// Se lee cuántas personas serán encuestadas y luego se pregunta a cada una
// qué bebida prefiere:
//     Mango Frappuccino          -> M o m
//     Fresa Creme Frappuccino    -> F o f
//     Vainilla Creme Frappuccino -> V o v
// Al final se muestran las preferencias en porcentajes.
//
// Hay DOS bucles:
//   - un for que recorre a los encuestados (cantidad conocida)
//   - un while que repite la pregunta si la letra ingresada no es válida

#include <iostream>
#include <iomanip>   // para setprecision
#include <cctype>    // para toupper
#include <string>
using namespace std;

int main() {
    int cantidad;
    char respuesta;

    // Contadores de cada bebida
    int mango = 0;
    int fresa = 0;
    int vainilla = 0;

    cout << "Cantidad de encuestados: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {

        cout << "¿Qué bebida prefiere?" << endl;
        cout << "Mango Frappuccino (M/m)" << endl;
        cout << "Fresa Creme Frappuccino (F/f)" << endl;
        cout << "Vainilla Creme Frappuccino (V/v)" << endl;
        cin >> respuesta;

        // toupper convierte a mayúscula, así 'm' y 'M' se tratan igual.
        respuesta = (char)toupper(respuesta);

        // Mientras la letra NO sea una de las tres válidas, se vuelve a pedir.
        while (respuesta != 'M' && respuesta != 'F' && respuesta != 'V') {
            cout << "Opción no válida. Ingrese M, F o V: ";
            cin >> respuesta;
            respuesta = (char)toupper(respuesta);
        }

        // Ya es válida: se suma al contador que corresponde.
        if (respuesta == 'M') {
            mango++;
        } else if (respuesta == 'F') {
            fresa++;
        } else {
            vainilla++;
        }
    }

    cout << endl;

    // El porcentaje se calcula como: (parte * 100) / total.
    // Se multiplica por 100.0 (con decimal) para que la división NO sea
    // entera. Si se escribiera 100, C++ dividiría enteros y perdería los
    // decimales: 1 de 4 daría 25, pero 1 de 3 daría 33 en vez de 33.3.
    cout << fixed << setprecision(0);
    cout << (mango * 100.0 / cantidad)    << " % prefieren Mango Frappuccino." << endl;
    cout << (fresa * 100.0 / cantidad)    << " % prefieren Fresa Creme Frappuccino." << endl;
    cout << (vainilla * 100.0 / cantidad) << " % prefieren Vainilla Creme Frappuccino." << endl;

    return 0;
}
