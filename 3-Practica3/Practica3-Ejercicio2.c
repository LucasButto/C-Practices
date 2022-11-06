#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 2. Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos. */
    int i;

    for(i=1; i<=10; i=i+2)
    {
        printf("%d \n",i);
    }
    system("pause");
}