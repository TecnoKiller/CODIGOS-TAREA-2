//Escriba un diagrama de flujo tal que dado como datos dos n ́umeros y calcular la suma, resta y multiplicaci ́on de dichos n ́umeros.
#include <stdio.h>

int main() {
    // Declaración de variables
    float num1, num2;
    float suma, resta, multiplicacion;

    // Entrada de datos
    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    // Cálculos
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Salida de resultados
    printf("Suma: %.2f\n", suma);
    printf("Resta: %.2f\n", resta);
    printf("Multiplicación: %.2f\n", multiplicacion);

    return 0;
}
