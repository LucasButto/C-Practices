#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
    la suma de todos los números que no están en la diagonal principal.
    */

    int i, j, num;
    float suma=0;

    printf("Ingrese el %crden de la matriz \n", 162);
    scanf("%i", &num);

    float matriz[num][num];

    for(i=0; i<num; i++)
    {
        for(j=0; j<num; j++)
        {
            printf("Ingrese el valor del matriz en la posici%cn %i %i \n", 162, i+1, j+1);
            scanf("%f", &matriz[i][j]);

            if (i!=j)
            {
                suma=suma+matriz[i][j];
            }
        }
    }

    printf("\n");
    
    for(i=0; i<num; i++)
    {
        printf("| ");
        for(j=0; j<num; j++)
        {
            printf("%0.2f ", matriz[i][j]);
        }
        printf("|");
        printf("\n"); 
    }
   
    printf("\n");
   
    printf("La suma de los elementos de la matriz que no est%cn en la diagonal principal es de %0.2f \n", 160, suma);    

    system("pause");

}