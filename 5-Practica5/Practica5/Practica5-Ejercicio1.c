#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la forma: 
    “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante. */

    int i, array[5];

    array[0]=1;
    array[1]=2;
    array[2]=3;
    array[3]=4;
    array[4]=5;

    printf("En el orden ingresado \n");
    for (i=0; i<5; i++)
    {
        printf("%cndice: %i, Valor: %i \n", 214, i, array[i]);
    }
    
    printf("\n");

    printf("De atr%cs hacia adelante \n", 160);
    for (i=4; i>=0; i--)
    {
        printf("%cndice: %i, Valor: %i \n", 214, i, array[i]);
    }

    system("Pause");

}