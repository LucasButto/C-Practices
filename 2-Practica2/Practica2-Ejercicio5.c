#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    /* 5- Escriba un programa que pida ingresar un número y a continuación escriba en la
 consola si el mismo es par o impar.*/

 int a;
  printf("Escribe un numero:\n");
  scanf("%i", &a);
  
    {if (a==0)
        {
        printf("0 no es par ni impar \n");
        }
        else
        {
         if (a % 2 == 0) 
            {
            printf("%i Es par \n", a);
            }
            else 
            {
                {
                printf("%i Es impar \n", a);
                }
            }
        }
    }

 system("pause");

}