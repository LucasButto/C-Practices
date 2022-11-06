#include <stdio.h>
#include <stdlib.h>

void main()
{
  /* 9. Realizar un programa que permita ver información a un cliente de un banco. Para ello el cliente 
  deberá ingresar su usuario (número de DNI) y contraseña (número entero), validar que los datos ingresados 
  sean correctos, se permitirá al cliente 3 intentos de ingreso de contraseña. Al loguarse correctamente presentar 
  un menú con las siguientes opciones:
  1- Consultar saldo
  2- Consultar CBU
  3- Salir            */

 int dni = 35654123; 
 int pass = 1234; 
 int saldo = 150000; 
 int cbu = 986323456; 
 int dniIngresado = 0; 
 int passIngresado = 0; 
 int intentos = 1; 
 int ingresaCorrectamente = 0;
 int consulta;

  printf("Ingrese su DNI (sin puntos): \n");
  scanf("%i", &dniIngresado);
  printf("Ingrese su contrase%ca: \n", 164);
  scanf("%i", &passIngresado);

 while ((dniIngresado!=dni && intentos<3) || (passIngresado!=pass && intentos<3))
  {
    intentos=intentos+1;
    printf("Usuario o contrase%ca incorrecto \n", 164);
    printf("Ingrese su DNI (sin puntos): \n");
    scanf("%i", &dniIngresado);
    printf("Ingrese su contrase%ca: \n", 164);
    scanf("%i", &passIngresado);
  }

 if (dniIngresado==dni && passIngresado==pass)
  {
    printf("1- Consultar saldo \n");
    printf("2- Consultar CBU \n");
    printf("3- Salir \n");
    scanf("%i", &consulta);

    switch (consulta)
    {
    case 1:
        printf("Su saldo es de $%i \n", saldo);
        system("pause");
    break;

    case 2:
        printf("Su CBU es %i \n", cbu);
        system("pause");
    break;

    case 3:
    break;

    default:
        printf("Opci%cn no v%clida \n", 162, 160);
    break;
    }
  }
  else
  {
   printf("Se acabaron sus intentos \n");
   system("pause");
  }
  
}