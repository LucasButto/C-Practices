#include <stdio.h>
#include <stdlib.h>

void main()
{
 /* 15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
 Mostrar el promedio por alumno y el promedio general.*/

    int i, j, alumnos, cantidad_notas, nota;
    float promedio_alumno, promedio_total, suma_alumno, suma_total;

    suma_alumno=0;
    suma_total=0;

    do
    {
        printf("Ingrese la cantidad de alumnos: \n");
        scanf("%i", &alumnos);
        if (alumnos<=0)
        {
            printf("El n%cmero ingresado no es v%clido: \n",163,160);
        }
    } while (alumnos<=0);
    
    printf(" \n");

    printf("Ingrese la cantidad de notas por alumno: \n");
    scanf("%i", &cantidad_notas);

    while (cantidad_notas<=0)
    {
     printf("El n%cmero ingresado no es v%clido: \n",163,160);   
     printf("Ingrese la cantidad de notas por alumno: \n");
     scanf("%i", &cantidad_notas);
    }
    
    printf(" \n");

    for(i=1; i<=alumnos; i++)
    {
        printf("| Alumno %i | \n", i);
        printf(" \n");
        for (j=1; j<=cantidad_notas; j++)
        {
            printf("Ingrese la nota %i del alumno %i: \n", j, i);
            scanf("%i", &nota);

            while (nota<=0 || nota>10)
            {
             printf("El n%cmero ingresado no es v%clido: \n",163,160);   
             printf("Ingrese la nota %i del alumno %i: \n", j, i);
             scanf("%i", &nota);
            }
            suma_alumno=suma_alumno+nota;
        }
        
        promedio_alumno=suma_alumno/cantidad_notas;
        suma_total=suma_total+promedio_alumno;

        printf(" \n");
        printf("El promedio del alumno %i es %0.2f \n", i, promedio_alumno);
        printf(" \n");
        
        suma_alumno=0;
    }

    promedio_total=suma_total/alumnos;

    printf("El promedio de la clase es %0.2f \n", promedio_total);

    printf(" \n");
    system("pause");
}