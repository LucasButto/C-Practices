#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, 
    mostrar la suma de sus componentes y el promedio. */

    int i, array[5], suma=0, promedio=0;

    array[0]=1;
    array[1]=2;
    array[2]=3;
    array[3]=4;
    array[4]=5;

    for (i=0; i<5; i++)
    {
        suma=suma+array[i];
    } 

    promedio=suma/5;

    printf("La suma de los n%cmeros del arrelgo es %i y su promedio es %i \n", 163, suma, promedio);
    
    system("pause");

}