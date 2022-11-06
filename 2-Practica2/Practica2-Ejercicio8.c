#include <stdio.h>
#include <stdlib.h>

void main()
{
   /* 8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
 sea mayor o igual que el importe a retirar. */

 float saldo_actual, saldo_retirar, saldo_nuevo;

 printf("ingrese el saldo actual de la cuenta bancaria: \n");
 scanf("%f", &saldo_actual);

 printf("ingrese el saldo a retirar de la cuenta bancaria: \n");
 scanf("%f", &saldo_retirar);

 if (saldo_actual>=saldo_retirar)
    {
    saldo_nuevo = (saldo_actual - saldo_retirar);
    printf("Su saldo actual en su cuenta es de %0.2f \n", saldo_nuevo);
    }
 else 
    {
    printf("No tiene esa cantidad de dinero para retirar \n");
    }

 system("pause");
 
}