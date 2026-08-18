# UTEC_Semana02
Estructuras secuenciales en C++

---

## Diagramas de Flujo en Algoritmos

Un **diagrama de flujo** es una representación gráfica de un algoritmo. Cada figura geométrica tiene un significado específico y corresponde a una acción concreta en el código fuente.

### Figuras utilizadas y su representación en el código

| Figura | Nombre | Descripción | Equivalente en C++ |
|--------|--------|-------------|-------------------|
| **Óvalo / Elipse** | Inicio / Fin | Marca el comienzo o el fin del algoritmo. | `int main() { ... return 0; }` |
| **Rectángulo** | Proceso / Instrucción | Representa una operación o asignación de datos. | `int suma = a + b;` |
| **Rombo / Diamante** | Decisión | Indica una condición que produce dos caminos: Sí (verdadero) o No (falso). | `if (condicion) { ... } else { ... }` |
| **Paralelogramo** | Entrada / Salida | Representa la lectura de datos (entrada) o la muestra de resultados (salida). | `cin >> variable;` / `cout << variable;` |
| **Rectángulo con doble línea lateral** | Subproceso / Función | Llama a un proceso ya definido en otro lugar (función o módulo). | `resultado = miFuncion(a, b);` |
| **Flecha / Línea de flujo** | Flujo de control | Indica la dirección y el orden en que se ejecutan los pasos. | El orden secuencial del código de arriba hacia abajo. |

---

### Ejemplo de correspondencia diagrama → código

**Diagrama conceptual:**

```
[Inicio]
    ↓
[Leer a, b]          ← Paralelogramo (Entrada)
    ↓
[suma = a + b]       ← Rectángulo (Proceso)
    ↓
[¿suma > 10?]        ← Rombo (Decisión)
   /        \
 Sí          No
  ↓            ↓
[Mostrar      [Mostrar
 "Mayor"]      "Menor o igual"]
    ↓            ↓
        [Fin]
```

**Código C++ equivalente:**

```cpp
#include <iostream>
using namespace std;

int main() {
    // Entrada (Paralelogramo)
    int a, b;
    cin >> a >> b;

    // Proceso (Rectángulo)
    int suma = a + b;

    // Decisión (Rombo)
    if (suma > 10) {
        // Salida rama Sí (Paralelogramo)
        cout << "Mayor" << endl;
    } else {
        // Salida rama No (Paralelogramo)
        cout << "Menor o igual" << endl;
    }

    return 0; // Fin (Óvalo)
}
```

---

### Resumen rápido de figuras

```
╔══════════════════╦═════════════════════════════════════════╗
║ Figura           ║ Representa en el código                 ║
╠══════════════════╬═════════════════════════════════════════╣
║ Óvalo            ║ int main() / return 0 (inicio y fin)    ║
║ Rectángulo       ║ Asignaciones y operaciones              ║
║ Rombo            ║ if / else / switch (decisiones)         ║
║ Paralelogramo    ║ cin (entrada) / cout (salida)           ║
║ Rect. doble      ║ Llamada a función                       ║
║ Flecha           ║ Orden de ejecución del código           ║
╚══════════════════╩═════════════════════════════════════════╝
```
