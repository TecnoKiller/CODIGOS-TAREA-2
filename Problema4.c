/*
Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de interes mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendra al finalizar el mes.
*/

#include <stdio.h>

int main() 
{
    float capital, tasaInteres, montoFinal;

    printf("Ingrese el capital invertido: ");
    scanf("%f", &capital);

    printf("Ingrese la tasa de interés mensual (en porcentaje, por ejemplo 3 para 3%%): ");
    scanf("%f", &tasaInteres);

    tasaInteres = tasaInteres / 100;

    montoFinal = capital * (1 + tasaInteres);

    printf("El monto total al final del mes es: %.2f\n", montoFinal);

    return 0;
}
