#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 14. Diseñar e implementar un programa que solicite a su usuario un valor no negativo n y 
     visualice la siguiente salida: 
        1 2 3 4 5 6 7 8 9 10 n
        1 2 3 4 5 6 7 8 9 
        1 2 3 4 5 6 7 8 
        1 2 3 4 5 6 7 
        1 2 3 4 5 6 
        1 2 3 4 5
        1 2 3 4
        1 2 3
        1 2
        1
    */

    int i, j, n;

    printf("ingrese un numero mayor a 0: \n");
    scanf("%i", &n);

    while (n<=0)
    {
     printf("el numero ingresado no es valido: \n");   
     printf("ingrese un numero: \n");
     scanf("%i", &n);
    }
    
    printf(" \n");

    for(i=n; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%i ", j);
        }
        printf(" \n");
    }
    system("pause");
}