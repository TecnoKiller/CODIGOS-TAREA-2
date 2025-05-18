/*
Construir un diagrama de flujo que pueda determinar, dados dos numeros enteros, si un numero es divisor del otro.
*/

#include <stdio.h>

int main() 
{
    int a, b;

    printf("Ingrese el primer número entero (A): ");
    scanf("%d", &a);

    printf("Ingrese el segundo número entero (B): ");
    scanf("%d", &b);

    if (b != 0 && a % b == 0) 
    {
        printf("B es divisor de A.\n");
    } 
    else if (a != 0 && b % a == 0) 
    {
        printf("A es divisor de B.\n");
    } 
    else 
    {
        printf("Ninguno es divisor del otro.\n");
    }

    return 0;
}
