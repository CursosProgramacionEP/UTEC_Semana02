# Diagramas de flujo - Ejercicios propuestos de la Sesion 2A

Simbolos usados, los mismos de la Actividad 1 de la diapositiva:

| Forma | Significado |
| :--- | :--- |
| Ovalo | Inicio y Fin |
| Romboide | Entrada o salida de datos |
| Rectangulo | Proceso o asignacion |
| Rombo | Decision, con salidas V (verdadero) y F (falso) |

---

## Ejercicio 1 - Hasta cero

```mermaid
flowchart TD
    A(["Inicio"]) --> B["leidos = 0<br/>pares = 0<br/>impares = 0"]
    B --> C[/"Leer numero"/]
    C --> D{"numero != 0"}
    D -- F --> J[/"Mostrar leidos,<br/>pares e impares"/]
    D -- V --> E["leidos = leidos + 1"]
    E --> F{"numero % 2 = 0"}
    F -- V --> G["pares = pares + 1"]
    F -- F --> H["impares = impares + 1"]
    G --> I[/"Leer numero"/]
    H --> I
    I --> D
    J --> K(["Fin"])
```

La flecha que vuelve de "Leer numero" hacia el rombo es la que forma el bucle.
El cero no se cuenta porque la decision se evalua antes de sumar al contador.

---

## Ejercicio 2 - Aproximando pi

```mermaid
flowchart TD
    A(["Inicio"]) --> B["pi = 3<br/>signo = 1<br/>k = 2"]
    B --> C[/"Mostrar aproximacion 1: pi"/]
    C --> D["i = 2"]
    D --> E{"i <= 60"}
    E -- F --> J(["Fin"])
    E -- V --> F["pi = pi + signo * 4 / (k * (k+1) * (k+2))"]
    F --> G["signo = -signo<br/>k = k + 2"]
    G --> H[/"Mostrar aproximacion i: pi"/]
    H --> I["i = i + 1"]
    I --> E
```

Es un bucle de cantidad conocida, 60 vueltas, por eso se implementa con for.
La variable signo alterna entre +1 y -1 para que los terminos se sumen y resten.

---

## Ejercicio 3 - Casillas de ajedrez

```mermaid
flowchart TD
    A(["Inicio"]) --> B[/"Leer columna y fila"/]
    B --> C{"columna es mayuscula"}
    C -- V --> D["Convertir columna a minuscula"]
    C -- F --> E{"columna entre a y h<br/>y fila entre 1 y 8"}
    D --> E
    E -- F --> F[/"Mostrar: la casilla no existe"/]
    F --> K(["Fin"])
    E -- V --> G["numeroColumna = columna - 'a' + 1"]
    G --> H{"(numeroColumna + fila) % 2 = 0"}
    H -- V --> I[/"Mostrar: la casilla es negra"/]
    H -- F --> J[/"Mostrar: la casilla es blanca"/]
    I --> K
    J --> K
```

Este ejercicio no tiene bucles: es una secuencia de decisiones.
La ultima, la de la paridad, es la que resuelve el problema.
