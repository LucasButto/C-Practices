#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores positivos, 
    si el usuario ingresa un número negativo o nulo, pedir reingresar el número (repetir el ingreso de dicho 
    número mientras el número no sea correcto). Informar al usuario la suma de los 10 números ingresados. */

 float num, suma;
 int i;
 suma=0;
 
 printf("Ingrese los 10 n%cmeros a sumar: \n", 163);

 for(i=1; i<=10; i++)
    {
     printf("Ingrese el %i%c n%cmero a sumar \n", i, 167, 163);
     scanf("%f", &num);

     while (num<=0)
     {
     printf("El n%cmero ingresado no es v%clido.\n",163,160);
     printf("Ingrese el %i numero a sumar \n",i);
     scanf("%f", &num);
     }

     suma=suma+num;
    }
 
 printf("La suma de los n%cmeros ingresados es %0.2f \n", 163, suma);

 system("pause");

}