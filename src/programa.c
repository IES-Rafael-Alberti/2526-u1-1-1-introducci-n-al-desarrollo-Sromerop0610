#include <stdio.h>

int main() {
    char nombre[50];
    int anio, edad;

    // Solicitar el nombre
    printf("¿Cuál es tu nombre? ");
    scanf("%49[^\n]", nombre); // Lee hasta 49 caracteres o hasta un salto de línea

    // Solicitar el año de nacimiento
    printf("¿En qué año naciste? ");
    scanf("%d", &anio);

    // Calcular la edad
    edad = 2025 - anio;

    // Mostrar el mensaje
    printf("Hola %s, tienes %d años. Este programa está hecho en el lenguaje de programación: C.\n", nombre, edad);

    return 0;
}
