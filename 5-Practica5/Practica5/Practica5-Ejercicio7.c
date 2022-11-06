#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
    leer las notas por consola, mostrar la suma de sus componentes y el promedio.
    */

    float  total=0, promedio;
    int i, num;

    printf("Ingrese el n%cmero de notas a cargar \n", 163);
    scanf("%i", &num);

    float notas[num];

    for(i=0; i<num; i++)
    {
        printf("Ingrese la nota del alumno %i \n", i+1);
        scanf("%f", &notas[i]);
    
        total=total+notas[i];
    }

    promedio=total/num;

    printf("La suma de las notas de los alumnos es de %0.2f \n", total);
    printf("El promedio de la clase es de %0.2f \n", promedio);

    system("pause");

}