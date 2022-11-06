#include <stdio.h>
#include <stdlib.h>

void main()
{
 /* 
 10. Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y switch:
 “Pedir al usuario que ingrese dos números (permitir ingresar número con decimales). Luego presentar el siguiente menú:
 1. Informar su suma
 2. Informar su resta
 3. Informar su multiplicación
 4. Informar su división
 5. Salir
 Seleccione una operación:
 Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el programa debe terminar.”
 Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras este no se ingrese la opción 6.
 Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el usuario.
 El menú que se mostrará al usuario quedará entonces de la siguiente forma:
 1. Informar su suma
 2. Informar su resta
 3. Informar su multiplicación
 4. Informar su división
 5. Informar cantidad de operaciones realizadas
 6. Salir
 Seleccione una operación:                      
 */

 float a, b, suma, resta, multiplicacion, division;
 int valor, operaciones=0;

 do 
  {
    printf("Seleccione una operaci%cn: \n", 162);
    printf("1. Informar su suma \n");
    printf("2. Informar su resta \n");
    printf("3. Informar su multiplicaci%cn \n", 162);
    printf("4. Informar su divisi%cn \n", 162);
    printf("5. Informar cantidad de operaciones realizadas \n");
    printf("6. Salir\n");

    scanf("%i", &valor);

    switch (valor)
    {
    case 1:
        printf("Ingrese los valores a sumar: \n");
        scanf("%f %f", &a, &b);
        suma=a+b;
        printf(" \n");
        printf("La suma de %0.2f y %0.2f es %0.2f \n", a, b, suma);
        printf(" \n");
        operaciones=operaciones+1;
    break;

    case 2:
        printf("Ingrese los valores a restar: \n");
        scanf("%f %f", &a, &b);
        resta=a-b;
        printf(" \n");
        printf("La resta de %0.2f y %0.2f es %0.2f \n", a, b, resta);
        printf(" \n");
        operaciones=operaciones+1;
    break;

    case 3:
        printf("Ingrese los valores a multiplicar: \n");
        scanf("%f %f", &a, &b);
        multiplicacion=a*b;
        printf(" \n");
        printf("El producto de %0.2f y %0.2f es %0.2f \n", a, b, multiplicacion);
        printf(" \n");
        operaciones=operaciones+1;
    break;

    case 4:
        printf("Ingrese los valores a dividir: \n");
        scanf("%f %f", &a, &b);
        if (b==0)
        {
        printf(" \n");
        printf("No se puede realizar una divisi%cn por 0 \n", 162);
        printf(" \n");
        }
        else
        {
        division=a/b;
        printf(" \n");
        printf("La divisi%cn de %0.2f y %0.2f es %0.2f \n", 162, a, b, division);
        printf(" \n");
        }

        operaciones=operaciones+1;
    break;

    case 5:
        printf(" \n");
        printf("La cantidad de operaciones realizadas fue de %i \n", operaciones);
        printf(" \n");
    break;

    case 6:
    break;

    default:
    printf(" \n");
    printf("ingrese una opci%cn v%clida del 1 al 6 \n", 162, 160);
    printf(" \n");
    break;
    }
  } while (valor!=6);
}