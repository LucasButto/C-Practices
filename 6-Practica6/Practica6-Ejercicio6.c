#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
  6. Crear una función que reciba un caracter y un número, y escriba un “triángulo”
    formado por ese caracter, que tenga como anchura inicial la que se ha indicado. Por
    ejemplo, si la caracter es * y la anchura es 4, debería escribir:
    
    ****
    ***
    **
    *
*/

void triangulo (char caracter, int num);

void main()
{
   char caracter;
   int num;
   
   printf("Escriba un caracter: \n");
   scanf("%c", &caracter);

   do
    {
        printf("Escriba un n%cmero entero positivo: \n", 163);
        scanf("%i", &num);
    } while (num<1);
   
   triangulo(caracter, num);
   
   system("pause");
}

void triangulo (char caracter, int num)
{
   int i;
   printf("\n");
   while (num > 0)
   {
        for (i=0; i<num; i++)
        {
            printf("%c", caracter);
        }
        printf("\n");
        num--;
   }      
}

   
