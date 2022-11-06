#include <stdio.h>
#include <stdlib.h>


void main()
{
    /* 7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de datos, 
    ingresar un cero. Determinar e informar la cantidad de números que lo forman. */

    float num;
    int respuesta, cantidad=0;

    do 
    {
		printf("Ingrese un n%cmero para el conjunto distinto de 0: \n", 163);
		scanf("%f",&num);

		while ((num==0)) 
		{
			printf("Ingrese un n%cmero v%clido \n", 163, 160);
			printf("Ingrese un n%cmero para el conjunto distinto de 0: \n", 163);
		    scanf("%f",&num);
		}

        cantidad++;

		printf("Desea ingresar otro n%cmero? \n", 163);
        printf("1- Si \n");
        printf("0- No \n");
		scanf("%i", &respuesta);

		while ((respuesta!=0 && respuesta!=1)) 
        {
            printf("Ingrese una respuesta v%clida \n", 160);
			printf("Desea ingresar otro n%cmero? \n", 163);
            printf("1- Si \n");
            printf("0- No \n");
			scanf("%i", &respuesta);
		}

	} while (respuesta==1);

    printf("El conjunto esta formado por %i n%cmero/s \n", cantidad, 163);

    system("pause");

}