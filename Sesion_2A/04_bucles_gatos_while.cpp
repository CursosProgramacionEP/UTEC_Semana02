// Sesión 2A - Actividad 2: Bucles y gatos (versión con while)
// Imprime n veces el texto "CS 6003 - Programación 2".
// La condición del while usa n-- : el bucle termina cuando n vale 0.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 1;
    cout << "Ingrese la cantidad de repeticiones: ";
    cin >> n;

    while (n--) {
        cout << "CS 6003 - Programación 2\n";
    }
    cout << endl;

    return 0;
}
