#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
    10 números en pantalla mediante un solo array.
    */

    float  total=0, promedio;
    int i, num;
    float array1[5], array2[5], array3[10];

    for(i=0; i<5; i++)
    {
        printf("Ingrese el valor del array1 en la posici%cn %i \n", 162, i+1);
        scanf("%f", &array1[i]);

        array3[i]=array1[i];
    }

    printf("\n");
    
    for(i=0; i<5; i++)
    {
        printf("Ingrese el valor del array2 en la posici%cn %i \n", 162, i+1);
        scanf("%f", &array2[i]);

        array3[i+5]=array2[i];
    }

    for(i=0; i<10; i++)
    {
        printf("%0.2f ", array3[i]);
    }

    printf("\n");

    system("pause");

}