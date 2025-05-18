/*
Haga un diagrama de flujo para obtener la tabla de multiplicar de un
numero entero N, comenzando desde el 1.
*/

#include <stdio.h>

int main() 
{
    int N, i;

    // Leer el número
    printf("Ingrese un número entero para generar su tabla de multiplicar: ");
    scanf("%d", &N);

    // Generar la tabla desde 1 hasta 10
    printf("Tabla de multiplicar del %d:\n", N);
    for (i = 1; i <= 10; i++) 
    {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}
