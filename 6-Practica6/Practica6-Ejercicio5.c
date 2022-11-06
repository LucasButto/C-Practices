#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
  5. Crear una función que reciba un número cualquiera y que devuelva como resultado
    la suma de sus dígitos.
*/

int digitos(int num);

void main()
{
    int num, resultado;

    do
    {
        printf("Escriba un n%cmero entero positivo: \n", 163);
        scanf("%i", &num);
    } while (num<1);
    
    resultado=digitos(num);
    printf("La suma de las cifras del n%cmero %i es %i", 163, num, resultado);
}

//función digitos

int digitos(int num)
{
    int suma=0;
   
    if (num < 10)
    {
        return num;
    }
    else
    {
        while (num >= 10)
        {
            suma = suma + num % 10;
            num = num/10;
        }
        suma = suma + num;

        return suma;
    } 
}