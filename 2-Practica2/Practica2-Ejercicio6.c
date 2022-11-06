#include <stdio.h>
#include <stdlib.h>

void main()
{
    /* 6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
 que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
 que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
 inválida”*/

 float a;

 printf("ingrese la nota del alumno: \n");
 scanf("%f", &a);

 if ((a>10) || (a<0))
    {
    printf("%f es el una Nota invalida \n", a);
    }
    else
        if ((a>=0) && (a<4))
        {
        printf("el alumno reprobo \n");  
        }
            else
                if ((a>=4) && (a<6))
                {
                printf("el alumno se encuentra regular \n");
                }
                else
                {        
                printf("El alumno promociono \n");
                }

 system("pause");

}