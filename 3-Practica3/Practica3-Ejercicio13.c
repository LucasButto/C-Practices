#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 13. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida: 
        @@@@@@@@@@ 
        @@@@@@@@@
        @@@@@@@@
        @@@@@@@
        @@@@@@
        @@@@@
        @@@@
        @@@
        @@
        @
    */

    int i, j;

    for(i=10; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c", 64);
        }
        printf(" \n");
    }
    system("pause");
}