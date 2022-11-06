#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void main()
{
    /* 3. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
    "nombre apellido" para cada uno, y mostrar por consola.*/
    
    char nombres[5][20]={""};
    char apellidos[5][20]={""};
    char nomyape[5][50]={""};
    int i;

    for (i=0; i<5; i++)
    {
        printf("Ingrese el nombre del alumno %i:\n", i+1);
        scanf("%s", &nombres[i]);

        printf("Ingrese el apellido del alumno %i:\n", i+1);
        scanf("%s", &apellidos[i]);

        strcat(nomyape[i],nombres[i]);
        strcat(nomyape[i], " ");
        strcat(nomyape[i],apellidos[i]);
    }

    for (i=0; i<5; i++)
    {
        printf("%s \n",nomyape[i]);
    }

    system("pause");
}