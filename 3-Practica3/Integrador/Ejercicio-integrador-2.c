#include <stdio.h>
#include <stdlib.h>

void main()
{

 /* Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa que 
 permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la cantidad de ventas 
 que necesita registrar. Luego, para cada venta deberá ingresar el DNI del cliente (validar que dicho número 
 no sea menor que 1000000 ni mayor que 99999999). Ingresar el monto de la venta y el medio de pago: 
 1 - Efectivo, 2 - Tarjeta de crédito, si la venta fue con tarjeta, pedir que ingrese una opción de las 
 siguientes: 1 - Visa, 2 - American Express, 3 - Mercado Pago, 4 - Cabal. Además, requerir la cantidad de 
 cuotas en las que abonará (1, 3, 6 o 12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 
 cuota, 4% para 3 cuotas y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si 
 la venta es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una venta 
 sean correctos, en caso contrario informar la situación y finalizar la carga de la venta actual. Para cada 
 venta, presentar un resumen de la operación, por ejemplo:

 DNI: 38.456.123
 Medio de pago: Tarjeta de crédito
 Tarjeta: Cabal
 Cuotas: 3
 Total: $4784
 Al finalizar el registro, mostrar la suma total de las ventas ingresadas. */

 int dni, cantidad_ventas, i, pago, tarjeta, cuotas;
 float venta, total, venta_final;

 printf("Ingrese la cantidad de ventas: \n");
 scanf("%i", &cantidad_ventas);

 while (cantidad_ventas<=0)
 {
 printf("El n%cmero ingresado no es v%clido.\n",163,160);
 printf("Ingrese la cantidad de ventas: \n");
 scanf("%i", &cantidad_ventas);
 }

 venta_final=0;

 printf("\n");

 for(i=1; i<=cantidad_ventas; i++)
  {
    printf("| venta n%cmero %i: | \n",163,i);
    printf("\n");
    printf("Ingrese el DNI: (sin puntos) \n");
    scanf("%i", &dni);

    while (dni<1000000 || dni>99999999)
    {
    printf("El n%cmero ingresado no es v%clido.\n",163,160);  
    printf("Ingrese el DNI: \n");
    scanf("%i", &dni);
    }

    printf("Ingrese el monto de la venta: \n");
    scanf("%f", &venta);

    while (venta<=0)
    {
    printf("El n%cmero ingresado no es v%clido.\n",163,160);   
    printf("Ingrese el monto de la venta: \n");
    scanf("%i", &venta);
    }

    printf("Ingrese el medio de pago: \n");
    printf("1 - Efectivo \n");
    printf("2 - Tarjeta de cr%cdito \n",130);
    scanf("%i", &pago);

    while (pago!=1 && pago!=2)
    {
    printf("El n%cmero ingresado no es v%clido.\n",163,160);   
    printf("Ingrese el medio de pago: \n");
    scanf("%i", &pago);
    }

    total=venta;

    switch (pago)
     {
        case 1:
        printf("\n");  
        printf("DNI: %i \n",dni);
        printf("Medio de pago: Efectivo \n");
        printf("Total: $%0.2f \n", venta);
        break;

       case 2:
       printf("Ingrese una opci%cn de las siguientes: \n",162);
       printf("1 - Visa \n");
       printf("2 - American Express \n");
       printf("3 - Mercado Pago \n");
       printf("4 - Cabal \n");
       scanf("%i", &tarjeta);

        while (tarjeta<1 || tarjeta>4)
         {
         printf("El n%cmero ingresado no es v%clido.\n",163,160);   
         printf("Ingrese el medio de pago: \n");
         scanf("%i", &tarjeta);
         }

         printf("Ingrese la cantidad de cuotas en las que abonar%c: \n1, 3, 6 o 12 \n",160);
         scanf("%i", &cuotas);

         while (cuotas!=1 && cuotas!=3 && cuotas!=6 && cuotas!=12)
         {
         printf("El n%cmero ingresado no es v%clido.\n",163,160);   
         printf("Ingrese la cantidad de cuotas en las que abonar%c: \n1, 3, 6 o 12 \n",160);
         scanf("%i", &cuotas);
         }

         if (cuotas==3)
         {
           total=venta+(venta*0.04);
         }

         if ((cuotas==6) || (cuotas==12))
         {
         total=venta+(venta*0.08);
         }
            
         switch (tarjeta)
         {
            case 1:
            printf("\n"); 
            printf("DNI: %i \n",dni);
            printf("Medio de pago: Trajeta de cr%cdito\n",130);
            printf("Tarjeta: Visa \n");
            printf("Cuotas: %i \n", cuotas);
            printf("Total: $%0.2f \n", total);
            break;

            case 2:
            printf("\n"); 
            printf("DNI: %i \n",dni);
            printf("Medio de pago: Trajeta de cr%cdito\n",130);
            printf("Tarjeta: American Express \n");
            printf("Cuotas: %i \n", cuotas);
            printf("Total: $%0.2f \n", total);
            break;

            case 3:
            printf("\n"); 
            printf("DNI: %i \n",dni);
            printf("Medio de pago: Trajeta de cr%cdito\n",130);
            printf("Tarjeta: Mercado Pago \n");
            printf("Cuotas: %i \n", cuotas);
            printf("Total: $%0.2f \n", total);
            break;

            case 4:
            printf("\n"); 
            printf("DNI: %i \n",dni);
            printf("Medio de pago: Trajeta de cr%cdito\n",130);
            printf("Tarjeta: Cabal \n");
            printf("Cuotas: %i \n", cuotas);
            printf("Total: $%0.2f \n", total);
            break;
         
            default:
            break;
         }
        break;

        default:
        break;
      }

    venta_final=venta_final+total;

    printf("\n");
   }

 printf("La suma total de las ventas ingresadas es: $%0.2f \n", venta_final);

 printf("\n");

 system("pause");

}