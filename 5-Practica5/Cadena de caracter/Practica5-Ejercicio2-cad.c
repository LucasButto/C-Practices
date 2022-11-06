#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    //2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

    char cadena1[5000];
    char cadena2[5000];

    printf("Ingrese el 1er nombre:\n");
    scanf("%s", &cadena1);
    printf("Ingrese el 2do nombre::\n");
    scanf("%s", &cadena2);

    if (strcmp(cadena1, cadena2)==0)
    {
        printf("Los nombres son iguales\n");
    }
    else
        if (strcmp(cadena1, cadena2)==-1)
        {
            printf("El nombre %s precede alfabeticamente a %s\n",cadena1,cadena2);
        }
        else
            printf("El nombre %s precede alfabeticamente a %s\n",cadena2,cadena1);
    
    
    

}