#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 5. Generar un bucle infinito. */
    int i;
    for(i=1; i<=100; i--)
    {
        printf("%d",i);
        printf(" - ");
    }
    system("pause");
}