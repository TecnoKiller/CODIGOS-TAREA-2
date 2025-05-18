/*
Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros numeros naturales.
*/

#include <stdio.h>

int main() 
{
    int N;
    unsigned long long producto = 1; // Usamos unsigned long long para manejar números grandes

    printf("Ingrese un numero natural N: ");
    scanf("%d", &N);

    if (N < 0) 
    {
        printf("El producto no se puede calcular para numeros negativos.\n");
    } 
    else 
    {
        for (int i = 1; i <= N; i++) 
        {
            producto *= i;
        }

        printf("El producto de los primeros %d numeros naturales es: %llu\n", N, producto);
    }

    return 0;
}
