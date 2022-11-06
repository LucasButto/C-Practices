#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo.*/
int lado1, lado2, lado3, perimetro;

printf("ingrese los lados del triangulo: \n");
scanf("%i %i %i", &lado1, &lado2, &lado3);

perimetro=lado1+lado2+lado3;

printf("el perimetro del triangulo es %i \n", perimetro);


system("pause");

}
