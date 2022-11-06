#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*2- Ingresar tres valores, sumarlos e imprimir esa suma. */
int valor1, valor2, valor3, suma;

printf("ingrese los valores a sumar: \n");
scanf("%i", &valor1);
scanf("%i", &valor2);
scanf("%i", &valor3);
/* %i es para numeros enteros, %d es para numeros decimales */

suma=valor1+valor2+valor3;

printf("la suma de los numeros %i , %i y %i es %i \n", valor1, valor2, valor3, suma);

system("pause");

}
