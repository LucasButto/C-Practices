#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9. */
    
    int i, j, tabla;

    for(i=1; i<=9; i++)
    {
        for(j=0; j<=10; j++)
        {
            tabla=i*j;
            printf("%i * %i = %i \n", i, j, tabla);
        }
    }
 system("pause");
}