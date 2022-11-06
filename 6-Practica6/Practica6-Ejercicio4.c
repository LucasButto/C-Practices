#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
  4. Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un
    número primo o 0 en caso contrario.
*/

int esPrimo(int num);

void main()
{
    int num, respuesta;

    do
    {
        printf("Escriba un n%cmero entero positivo: \n", 163);
        scanf("%i", &num);
    } while (num<1);
    
    respuesta=esPrimo(num);

    if (respuesta==1)
    {
        printf("El n%cmero es primo\n", 163, respuesta);
    }
    else
    {
        printf("El n%cmero no es primo\n", 163, respuesta);
    }
}

//función esPrimo

int esPrimo(int num)
{
    int respuesta, i, primo, contador;

    contador = 0;
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
           contador=contador+1;
        }
    }

    if (contador>2)
    {
        respuesta=0;
    }
    else
    {
        respuesta=1;
    }

    return respuesta;
}
