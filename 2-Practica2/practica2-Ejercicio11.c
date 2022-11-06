#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* 11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
 Luego presentar el siguiente menú:
 1. Informar su suma
 2. Informar su resta
 3. Informar su multiplicación
 4. Informar su división
 5. Salir
 Seleccione una operación:
 Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
 programa debe terminar. */

 float a, b, suma, resta, multiplicacion, division;
 int valor;

 printf("1. Informar su suma \n");
 printf("2. Informar su resta \n");
 printf("3. Informar su multiplicacion \n");
 printf("4. Informar su division \n");
 printf("5. Salir\n");

 scanf("%i", &valor);
 
 switch (valor)
 {
 case 1:
  printf("ingrese los valores a sumar: \n");
  scanf("%f %f", &a, &b);
    suma=a+b;
    printf("la suma de %0.2f y %0.2f es de %0.2f \n", a, b, suma);
    system("pause");
     break;

 case 2:
  printf("ingrese los valores a restar: \n");
  scanf("%f %f", &a, &b);
    resta=a-b;
    printf("la resta de %0.2f y %0.2f es de %0.2f \n", a, b, resta);
    system("pause");
     break;

 case 3:
  printf("ingrese los valores a multiplicar: \n");
  scanf("%f %f", &a, &b);
    multiplicacion=a*b;
    printf("el producto de %0.2f y %0.2f es de %0.2f \n", a, b, multiplicacion);
    system("pause");
     break;

 case 4:
  printf("ingrese los valores a dividir: \n");
  scanf("%f %f", &a, &b);
    if (b==0)
    {
    printf("no se puede realizar una division por 0 \n");
    }
    else
    {
    division=a/b;
    printf("la division de %0.2f y %0.2f es %0.2f \n", a, b, division);
    }
    system("pause");
     break;

 case 5:
     break;
 default:
    printf("ingrese una opcion valida del 1 al 5 \n");
     break;
system("pause");
 }
}