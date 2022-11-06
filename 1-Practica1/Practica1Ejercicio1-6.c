#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     /*6- Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/
float valor1, valor2, suma, producto, resta; 

printf("ingrese los valores deseados: \n");
scanf("%f %f", &valor1, &valor2);

suma=valor1+valor2;
producto=valor1*valor2;
resta=valor1-valor2;

printf("Al ser los valores %f y %f su suma es %f su producto es %f y la resta del primero por el segundo es %f \n", valor1, valor2, suma, producto, resta);

system("pause");

}