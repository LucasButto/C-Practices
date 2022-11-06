#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
     /*5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/
float lado1, lado2, diagonal, perimetro, superficie; 

printf("ingrese los lados del triangulo: \n");
scanf("%f %f", &lado1, &lado2);

diagonal=sqrt((lado1*lado1)+(lado2*lado2));
perimetro=diagonal+lado1+lado2;
superficie=(lado1*lado2)/2;


printf("la diagonal del triangulo es %f , con un perimetro de %f y una superficie de %f \n", diagonal, perimetro, superficie);


system("pause");

}