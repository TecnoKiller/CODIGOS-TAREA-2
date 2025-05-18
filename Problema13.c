/*
Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.
*/

#include <stdio.h>

int main() 
{
    int N;

    // Leer tamaño del arreglo
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    // Declarar el arreglo
    int arreglo[N];
    int suma = 0;

    // Leer los elementos del arreglo
    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i]; // Acumular suma directamente
    }

    // Imprimir el resultado
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
