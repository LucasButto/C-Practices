#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
 pantalla.*/

 float a, b, c;

 printf("ingrese los 3 numeros: \n");
 scanf("%f %f %f", &a, &b, &c);

 {if ((a>b) & (a>c))
 {
    printf("%f es el mayor entre los numeros ingresados \n", a);
 }
    else
    {   
        if ((b>a)& (b>c))
        { 
            printf("%f es el mayor entre los numeros ingresados \n", b);
        }       
            else
            { 
              printf("%f es el mayor entre los numeros ingresados \n", c);
            }
    }
 }

 system("pause");


}