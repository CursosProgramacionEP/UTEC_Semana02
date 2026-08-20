// Sesión 2B - Ejercicio propuesto 2: Escalones
//
// Una escalera tiene 67 escalones. El personaje sube así:
//   turno 1: sube 3
//   turno 2: baja 2
//   turno 3: sube 3
//   turno 4: baja 2 ... y así hasta tocar el último escalón.
//
// ¿Cuántos turnos necesita para llegar al escalón 67?
//
// IDEA: se simula turno por turno. Como no sabemos cuántos turnos harán
// falta, se usa un WHILE: se repite mientras no haya llegado.
// Una variable booleana recuerda si toca subir o bajar.

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int TOTAL = 67;   // const = valor que no cambia durante el programa

    int escalon = 0;        // dónde está parado
    int turnos = 0;         // cuántos turnos lleva
    bool toca_subir = true; // el primer turno sube

    while (escalon < TOTAL) {
        turnos++;

        if (toca_subir) {
            escalon = escalon + 3;
        } else {
            escalon = escalon - 2;
        }

        // Invierte el turno: si subió, ahora baja; si bajó, ahora sube.
        toca_subir = !toca_subir;
    }

    cout << "Escalones: " << TOTAL << endl;
    cout << "Turnos necesarios: " << turnos << endl;
    cout << "Escalón alcanzado: " << escalon << endl;

    return 0;
}
