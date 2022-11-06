#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
  2. Crear una función llamada “signo”, que reciba un número real, y devuelva un número
    entero con el valor: -1 si el número es negativo, 1 si es positivo o 0 si es cero.
*/

int signo(int num);

void main()
{
    int num, respuesta;

    printf("Ingrese un n%cmero\n", 163);
    scanf("%i", &num);
    
    respuesta = signo(num);

    printf("El valor retornado es %i", respuesta);
}

//función cubo

int signo(int num)
{
    int respuesta;

    if (num<0)
    {
        respuesta = -1;
    }
    else
    {
        if (num>0)
        {
            respuesta = 1;
        }
        else
        {
            respuesta = 0;
        }
    }    
    return respuesta;
}
