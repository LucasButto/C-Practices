#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*8- Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo */

float hora, sueldo; 
float valor;

valor=800;

printf("ingrese cuantas hora trabajo su empleado: \n");
scanf("%f", &hora);

sueldo=valor*hora;

printf("el sueldo de su empleado por las %f horas trabajadas es de %f pesos \n", hora, sueldo);

system("pause");

}