#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    /*1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras).*/

    int i;
    char cadena1[]="";
    char cadena2[] ="";
    char cadena3[]="";

    printf("Ingrese los caracteres de la cadena 1:\n");
    scanf("%s", &cadena1);
    printf("Ingrese los caracteres de la cadena 2:\n");
    scanf("%s", &cadena2);
    printf("Ingrese los caracteres de la cadena 3:\n");
    scanf("%s", &cadena3);

    printf("Longitud del texto del array cadena1: %d\n", strlen(cadena1)); 
    printf("Longitud del texto del array cadena2: %d\n", strlen(cadena2));
    printf("Longitud del texto del array cadena3: %d\n", strlen(cadena3));
}