#include <stdio.h>

int main() {
    char nombre[50];
    int anio, edad;

    // Solicitar el nombre
    printf("�Cu�l es tu nombre? ");
    scanf("%49[^\n]", nombre); // Lee hasta 49 caracteres o hasta un salto de l�nea

    // Solicitar el a�o de nacimiento
    printf("�En qu� a�o naciste? ");
    scanf("%d", &anio);

    // Calcular la edad
    edad = 2025 - anio;

    // Mostrar el mensaje
    printf("Hola %s, tienes %d a�os. Este programa est� hecho en el lenguaje de programaci�n: C.\n", nombre, edad);

    return 0;
}
