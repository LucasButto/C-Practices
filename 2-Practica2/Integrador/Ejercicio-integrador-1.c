#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
 dependen de:
 ● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
 ● Número de pasajeros que lleve
 ● Tipo horario del día:
    Horario A: horas de “Alta” congestión:
 ● Los automóviles pagan $200 y con tres pasajeros o más no pagan peaje 
 ● Los camiones pagan $300
 ● Las motos pagan $100
    Horario B: horas de “Baja” congestión:
 ● Los automóviles pagan $150
 ● Los camiones pagan $200
 ● Las motos no pagan peaje
 En este horario la tarifa es independientemente del número de pasajeros.
 Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
 y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
 de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5. */

 int pasajeros, hora, vehiculo;
 float tarifa;
 
 pasajeros=0;
 hora=0;
 vehiculo=0;

 printf("Ingrese el tipo de veh%cculo: \n",161);
 printf("1-Cami%cn \n",162);
 printf("2-Automovil \n");
 printf("3-Moto \n");

 scanf("%i", &vehiculo);
 printf(" \n");

 {if (vehiculo<1 || vehiculo>3)
    {
    printf("Ingrese un veh%cculo v%clido \n",161,160);
    }
    else
    {
        printf("Ingrese la cantidad de pasajeros: \n");
        scanf("%i", &pasajeros);
        printf(" \n");

        if ((pasajeros<1) || (pasajeros>5))
            {
            printf("Ingrese un n%cmero de pasajeros v%clido \n",163,160);
            }
            else
            {
                printf("Ingrese el tipo horario del d%ca: \n",161);
                printf("1-Alta congesti%cn \n",162);
                printf("2-Baja congesti%cn \n",162);
                scanf("%i", &hora);
                printf(" \n");

                if (hora<1 || hora>2)
                {
                    printf("Ingrese un horario v%clido \n",160);
                }

            }
    }
 }
 

 {switch (vehiculo)
    {
     case 1:
        if (hora==1)
            {
                printf("Usted debe pagar $300 pesos \n");
            }
            else
            {
                printf("Usted debe pagar $200 pesos \n");
            }
        break;

     case 2:
        if (hora==1)
            {
                if (pasajeros<3)
                {
                    printf("Usted debe pagar $200 pesos \n");
                }
                else
                {
                    printf("Usted no debe pagar \n");
                }
            }
            else
                {
                printf("Usted debe pagar $150 pesos \n"); 
                }
        break;

     case 3:
        if (hora==1)
            {
                printf("Usted debe pagar $100 pesos \n");
            }
            else
            {
                printf("Usted no debe pagar \n");
            }
        break;
     
     default:

         printf("Valor inv%clido \n",160);

         break;
    }
  }

 printf(" \n");
 system("pause");

}