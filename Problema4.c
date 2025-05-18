/*
Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de interes mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendra al finalizar el mes.
*/

#include <stdio.h>

int main() 
{
    float capital, tasaInteres, montoFinal;

    // Entrada de datos
    printf("Ingrese el capital invertido: ");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interés mensual (en porcentaje, por ejemplo 3 para 3%%): ");
    scanf("%f", &tasaInteres);

    // Convertir porcentaje a decimal
    tasaInteres = tasaInteres / 100;

    // Cálculo del monto final
    montoFinal = capital * (1 + tasaInteres);

    // Salida de resultado
    printf("El monto total al final del mes es: %.2f\n", montoFinal);

    return 0;
}
