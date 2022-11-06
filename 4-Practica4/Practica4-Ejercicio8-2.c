#include <stdio.h>
#include <stdlib.h>


void main()
{
    /* 8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para calcular 
    la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y no se sabe cuántas 
    ventas realizó cada uno. Los datos vienen ordenados y agrupados por vendedor. Por cada vendedor se ingresan 
    cada uno de los importes de sus ventas. Para indicar fin de cada uno de ellos, se ingresa un valor de venta 
    igual a 0. Se solicita mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es 
    el 2,5% de la suma de sus ventas. */

    int vendedores=5, i, j=1;
    float ventas, resultado=0, suma=0;
    int vendedor;

    printf("Digite su codigo de vendedor: \n");
    printf("1- Vendedor A \n");
    printf("2- Vendedor B \n");
    printf("3- Vendedor C \n");
    printf("4- Vendedor D \n");
    printf("5- Vendedor E \n");
    scanf("%i", &vendedor)

    while (vendedor>5 || vendedor<1)
    {
        printf("ingrese un n%cmero v%clido \n", 163, 160);
		printf("Digite su codigo de vendedor: \n");
        printf("1- Vendedor A \n");
        printf("2- Vendedor B \n");
        printf("3- Vendedor C \n");
        printf("4- Vendedor D \n");
        printf("5- Vendedor E \n");
		scanf("%i",&vendedor);
    }
    
    
}