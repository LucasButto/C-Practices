#include <stdio.h>
#include <stdlib.h>


void main()
{
    /* 6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio. */

	int alumnos;
	int aprobados;
	int desaprobados;
	float nota;
	float nota_al;
	float promedio;
	int respuesta;

    nota = 0;
	alumnos = 0;

    do 
    {
		printf("Ingrese la nota del alumno: \n");
		scanf("%f",&nota_al);

		while ((nota_al>10 || nota_al<1)) 
		{
			printf("ingrese una nota v%clida \n", 160);
			printf("Ingrese la nota del alumno: \n");
			scanf("%f", &nota_al);
		}

		nota = nota+nota_al;
		alumnos = alumnos+1;

		printf("Desea ingresar otra nota? \n");
        printf("1- Si \n");
        printf("2- No \n");
		scanf("%i", &respuesta);

		while ((respuesta!=2 && respuesta!=1)) 
        {
			printf("Desea ingresar otra nota? \n");
            printf("1- Si \n");
            printf("2- No \n");
			scanf("%i", &respuesta);
		}

	} while (respuesta==1);

    promedio = nota/alumnos;
	
    printf("La suma de las notas de las  de la clase es de: %0.2f \n", nota);
    printf("El promedio de la clase es de: %0.2f \n", promedio);
	
    system("pause");
    
}