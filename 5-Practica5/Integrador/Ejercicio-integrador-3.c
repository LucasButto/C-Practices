#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
    cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
    opciones a resolver:
    1. Cargar Alumnos
    2. Buscar un alumno
    3. Modificar la nota de un alumno
    4. Mostrar un listado de los 10 alumnos
    5. Salir
    Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
    Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
    mayor a 0 y menor o igual que 10.
    La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
    ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
    La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
    DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
    encuentra modificar la nota del alumno por la ingresada.
    La opción 4 debe mostrar en la consola el listado de alumnos.
    SÓLO se saldrá de la aplicación si se selecciona la opción 5.
    */

   int tam=10;
   int i, j, cant, opcion, bandera=0, dnibuscar, dniIncorrecto=1, dnibuscado;
   float notanueva;
   int dni[tam];
   float nota[tam];

   do 
   {   
        printf("\n");
        printf("Ingrese una de las siguientes opciones: \n");
        printf("1. Cargar Alumnos \n");
        printf("2. Buscar un alumno \n");
        printf("3. Modificar la nota de un alumno \n");
        printf("4. Mostrar un listado de los %i alumnos \n", tam);
        printf("5. Salir \n");

        scanf("%i", &opcion);

        while (opcion>5 || opcion<1)
        {
            printf("Opci%cn ingresada no v%clida \n", 162, 160);
            printf("Ingrese una de las siguientes opciones: \n");
            printf("1. Cargar Alumnos \n");
            printf("2. Buscar un alumno \n");
            printf("3. Modificar la nota de un alumno \n");
            printf("4. Mostrar un listado de los %i alumnos \n", tam);
            printf("5. Salir \n");

            scanf("%i", &opcion);
        }

        switch (opcion)
        {
            case 1:
                for (i=0; i<tam; i++)
                {
                    printf("Ingrese el DNI del alumno %i (sin puntos) \n", i+1);
                    scanf("%i", &dni[i]);

                    while (dni[i]>99999999 || dni[i]<1000000)
                    {
                        printf("DNI ingresado no v%clido \n", 160);
                        printf("Ingrese el DNI del alumno %i (sin puntos) \n", i+1);
                        scanf("%i", &dni[i]);
                    }

                    printf("Ingrese la nota del alumno %i \n", i+1);
                    scanf("%f", &nota[i]);

                    while (nota[i]>10 || nota[i]<1)
                    {
                        printf("Nota ingresada no v%clida \n", 160);
                        printf("Ingrese la nota del alumno %i \n", i+1);
                        scanf("%f", &nota[i]);
                    }   
                }
                bandera=1;
            break;
        
            case 2:
                if (bandera==0)
                {
                    printf(" \n");
                    printf("Primero debe ingresar los DNI y notas de los alumnos \n");
                }
                else
                {
                    dniIncorrecto=1;

                    printf("Ingrese el DNI del alumno que desea buscar \n");
                    scanf("%i", &dnibuscar);

                    while (dnibuscar>99999999 || dnibuscar<1000000)
                    {
                        printf("DNI ingresado no v%clido \n", 160);
                        printf("Ingrese el DNI del alumno que desea buscar \n");
                        scanf("%i", &dnibuscar);
                    }

                    printf(" \n");
                    for (i = 0; i < tam; i++)
                    {
                        if (dnibuscar==dni[i])
                        {
                            printf("%i - %0.2f \n", dni[i], nota[i]);
                            dniIncorrecto=0;
                        }
                    }

                    if (dniIncorrecto==1)
                    {
                        printf("DNI inexistente \n");
                    }  
                    
                }
            break;

            case 3:
                if (bandera==0)
                {
                    printf(" \n");
                    printf("Primero debe ingresar los DNI y notas de los alumnos \n");
                }
                else
                {
                    do
                    {
                        dniIncorrecto=1;

                        printf("Ingrese el DNI del alumno que desea cambiar la nota \n");
                        scanf("%i", &dnibuscar);

                        while (dnibuscar>99999999 || dnibuscar<1000000)
                        {
                            printf("DNI ingresado no v%clido \n", 160);
                            printf("Ingrese el DNI del alumno que desea buscar \n");
                            scanf("%i", &dnibuscar);
                        }

                        printf("Ingrese la nueva nota del alumno \n", i+1);
                        scanf("%f", &notanueva);

                        while (notanueva>10 || notanueva<1)
                        {
                            printf("Nota ingresada no v%clida \n", 160);
                            printf("Ingrese la nueva nota del alumno \n", i+1);
                            scanf("%f", &notanueva);
                        }

                        for (i = 0; i < tam; i++)
                        {
                            if (dnibuscar==dni[i])
                            {
                                dnibuscado=dni[i];
                                nota[i]=notanueva;
                                dniIncorrecto=0;
                            }
                        }
                        
                        if (dniIncorrecto==1)
                        {
                            printf("DNI inexistente \n");
                        }

                    } while (dnibuscar!=dnibuscado);
                }
            break;

            case 4:
                if (bandera==0)
                {
                    printf(" \n");
                    printf("Primero debe ingresar los DNI y notas de los alumnos \n");
                }
                else
                {
                    printf(" \n");
                    for (i = 0; i < tam; i++)
                    {
                        printf("%i - %0.2f \n", dni[i], nota[i]);
                    }
                }
            break;

            case 5:
            break;

            default:
                printf("Ingrese una opci%cn v%clida \n", 162, 160);
            break;
        }

    }while (opcion!=5);

}