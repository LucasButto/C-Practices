#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){

    int vehiculo=0, pasajeros=0, horario=0;
    float tarifa=0;


    printf("Ingrese el tipo de veh%cculo:\n 1)Auto \n 2)Cami%cn \n 3)Moto \n", 161, 162);
    scanf("%i", &vehiculo);

    if (vehiculo!=1 && vehiculo!=2 && vehiculo!=3 )
    {
        printf("Ingrese un tipo de veh%cculo correcto\n", 161);
        exit(-1);
    }
    
    printf("Ingrese la cantidad de pasajeros.\n");
    scanf("%i", &pasajeros);

    if (pasajeros<=0 && pasajeros>5)
    {
        printf("Ingrese una cantidad correcta de pasajeros.\n");
        exit(-1);
    }
    else{
        printf("Ingrese la zona horaria de congesti%cn en la que se encuentra:\n 1)Alta \n 2)Baja \n", 162);
        scanf("%i", &horario);

        if (horario!=1 && horario!=2)
        {
           printf("Ingrese una zona horaria correcta.\n");
           exit(-1); 
        }   
    }
    
    switch (horario)
    {
    case 1:

            switch (vehiculo)
            {
            case 1:
                if (pasajeros<3)
                {
                    tarifa=200;
                }
                else{
                    tarifa=0;
                }
                
                break;
            
            case 2:
                    tarifa=300;

                break;

            case 3:
                    tarifa=100;

                break;
            }
        
        break;
    
    case 2:
            switch (vehiculo)
            {
            case 1:
                    tarifa=150;

                break;
            
            case 2:
                    tarifa=200;

                break;

            case 3:
                    tarifa=0;

                break;
            }


        break;
    }


                printf("El valor de su tarifa es: $%0.2f", tarifa);
}
