/*
En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1dolar ↢ 11.96pesos.
*/
#include <stdio.h>

int main() 
{
    float dolares, pesos;
    const float TIPO_CAMBIO = 11.96;

    printf("Ingrese la cantidad en dólares: ");
    scanf("%f", &dolares);

    pesos = dolares * TIPO_CAMBIO;

    printf("Equivalente en pesos: %.2f\n", pesos);

    return 0;
}
