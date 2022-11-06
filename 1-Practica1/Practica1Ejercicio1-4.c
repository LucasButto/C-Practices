#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     /*4- Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas.*/
float lado1, lado2, hipotenusa, perimetro, superficie; 

printf("ingrese los lados del triangulo: \n");
scanf("%f %f", &lado1, &lado2);

hipotenusa=sqrt((lado1*lado1)+(lado2*lado2));
perimetro=hipotenusa+lado1+lado2;
superficie=(lado1*lado2)/2;


printf("la hipotenusa del triangulo es %0.2f , con un perimetro de %0.2f y una superficie de %0.2f \n", hipotenusa, perimetro, superficie);
/* %0.2f redondea el valor a 2 decimales */

system("pause");

}