#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*  4. Dado el vector {10, 20, 5, 15, 30, 20}
    - Informar el vector de la forma: "Indice: X, Valor: Y".
    - Totalizar el vector e informar el total.
    - Informar el contenido de las posiciones impares.
    - Informar las posiciones que contienen números impares.
    - Informar el mayor número.
    - Informar cuántas veces aparece el número 20. 
    */
   
    int vector[ ] = {10, 20, 5, 15, 30, 20};
    int suma=0, contador=0, i, mayor=vector[0];
    
    for (i=0; i<6; i++)
    {
        suma=suma+vector[i];
    }
    
    printf("La suma de los elementos del vector es %i \n", suma);
    
    printf("Contenido de las posiciones impares: \n");
    for (i=1; i<6; i+=2)
    {
        printf("%i - ", vector[i]);
    }
    printf("\n");

    printf("Posiciones que contienen n%cmeros impares: \n", 162);
    for (i=0; i<6; i++)
    {
        if (vector[i]%2!=0)
        {
            printf("%i ", i);
        }
    }
    printf("\n");

    printf("El mayor n%cmero del vector: \n", 163);
    for (i=0; i<6; i++)
    {
        if (vector[i]>=mayor)
        {
            mayor=vector[i];
        }
    }
    printf("%i \n", mayor);

    for (i=0; i<6; i++)
    {
        if (vector[i]==20)
        {
            contador=contador+1;
        }
    }
    printf("El n%cmero 20 aparece %i veces \n", 163, contador);
    
    system("pause");

}