#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
    - La facturación total
    - El promedio de facturación
    - La máxima facturación
    - La mínima facturación 
    */

    float facturacion[6];
    float mayor=0, menor=1000000000000000, total=0, promedio;
    int i;

    for(i=0; i<6; i++)
    {
        printf("Ingrese la %i%c facturaci%cn \n", i+1, 167, 162);
        scanf("%f", &facturacion[i]);

        total=total+facturacion[i];
        
       	if (facturacion[i]<menor)
		{
			menor = facturacion[i];
		}
		
		if (facturacion[i]>mayor) 
		{
			mayor = facturacion[i];
		}
    }

    promedio=total/6;

    printf("La facturaci%cn total es de %0.2f \n", 162, total);
    printf("El promedio de la facturaci%cn es de %0.2f \n", 162, promedio);
    printf("La facturaci%cn m%cs baja de %0.2f \n", 162, 160, menor);
    printf("La facturaci%cn m%cs alta  de %0.2f \n", 162, 160, mayor);

    system("pause");

}