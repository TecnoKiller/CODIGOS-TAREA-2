/*
Hacer un diagrama de flujo que calcule la suma de los numeros pares
comprendidos entre el 10 y 50.
*/

#include <stdio.h>

int main() 
{
    int suma = 0;

    // Recorremos solo los pares desde 10 hasta 50
    for (int i = 10; i <= 50; i += 2) 
    {
        suma += i;
    }

    printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);

    return 0;
}
