/*
Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambien se sabe que si el numero de dıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.
*/

#include <stdio.h>

int main() 
{
    float distanciaIda, distanciaTotal, precioPorKm = 0.23;
    int diasEstancia;
    float precioNormal, precioFinal;

    printf("Ingrese la distancia de ida en km: ");
    scanf("%f", &distanciaIda);

    printf("Ingrese el número de días de estancia: ");
    scanf("%d", &diasEstancia);

    distanciaTotal = distanciaIda * 2;

    precioNormal = distanciaTotal * precioPorKm;

    if (diasEstancia > 7 && distanciaTotal > 800) 
    {
        precioFinal = precioNormal * 0.70; 
    } 
    else 
    {
        precioFinal = precioNormal;
    }

    printf("El precio final del ticket es: %.2f\n", precioFinal);

    return 0;
}
