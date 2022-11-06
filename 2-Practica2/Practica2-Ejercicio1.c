#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{

/* 1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. */

float a, b;

printf("ingrese ambos numeros: \n");
scanf("%f %f", &a, &b);

{if (a>b)
 {
    printf("%f es mayor que %f \n", a, b);
 }
    else
    {   
        printf("%f es mayor que %f \n", b, a);
    }
}


system("pause");

}
