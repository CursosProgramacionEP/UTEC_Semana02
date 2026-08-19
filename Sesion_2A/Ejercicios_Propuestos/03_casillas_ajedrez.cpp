
// ENUNCIADO
//   Se ingresa el nombre de una casilla (columna de la 'a' a la 'h' y fila
//   del 1 al 8) y el programa indica de qué color es.
//
// IDEA CENTRAL: LA PARIDAD
//   Se numeran las columnas: a=1, b=2, ... h=8. Luego se suma columna + fila.
//     suma PAR    -> casilla NEGRA
//     suma IMPAR  -> casilla BLANCA
//
//   ¿Por qué funciona? Porque al moverse UNA casilla, hacia el costado o
//   hacia arriba, uno de los dos números cambia en 1. Eso hace que la suma
//   pase de par a impar o al revés... y el color del tablero también cambia.
//   Como los dos se alternan al mismo ritmo, quedan sincronizados.
//
//   Comprobación con dos casillas conocidas:
//     a1 -> 1 + 1 = 2  (par)    y a1 es NEGRA en un tablero real
//     e4 -> 5 + 4 = 9  (impar)  y e4 es BLANCA, como dice la diapositiva


#include <iostream>
#include <string>
#include <cctype>   // para tolower
using namespace std;

int main() {
    char columna;   // la letra: se guarda en un char, no en un int
    int fila;       // el número del 1 al 8

    cout << "Ingrese la columna (a-h): ";
    cin >> columna;
    cout << "Ingrese la fila (1-8): ";
    cin >> fila;

    // tolower() convierte una letra a minúscula. Si el carácter ya está en
    // minúscula, o ni siquiera es una letra, lo devuelve sin cambios.
    // El (char) es necesario porque tolower devuelve un int; sin él, el
    // compilador avisa de una conversión que pierde precisión.
    //columna = (char)tolower(columna);

    // Se rechaza todo lo que no sea una casilla real del tablero.
    if (columna < 'a' || columna > 'h' || fila < 1 || fila > 8) {
        cout << "Esa casilla no existe en el tablero." << endl;
        return 0;
    }

    // Restar 'a' da la distancia desde el inicio del abecedario:
    //     'a' - 'a' = 0     'b' - 'a' = 1     'e' - 'a' = 4     'h' - 'a' = 7
    // Se suma 1 porque queremos que la columna 'a' sea la número 1, no la 0:
    //     'a' -> 1          'b' -> 2          'e' -> 5          'h' -> 8
    int numeroColumna = columna - 'a' + 1;

    // El operador % da el residuo. Si al dividir la suma entre 2 el residuo
    // es 0, la suma es par.
    if ((numeroColumna + fila) % 2 == 0) {
        cout << "La casilla es negra." << endl;
    } else {
        cout << "La casilla es blanca." << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------
// EJEMPLOS DE EJECUCIÓN (probados)
//   e + 4 -> blanca      (5+4=9, impar)   <- el ejemplo de la diapositiva
//   a + 1 -> negra       (1+1=2, par)
//   h + 8 -> negra       (8+8=16, par)
//   a + 8 -> blanca      (1+8=9, impar)
//   E + 4 -> blanca      (acepta mayúsculas)
//   j + 3 -> "Esa casilla no existe en el tablero."
// ---------------------------------------------------------------------
