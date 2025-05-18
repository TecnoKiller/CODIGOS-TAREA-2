/*
Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.
*/

#include <stdio.h>

int main() 
{
    int N;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int arreglo[N];
    int suma = 0;

    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
        suma += arreglo[i]; 
    }

    
    printf("La suma de los elementos del arreglo es: %d\n", suma);

    return 0;
}
