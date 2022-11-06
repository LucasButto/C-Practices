#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    9. Escriba un programa que lea 5 números por teclado, los copie a otro array
    multiplicados por 2 y muestre el segundo array.
    */

    int i;
    float array1[5], array2[5];

    for(i=0; i<5; i++)
    {
        printf("Ingrese el valor del array1 en la posici%cn %i \n", 162, i+1);
        scanf("%f", &array1[i]);

        array2[i]=array1[i]*2;
    }

    for(i=0; i<5; i++)
    {
        printf("%0.2f ", array2[i]);
    }

    printf("\n");

    system("pause");

}