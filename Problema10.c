/*
Construya un diagrama de flujo que lea 100 numeros naturales y cuente
cuantos de ellos son positivos, negativos o nulos.
*/

#include <stdio.h>

int main() 
{
    int numero;
    int positivos = 0;
    int negativos = 0;
    int nulos = 0;

    printf("Ingrese 100 numeros (pueden ser positivos, negativos o cero):\n");

    for (int i = 0; i < 100; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);

        if (numero > 0) 
        {
            positivos++;
        } 
        else if (numero < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("\nResultados:\n");
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Nulos (ceros): %d\n", nulos);

    return 0;
}
