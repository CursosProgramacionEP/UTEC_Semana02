// Sesión 2B - Ejercicio propuesto 1: Control de velocidad
//
// Indica si la velocidad de un auto excede el límite permitido.
// El límite depende del lugar y del tipo de vía, según la tabla del enunciado.
//
// Estructura de control: una selección múltiple (switch) para elegir el
// límite, y una selección simple (if) para comparar la velocidad.

#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;
    double velocidad;
    int limite = 0;

    cout << "Tipo de vía:" << endl;
    cout << "  ZONA URBANA" << endl;
    cout << "   1. Zona escolar" << endl;
    cout << "   2. Calles y jirones" << endl;
    cout << "   3. Avenidas" << endl;
    cout << "   4. Vías expresas" << endl;
    cout << "  CARRETERAS" << endl;
    cout << "   5. Caminos rurales" << endl;
    cout << "   6. Vehículos de carga" << endl;
    cout << "   7. Transporte público de pasajeros" << endl;
    cout << "   8. Automóviles, camionetas y motocicletas" << endl;
    cout << "Ingrese una opción (1-8): ";
    cin >> opcion;

    // Cada opción tiene su propio límite en km/h.
    switch (opcion) {
        case 1: limite = 30;  break;
        case 2: limite = 40;  break;
        case 3: limite = 60;  break;
        case 4: limite = 80;  break;
        case 5: limite = 60;  break;
        case 6: limite = 80;  break;
        case 7: limite = 90;  break;
        case 8: limite = 100; break;
        default:
            // Si no eligió una opción válida, no tiene sentido continuar.
            cout << "Opción no válida." << endl;
            return 0;
    }

    cout << "Ingrese la velocidad del auto (km/h): ";
    cin >> velocidad;

    cout << "Límite permitido: " << limite << " km/h" << endl;

    if (velocidad > limite) {
        cout << "EXCEDE el límite por " << (velocidad - limite) << " km/h." << endl;
    } else {
        cout << "Dentro del límite permitido." << endl;
    }

    return 0;
}
