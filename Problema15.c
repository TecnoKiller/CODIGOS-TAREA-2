/*
Escribir un diagrama de flujo tal que dado como entrada un arreglo unidi-
mensional de enteros, determinar cu ́antos de ellos son positivos, negativos o nulos.
*/

#include <stdio.h>

int main() 
{
    int N;
    int positivos = 0, negativos = 0, nulos = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int arreglo[N];

    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);

        if (arreglo[i] > 0) 
        {
            positivos++;
        } 
        else if (arreglo[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("\nCantidad de numeros positivos: %d\n", positivos);
    printf("Cantidad de numeros negativos: %d\n", negativos);
    printf("Cantidad de numeros nulos (ceros): %d\n", nulos);

    return 0;
}
