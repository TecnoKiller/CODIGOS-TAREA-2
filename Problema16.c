/*
Construir un diagrama de flujo para almacenar en un arreglo unidimensional 
los 100 primeros numeros pares. Imprimir al final el arreglo.
*/

#include <stdio.h>

int main() 
{
    int pares[100];
    int num = 2;

    for (int i = 0; i < 100; i++) 
    {
        pares[i] = num;
        num += 2;
    }

    printf("Los 100 primeros numeros pares son:\n");
    for (int i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }

    printf("\n");

    return 0;
}
