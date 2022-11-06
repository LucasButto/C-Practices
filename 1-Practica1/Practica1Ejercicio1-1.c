#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1- Ingresar dos valores enteros, sumarlos e imprimir esta suma.*/ 
    
int valor1, valor2, suma;

printf("ingrese los valores a sumar: \n");
scanf("%i %i", &valor1, &valor2);

suma=valor1+valor2;

printf("la suma de los numeros %i y %i es %i \n", valor1, valor2, suma);


system("pause");

}
