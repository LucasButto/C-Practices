#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 7. Diseñe un algoritmo que sume los 20 primeros números impares. */
    
    int i, suma;
    suma=0;

    for(i=1; i<=20; i++)
    {
        suma=suma+(2*i-1);
    }

    printf("la suma de los primeros 20 numeros impares es %i \n", suma);

    system("pause");
}