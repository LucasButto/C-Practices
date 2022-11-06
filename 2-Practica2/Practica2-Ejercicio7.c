#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    /* 7- Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
 un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
 dicha situación.*/

 int a;
  printf("Escribe el valor de la venta:\n");
  scanf("%i", &a);
  
    {if (a<=0)
        {
        printf("No hubo venta \n");
        }
        else
        {
         if (a>=100000) 
            {
            a=(a-(a*15/100));
            printf("El valor de la venta fue de %i pesos \n", a);
            }
            else 
            {
                {
                a=(a-(a*10/100));   
                printf("El valor de la venta fue de %i pesos \n", a);
                }
            }
        }
    }

 system("pause");

}
