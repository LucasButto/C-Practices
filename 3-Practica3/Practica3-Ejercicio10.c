#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 10. Imprimir por consola 10 veces el carácter @, de manera que se visualice la siguiente salida:
        @ 
        @ 
        @
        @
        @
        @
        @
        @
        @
        @    
    */

    int i;

    for(i=1; i<=10; i++)
    {
        printf("%c \n", 64);
    }
    system("pause");
}