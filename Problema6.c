/*
Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.
*/

#include <stdio.h>

int main() 
{
    float sueldo, aumento, nuevoSueldo;

    // Entrada de datos
    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &sueldo);

    // Cálculo del aumento según el sueldo
    if (sueldo < 1000) 
    {
        aumento = sueldo * 0.15; // 15% de aumento
    } 
    else 
    {
        aumento = sueldo * 0.12; // 12% de aumento
    }

    // Calcular nuevo sueldo
    nuevoSueldo = sueldo + aumento;

    // Mostrar el resultado
    printf("El nuevo sueldo con el aumento es: %.2f\n", nuevoSueldo);

    return 0;
}
