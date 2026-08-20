# Diagramas de flujo - Ejercicios propuestos de la Sesion 2B

Simbolos usados, los mismos de la Actividad 1 de la diapositiva A:

| Forma | Significado |
| :--- | :--- |
| Ovalo | Inicio y Fin |
| Romboide | Entrada o salida de datos |
| Rectangulo | Proceso o asignacion |
| Rombo | Decision, con salidas V (verdadero) y F (falso) |

---

## Ejercicio 1 - Control de velocidad

```mermaid
flowchart TD
    A(["Inicio"]) --> B[/"Mostrar los tipos de via"/]
    B --> C[/"Leer opcion"/]
    C --> D{"opcion entre 1 y 8"}
    D -- F --> E[/"Mostrar: opcion no valida"/]
    E --> L(["Fin"])
    D -- V --> F["Asignar el limite segun<br/>la opcion elegida"]
    F --> G[/"Leer velocidad"/]
    G --> H{"velocidad > limite"}
    H -- V --> I[/"Mostrar: excede el limite"/]
    H -- F --> J[/"Mostrar: dentro del limite"/]
    I --> L
    J --> L
```

No lleva bucles: es una cadena de decisiones.
La asignacion del limite se resuelve con un switch de ocho casos.

---

## Ejercicio 2 - Escalones

```mermaid
flowchart TD
    A(["Inicio"]) --> B["escalon = 0<br/>turnos = 0<br/>toca_subir = verdadero"]
    B --> C{"escalon < 67"}
    C -- F --> I[/"Mostrar turnos"/]
    I --> J(["Fin"])
    C -- V --> D["turnos = turnos + 1"]
    D --> E{"toca_subir"}
    E -- V --> F["escalon = escalon + 3"]
    E -- F --> G["escalon = escalon - 2"]
    F --> H["invertir toca_subir"]
    G --> H
    H --> C
```

Es un bucle de cantidad desconocida: no se sabe cuantos turnos hacen falta,
solo cuando parar. Por eso se usa while y no for.
Resultado: 129 turnos para llegar al escalon 67.

---

## Ejercicio 3 - Encuesta de una cafeteria

```mermaid
flowchart TD
    A(["Inicio"]) --> B[/"Leer cantidad de encuestados"/]
    B --> C["mango = 0<br/>fresa = 0<br/>vainilla = 0"]
    C --> D["i = 1"]
    D --> E{"i <= cantidad"}
    E -- F --> K["Calcular porcentajes"]
    K --> L[/"Mostrar los tres porcentajes"/]
    L --> M(["Fin"])
    E -- V --> F[/"Mostrar bebidas y leer respuesta"/]
    F --> G["Convertir la respuesta a mayuscula"]
    G --> H{"respuesta es M, F o V"}
    H -- F --> N[/"Mostrar: opcion no valida"/]
    N --> F
    H -- V --> I["Sumar 1 al contador<br/>de esa bebida"]
    I --> J["i = i + 1"]
    J --> E
```

Hay dos bucles anidados: el for que recorre a los encuestados, y dentro,
el while que vuelve a preguntar mientras la letra no sea valida.

---

## Ejercicio 4 - Serie de Leibniz

```mermaid
flowchart TD
    A(["Inicio"]) --> B[/"Leer cantidad de terminos"/]
    B --> C["suma = 0<br/>signo = 1<br/>denominador = 1"]
    C --> D["i = 1"]
    D --> E{"i <= terminos"}
    E -- F --> I["pi = suma * 4"]
    I --> J[/"Mostrar pi"/]
    J --> K(["Fin"])
    E -- V --> F["suma = suma + signo / denominador"]
    F --> G["signo = -signo<br/>denominador = denominador + 2"]
    G --> H["i = i + 1"]
    H --> E
```

Mismo esqueleto que el ejercicio de pi de la Sesion 2A: un bucle for con un
acumulador, una variable de signo que se invierte y un denominador que avanza.
La diferencia es que aqui la suma da pi/4, por eso al final se multiplica por 4.
