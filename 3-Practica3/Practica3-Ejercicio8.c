#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número. */
    
    int i, num, tabla;
    
    printf("Ingrese el numero que quiera saber su tabla \n");
    scanf("%i", &num);
    printf(" \n");

    for(i=0; i<=10; i++)
    {
        tabla=num*i;
        printf("%i * %i = %i \n", num, i, tabla);
    }

    system("pause");
}