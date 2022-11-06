#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
 dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
 consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
 if y luego estructura switch). */
 int mes;

 printf("ingrese el numero del mes (1 al 12): \n");
 scanf("%i", &mes);

 if ((mes>12) || (mes<1))
    {
    printf("ingrese un numero valido del 1 al 12 \n");
    }
 else 
    if (mes==1)
    {
    printf("enero \n");
    }
    else 
        if (mes==2)
        {
        printf("febrero \n");
        }
        else
            if (mes==3)
            {
            printf("marzo \n");
            }
            else
                if (mes==4)
                {
                printf("abril \n");
                }
                else
                    if (mes==5)
                    {
                    printf("mayo \n");
                    }
                    else
                        if (mes==6)
                        {
                        printf("junio \n");
                        }
                        else
                            if (mes==7)
                            {
                            printf("julio \n");
                            }
                            else
                                if (mes==8)
                                {
                                printf("agosto \n");
                                }
                                else
                                    if (mes==9)
                                    {
                                    printf("septiembre \n");
                                    }
                                    else
                                        if (mes==10)
                                        {
                                        printf("octubre \n");
                                        }
                                        else
                                            if (mes==11)
                                            {
                                            printf("noviembre \n");
                                            }
                                            else
                                                if (mes==12)
                                                {
                                                printf("diciembre \n");
                                                }

 system("pause");
}
