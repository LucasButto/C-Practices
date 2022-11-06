#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida: 
        @ 
        @ @ 
        @
        @ @
        @
        @ @
        @
        @ @
        @
        @ @
    */

    int i;

    for(i=1; i<=5; i++)
    {
        printf("%c \n", 64);
        printf("%c %c \n", 64, 64);
    }
    system("pause");
}