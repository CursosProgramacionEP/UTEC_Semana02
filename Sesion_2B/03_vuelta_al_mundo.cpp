// Sesión 2B - Actividad 3: La vuelta al mundo
// Actividad de análisis: ¿el bucle es infinito?
// Preguntas: ¿cuántas iteraciones se ejecutan y por qué?
// Pista: observe el tipo short int y su rango de valores.

#include <iostream>
#include <string>
using namespace std;

int main() {
    short int viajero = 1;

    while (viajero != 0) {
        ++viajero;
    }

    cout << viajero << endl;

    return 0;
}
