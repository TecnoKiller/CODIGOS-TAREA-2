/*Construir un diagrama de flujo tal que dado el radio de un cırculo, calcule
e imprima el area y la circunferencia. El area del cırculo se calcula como:
Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia = 2 ∗ π ∗ radio.*/ 

#include <stdio.h>
#define PI 3.1416

int main() 
{
    float radio, area, circunferencia;

    // Entrada de datos
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    // Cálculos
    area = PI * radio * radio;
    circunferencia = 2 * PI * radio;

    // Salida de resultados
    printf("Área del círculo: %.2f\n", area);
    printf("Circunferencia del círculo: %.2f\n", circunferencia);

    return 0;
}
