// Sesión 2A - Actividad 2: Bucles y gatos (versión con do-while)
// Imprime n veces el texto "CS 6003 - Programación 2".
// El cuerpo se ejecuta al menos una vez antes de evaluar --n.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 1;
    cout << "Ingrese la cantidad de repeticiones: ";
    cin >> n;

    do {
        cout << "CS 6003 - Programación 2\n";
    } while (--n);
    cout << endl;

    return 0;
}
