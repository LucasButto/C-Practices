#include <stdio.h>
#include <stdlib.h>

/*
    2) Escriba un programa que pida ingresar un número y a continuación escriba en la consola si el mismo es par o impar.
*/

void paroImpar ();

void main()
{
    int num = 0;

    printf("Ingrese un n%cmero\n", 163);
    scanf("%i", &num);

    paroImpar(num);
    
    system("pause");
}

void paroImpar(int num)
{
    int resto =0;
    resto = num % 2;
    if (resto  == 0)
    {
        printf("El n%cmero es par\n", 163);
    }
    else
    {
        printf("El n%cmero es impar\n", 163);
    }
}