#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*7- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo */

float valorh, hora, sueldo; 

printf("ingrese el valor de la hora: \n");
scanf("%f", &valorh);

printf("ingrese cuantas horas trabajo su empleado: \n");
scanf("%f", &hora);

sueldo=valorh*hora;

printf("el sueldo de su empleado por las %0.2f horas trabajadas es de %0.2f \n", hora, sueldo);

system("pause");

}