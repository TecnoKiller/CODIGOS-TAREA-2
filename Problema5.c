/*
En un negocio de productos electrodomesticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.
*/

#include <stdio.h>

int main() 
{
    float montoCompra, descuento = 0.0, totalPagar;

    // Entrada de datos
    printf("Ingrese el monto de la compra: ");
    scanf("%f", &montoCompra);

    // Verificación y cálculo del descuento
    if (montoCompra > 2500) 
    {
        descuento = montoCompra * 0.08; // 8% de descuento
    }

    // Cálculo del total a pagar
    totalPagar = montoCompra - descuento;

    // Salida
    printf("Descuento aplicado: %.2f\n", descuento);
    printf("Total a pagar: %.2f\n", totalPagar);

    return 0;
}
