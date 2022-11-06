#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*  3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola, 
    mostrar cuántas veces se repite el número 5. */

    int i, array[5], contador=0;

    for (i=0; i<5; i++)
    {
        printf("Ingrese el valor del arreglo en la posicion %i \n", i+1);
        scanf("%i", &array[i]);
        
        if (array[i]==5)
        {
            contador=contador+1;
        }
    } 

    printf("El n%cmero 5 se repite %i veces \n", 160, contador);

}