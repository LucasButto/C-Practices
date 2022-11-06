#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10. */
    int i, suma;
    suma=0;

    for(i=1; i<=10; i=i+2)
    {
        suma=suma+i;
    }
    printf("la suma de los primeros 10 numeros impares es %i \n", suma);
    
    system("pause");
}