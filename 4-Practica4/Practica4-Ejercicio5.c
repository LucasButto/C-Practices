#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. 
    Requerir al usuario ingresar el dni del alumno. Evaluar si el dni ingresado 
    es igual al que se tiene almacenado. Permitir ingresar un dni incorrecto hasta 
    3 veces como máximo. Si el usuario ingresa el dni de manera correcta, mostrar en 
    la consola la nota del alumno. */

 float nota = 7;
 int dni = 38632584;
 int dniIngresado = 0; 
 int intentos = 1; 
 int ingresaCorrectamente = 0;

  printf("Ingrese el DNI del alumno \n");
  scanf("%i", &dniIngresado);

 while (dniIngresado!=dni && intentos<3)
  {
    intentos=intentos+1;
    printf("El DNI ingresado no es v%clido: \n",160);
    printf("Ingrese el DNI del alumno \n");
    scanf("%i", &dniIngresado);
  }

 if (dniIngresado==dni)
  {
   printf("La nota del alumno es %0.1f \n", nota);
  }
  else
  {
   printf("Se acabaron sus intentos \n");
  }

 system("pause");
 
}