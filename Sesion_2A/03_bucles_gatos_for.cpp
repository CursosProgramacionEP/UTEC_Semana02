// Sesión 2A - Actividad 2: Bucles y gatos (versión con for)
// Imprime n veces el texto "CS 6003 - Programación 2".

#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 1;
    cout << "Ingrese la cantidad de repeticiones: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "CS 6003 - Programación 2\n";
    }
    cout << endl;

    return 0;
}
