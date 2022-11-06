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

    int vendedores=5, i, j;
    float ventas, resultado=0, suma=0;

    for (i=1; i<=vendedores; i++)
    {
        printf("| VENDEDOR %c | \n", 64+i);
        j=1;
        suma=0;
        resultado=0;
        do 
        {
            printf("Si no realiz%c m%cs ventas ingrese valor de la venta 0 \n", 162, 160);
		    printf("Ingrese el valor de la venta %i: \n", j);
		    scanf("%f", &ventas);

		    while ((ventas<0)) 
		    {
			    printf("ingrese un n%cmero v%clido \n", 163, 160);
			    printf("Ingrese el valor de la venta %i: \n", j);
		        scanf("%f",&ventas);
		    }

            j++;

            suma=suma+ventas;

	    } while (ventas!=0);

        resultado=suma*0.025;

        printf("\n");
        printf("El total de las ventas del vendedor %c es $%0.2f y le corresponde una comisi%cn de $%0.2f \n",  64+i, suma, 162, resultado);
        printf("\n");
    }

    system("pause");

}