#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 6. Suma de los 10 primeros números múltiplos de tres. */
    
    int i, suma;
    suma=0;

    for(i=1; i<=10; i++)
    {
        suma=suma+(3*i);
    }

    printf("la suma de los primeros 10 multiplos de 3 es %i \n", suma);

    system("pause");
}