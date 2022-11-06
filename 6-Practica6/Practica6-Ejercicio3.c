#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
  3. Crear una función que devuelva la primera letra de una cadena de texto.
*/

char texto(char cadena[]);

void main()
{
  char cadena[]="", respuesta;

  printf("Ingrese una cadena\n");
  scanf("%s", &cadena);
    
  respuesta=texto(cadena);

  printf("El valor retornado es %c", respuesta);
}

//función texto

char texto(char cadena[])
{
  char respuesta;

  respuesta=cadena[0];
    
  return respuesta;
}
