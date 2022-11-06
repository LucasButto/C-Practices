#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* 12- Realizar un programa que permita registrar los datos para una venta de $4600. Para ello, se le pedirá al usuario que ingrese su DNI, 
   validar que dicho número no sea menor que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el medio de pago: 
   1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese una opción de las siguientes: 
   1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). 
   El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para 6 y 12 cuotas. Validar que todos los 
   datos ingresados por el usuario sean correctos, en caso contrario informar la situación y finalizar programa. Por último, presentar un 
   resumen de la operación, por ejemplo:
    DNI: 38.456.123
    Medio de pago: Tarjeta de crédito
    Tarjeta: Cabal
    Cuotas: 3
    Total: $4784 */

    
    float venta, venta3, venta612;
    int dni, num, tarjeta, cuota;

   
    printf("ingrese el valor de la venta: \n");
    scanf("%f", &venta);

    printf(" \n");
    if (venta>0)
    {
    printf("Ingrese su DNI: \n");
    scanf("%i", &dni);

    printf(" \n");

   if ((dni>=1000000) && (dni<=99999999))
    { 
     printf("Seleccione un metodo de pago: \n");
     printf("1-Efectivo \n");
     printf("2-Tarjeta de crédito \n");
    
     scanf("%i", &num);
     
     printf(" \n");

     if (num==1)
     {
     printf("DNI: %i \n", dni);
     printf("MEDIO DE PAGO: Efectivo \n");
     printf("Cuotas: 0 \n");
     printf("Total: %0.2f \n", venta);
     }
     else
        if (num==2)
        {
            printf("ingrese una opción de las siguientes: \n");
            printf("1-Visa \n");
            printf("2-American Express \n");
            printf("3-Mercado Pago \n");
            printf("4-Cabal \n");

            scanf("%i", &tarjeta);

            printf(" \n");

            switch (tarjeta)
            {
            case 1:
            
            printf("En cuantas cuotas desea abonar: \n");
            printf("1, 3, 6 o 12 \n");
            scanf("%i", &cuota);

            printf(" \n");

            if (cuota==1)
            {
            printf("DNI: %i \n", dni);
            printf("MEDIO DE PAGO: Tarjeta de credito \n");
            printf("Tarjeta: Visa \n");
            printf("Cuotas: 1 \n");
            printf("Total: %0.2f \n", venta);
            }
            else
                if (cuota==3)
                {
                venta3=(venta+(venta*0.04));
                printf("DNI: %i \n", dni);
                printf("MEDIO DE PAGO: Tarjeta de credito \n");
                printf("Tarjeta: Visa \n");
                printf("Cuotas: 3 \n");
                printf("Total: %0.2f \n", venta3);
                }
                else
                    if (cuota==6)
                    {
                    venta612=(venta+(venta*0.08));
                    printf("DNI: %i \n", dni);
                    printf("MEDIO DE PAGO: Tarjeta de credito \n");
                    printf("Tarjeta: Visa \n");
                    printf("Cuotas: 6 \n");
                    printf("Total: %0.2f \n", venta612);
                    }
                    else
                        if (cuota==12)
                        {
                        venta612=(venta+(venta*0.08));
                        printf("DNI: %i \n", dni);
                        printf("MEDIO DE PAGO: Tarjeta de credito \n");
                        printf("Tarjeta: Visa \n");
                        printf("Cuotas: 12 \n");
                        printf("Total: %0.2f \n", venta612);
                        }
                        else 
                        printf("Ingrese un numero de cuotas valido \n");
            break;

            case 2:
            
            printf("En cuantas cuotas desea abonar: \n");
            printf("1, 3, 6 o 12 \n");
            scanf("%i", &cuota);

            printf(" \n");

            if (cuota==1)
            {
            printf("DNI: %i \n", dni);
            printf("MEDIO DE PAGO: Tarjeta de credito \n");
            printf("Tarjeta: American Express \n");
            printf("Cuotas: 1 \n");
            printf("Total: %0.2f \n", venta);
            }
            else
                if (cuota==3)
                {
                venta3=(venta+(venta*0.04));
                printf("DNI: %i \n", dni);
                printf("MEDIO DE PAGO: Tarjeta de credito \n");
                printf("Tarjeta: American Express \n");
                printf("Cuotas: 3 \n");
                printf("Total: %0.2f \n", venta3);
                }
                else
                    if (cuota==6)
                    {
                    venta612=(venta+(venta*0.08));
                    printf("DNI: %i \n", dni);
                    printf("MEDIO DE PAGO: Tarjeta de credito \n");
                    printf("Tarjeta: American Express \n");
                    printf("Cuotas: 6 \n");
                    printf("Total: %0.2f \n", venta612);
                    }
                    else
                        if (cuota==12)
                        {
                        venta612=(venta+(venta*0.08));
                        printf("DNI: %i \n", dni);
                        printf("MEDIO DE PAGO: Tarjeta de credito \n");
                        printf("Tarjeta: American Express \n");
                        printf("Cuotas: 12 \n");
                        printf("Total: %0.2f \n", venta612);
                        }
                        else 
                        printf("Ingrese un numero de cuotas valido \n");
            break;

            case 3:
            
            printf("En cuantas cuotas desea abonar: \n");
            printf("1, 3, 6 o 12 \n");
            scanf("%i", &cuota);

            printf(" \n");

            if (cuota==1)
            {
            printf("DNI: %i \n", dni);
            printf("MEDIO DE PAGO: Tarjeta de credito \n");
            printf("Tarjeta: Mercado Pago \n");
            printf("Cuotas: 1 \n");
            printf("Total: %0.2f \n", venta);
            }
            else
                if (cuota==3)
                {
                venta3=(venta+(venta*0.04));
                printf("DNI: %i \n", dni);
                printf("MEDIO DE PAGO: Tarjeta de credito \n");
                printf("Tarjeta: Mercado Pago \n");
                printf("Cuotas: 3 \n");
                printf("Total: %0.2f \n", venta3);
                }
                else
                    if (cuota==6)
                    {
                    venta612=(venta+(venta*0.08));
                    printf("DNI: %i \n", dni);
                    printf("MEDIO DE PAGO: Tarjeta de credito \n");
                    printf("Tarjeta: Mercado Pago \n");
                    printf("Cuotas: 6 \n");
                    printf("Total: %0.2f \n", venta612);
                    }
                    else
                        if (cuota==12)
                        {
                        venta612=(venta+(venta*0.08));
                        printf("DNI: %i \n", dni);
                        printf("MEDIO DE PAGO: Tarjeta de credito \n");
                        printf("Tarjeta: Mercado Pago \n");
                        printf("Cuotas: 12 \n");
                        }
                        else 
                        printf("Ingrese un numero de cuotas valido \n");
            break;

            case 4:
            
            printf("En cuantas cuotas desea abonar: \n");
            printf("1, 3, 6 o 12 \n");
            scanf("%i", &cuota);

            printf(" \n");

            if (cuota==1)
            {
            printf("DNI: %i \n", dni);
            printf("MEDIO DE PAGO: Tarjeta de credito \n");
            printf("Tarjeta: Cabal \n");
            printf("Cuotas: 1 \n");
            printf("Total: %0.2f \n", venta);
            }
            else
                if (cuota==3)
                {
                venta3=(venta+(venta*0.04));
                printf("DNI: %i \n", dni);
                printf("MEDIO DE PAGO: Tarjeta de credito \n");
                printf("Tarjeta: Cabal \n");
                printf("Cuotas: 3 \n");
                printf("Total: %0.2f \n", venta3);
                }
                else
                    if (cuota==6)
                    {
                    venta612=(venta+(venta*0.08));
                    printf("DNI: %i \n", dni);
                    printf("MEDIO DE PAGO: Tarjeta de credito \n");
                    printf("Tarjeta: Cabal \n");
                    printf("Cuotas: 6 \n");
                    printf("Total: %0.2f \n", venta612);
                    }
                    else
                        if (cuota==12)
                        {
                        venta612=(venta+(venta*0.08));
                        printf("DNI: %i \n", dni);
                        printf("MEDIO DE PAGO: Tarjeta de credito \n");
                        printf("Tarjeta: Cabal \n");
                        printf("Cuotas: 12 \n");
                        printf("Total: %0.2f \n", venta612);
                        }
                        else 
                        printf("Ingrese un numero de cuotas valido \n");
            break;
            
            default:
                printf("Ingrese una opcion valida del 1 al 4 \n");
            break;
            }
        }
        else 
        {
        printf("ingrese una opcion valida 1 o 2 \n");
        printf(" \n");
        }
   }
   else 
   printf("ingrese un dni valido \n");
   printf(" \n");
    }
    else
    printf("Ingrese un valor de venta valido \n");
    

   system("pause");
}

