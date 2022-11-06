#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    -Contemplar que haya más de una cuenta de cliente, por ejemplo 5 cuentas.. 
        Cuenta 1 – Pass: 234
        Cuenta 2 – Pass: 5286 
        Cuenta 3 – Pass: 945 
        etc..
    -Que la validación de nro. de cuenta y contraseña válidos sea a través de una función llamada login. 
    - Realizar las operaciones (deposito, extracción, etc) a través de funciones que tengan asignada cada tarea.          
    */

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