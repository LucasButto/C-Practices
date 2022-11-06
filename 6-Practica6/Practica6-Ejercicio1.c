#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
   1. Crear una función que calcule el cubo de un número real (float). El resultado deberá
    ser otro número real.
*/

void cubo();

void main()
{
    cubo();
}

//función cubo

void cubo()
{
    float num1, respuesta;

    printf("Ingrese el n%cmero: \n",163);
    scanf("%f", &num1);
    
    respuesta = pow(num1,3);

    printf("El cubo de %0.2f es %0.3f", num1, respuesta);
}
