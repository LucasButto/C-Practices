#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo. */

float a;

printf("ingrese el numero: \n");
scanf("%f", &a);

{if (a>0)
 {
    printf("%f es positivo \n", a);
 }
    else
    {   
        if (a<0)
        { 
            printf("%f es negativo \n",a);
        }       
            else
            { 
               printf("%f es nulo \n", a);
            }
    }
}

system("pause");


}