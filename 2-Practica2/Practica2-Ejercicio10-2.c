#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
 dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
 consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
 if y luego estructura switch). */
 int mes;

 printf("ingrese el numero del mes (1 al 12): \n");
 scanf("%i", &mes);

 switch (mes)
 {
     case 1:
     printf("enero \n");
     break;

     case 2:
     printf("febrero \n");
     break;

     case 3:
     printf("marzo \n");
     break;

     case 4:
     printf("abril \n");
     break;

     case 5:
     printf("mayo \n");
     break;

     case 6:
     printf("junio \n");
     break;

     case 7:
     printf("julio \n");
     break;

     case 8:
     printf("agosto \n");
     break;

     case 9:
     printf("septiembre \n");
     break;

     case 10:
     printf("octubre \n");
     break;

     case 11:
     printf("noviembre \n");
     break;

     case 12:
     printf("diciembre \n");
     break;

     default:
     printf("ingrese un numero valido del 1 al 12 \n");
     break;

 }
 
 system("pause");
}