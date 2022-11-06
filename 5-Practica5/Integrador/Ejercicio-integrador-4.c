#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{

    // Ejercicio integrador 4

   int tam=100;
   int i, j, cant=0, opcion, bandera=0, banderaigual, respuesta, productoincorrecto, codigobuscar, codigonuevo, codigo;
   int barras[tam];
   int stock[tam];
   char descripcion[100][200];
   float nota[tam];

    do 
   {   
        printf("\nIngrese una de las siguientes opciones: \n");
        printf("1. Cargar productos. \n");
        printf("2. Modificar stock. \n");
        printf("3. Mostrar productos sin stock. \n");
        printf("4. Listar productos \n");
        printf("5. Salir \n");

        scanf("%i", &opcion);

        while (opcion>5 || opcion<1)
        {
            printf("\nOpci%cn ingresada no v%clida \n", 162, 160);
            printf("\nIngrese una de las siguientes opciones: \n");
            printf("1. Cargar productos. \n");
            printf("2. Modificar stock. \n");
            printf("3. Mostrar productos sin stock. \n");
            printf("4. Listar productos \n");
            printf("5. Salir \n");

            scanf("%i", &opcion);
        }

        switch (opcion)
        {
            case 1:
                bandera=1;
                for (i=0; i<tam; i++)
                {
                    do
                    {
                        printf("Ingrese el c%cdigo de barras del producto %i\n",162, i+1);
                        scanf("%i", &codigo);

                        banderaigual=1;
                        for (j = 0; j < 100; j++)
                        {
                            if (codigo == barras[j])
                            {
                                printf("El codigo de barras ya existe, intente nuevamente:\n");
                                banderaigual = 0;  
                            }
                        }
                        
                    }while (banderaigual==0);

                    barras[i]=codigo;

                    printf("Ingrese la descripci%cn del producto %i\n",162, i+1);
                    scanf("%s", &descripcion[i]);

                    printf("Ingrese el stock del producto %i\n", i+1);
                    scanf("%i", &stock[i]);

                    printf("Desea ingresar otro producto? \n");
                    printf("1- Si \n");
                    printf("0- No \n");
		            scanf("%i", &respuesta);

		            while ((respuesta!=0 && respuesta!=1)) 
                    {
                        printf("Ingrese una respuesta v%clida \n", 160);
			            printf("Desea ingresar otro producto? \n", 163);
                        printf("1- Si \n");
                        printf("0- No \n");
			            scanf("%i", &respuesta);
		            }

                    cant=cant+1;

                    if (respuesta==0)
                    {
                        break;
                    }
                }
            break;
        
            case 2:
            
                if (bandera==0)
                {
                    printf("\nPrimero debe cargar los productos \n");
                }
                else
                {
                    do
                    {
                        productoincorrecto=1;

                        printf("Ingrese el c%cdigo de barras del producto que desea cambiar el stock\n",162);
                        scanf("%i", &codigobuscar);

                        printf("Ingrese el nuevo stock del producto \n");
                        scanf("%i", &codigonuevo);

                        for (i = 0; i < tam; i++)
                        {
                            if (codigobuscar==barras[i])
                            {
                                barras[i]=codigonuevo;
                                productoincorrecto=0;
                            }
                        }
                        
                        if (productoincorrecto==1)
                        {
                            printf("Electrodom%cstico inexistente \n",130);
                        }

                    } while (productoincorrecto==1);
                }
                
                
            break;

            case 3:
                if (bandera==0)
                {
                    printf("\nPrimero debe cargar los productos \n");
                }
                else
                {
                    for (i=0; i<cant; i++)
                    {
                        if (stock[i]==0)
                        {
                            printf("C%cdigo de barras: %i descripci%cn: %s Stock: %i\n",162, barras[i], 162, descripcion[i], stock[i]);
                        }
                        
                    }
                    
                }
            break;

            case 4:
                for (i=0; i<cant; i++)
                {
                    printf("C%cdigo de barras: %i descripci%cn: %s Stock: %i\n",162, barras[i], 162, descripcion[i], stock[i]);
                }
                
            break;

            case 5:
            break;

            default:
                printf("Ingrese una opci%cn v%clida \n", 162, 160);
            break;
        }

    }while (opcion!=5);
}