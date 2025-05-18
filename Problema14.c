/*
construya un programa tal que dado como entrada un arreglo unidimensional 
de enteros y un numero entero, determine cuantas veces se encuentra
el numero dentro del arreglo.
*/

#include <stdio.h>

int main() 
{
    int N, numeroBuscado, contador = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &N);

    int arreglo[N];

    printf("Ingrese %d numeros enteros:\n", N);
    for (int i = 0; i < N; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("Ingrese el numero que desea buscar: ");
    scanf("%d", &numeroBuscado);

    for (int i = 0; i < N; i++) 
    {
        if (arreglo[i] == numeroBuscado) 
        {
            contador++;
        }
    }

    printf("El numero %d aparece %d veces en el arreglo.\n", numeroBuscado, contador);

    return 0;
}
