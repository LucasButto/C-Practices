#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales. */

float a, b;

printf("ingrese ambos numeros: \n");
scanf("%f %f", &a, &b);

{if (a>b)
 {
    printf("%f es mayor que %f \n", a, b);
 }
    else
    {   
        if (b>a)
        { 
            printf("%f es mayor que %f \n", b, a);
        }       
            else
            { 
              printf("%f es igual que %f \n", a, b);
            }
    }
}

system("pause");


}