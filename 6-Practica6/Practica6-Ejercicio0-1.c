#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   1)Pedir al usuario que ingrese dos números. Luego presentar el siguiente menú: 
   1. Informar su suma 
   2. Informar su resta 
   3. Informar su multiplicación 
   4. Informar su división 
   5. Salir 
   Seleccione una operación: Mostrar el resultado de la operación seleccionada.
*/

float sumar(float num1, float num2);
float restar(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);
int valor;

void main()
{
    float num1, num2, respuesta;

    do 
    {
        printf("Seleccione una operaci%cn: \n", 162);
        printf("1. Informar su suma \n");
        printf("2. Informar su resta \n");
        printf("3. Informar su multiplicaci%cn \n", 162);
        printf("4. Informar su divisi%cn \n", 162);
        printf("5. Salir \n");

        scanf("%i", &valor);

        switch (valor)
        {
            case 1:
                printf("Ingrese los valores a sumar: \n");
                scanf("%f %f", &num1, &num2);
                respuesta=sumar(num1,num2);
                printf("\nLa suma es %0.2f\n\n", respuesta);
            break;

            case 2:
                printf("Ingrese los valores a restar: \n");
                scanf("%f %f", &num1, &num2);
                respuesta=restar(num1,num2);
                printf("\nLa resta es %0.2f\n\n", respuesta);
            break;

            case 3:
                printf("Ingrese los valores a multiplicar: \n");
                scanf("%f %f", &num1, &num2);
                respuesta=multiplicacion(num1,num2);
                printf("\nLa multiplicaci%cn es %0.2f\n\n", 162, respuesta);
            break;

            case 4:
                printf("Ingrese los valores a dividir: \n");
                scanf("%f %f", &num1, &num2);
                if (num2==0)
                {
                printf(" \n");
                printf("No se puede realizar una divisi%cn por 0 \n", 162);
                printf(" \n");
                }
                else
                {
                    respuesta=division(num1,num2);
                    printf("\nLa divisi%cn es %0.2f\n\n", 162, respuesta);
                }
            break;

            case 5:
            break;

            default:
                printf("\ningrese una opci%cn v%clida del 1 al 6 \n\n", 162, 160);
            break;
        }
    } while (valor!=5);
}

//función sumar float sumar
float sumar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}

//función restar float sumar
float restar(float num1, float num2)
{
    float respuesta;
    respuesta = num1 - num2;
    return respuesta;
}

//función multiplicacion float sumar
float multiplicacion(float num1, float num2)
{
    float respuesta;
    respuesta = num1 * num2;
    return respuesta;
}

//función division float sumar
float division(float num1, float num2)
{
    float respuesta;
    respuesta = num1 / num2;
    return respuesta;
}


