#include <stdio.h>
#include <stdlib.h>

int numerosID[50];
float pesos[50];
int destinos[50];
int horasPlanificadas[50];
int estados[50];

const int tam = 3;

void cargarEnvios();
void mostrarEnvios(int bandera);
void modificarEstadoDeUnEnvio(int bandera);
void mostrarEnvioParaDestino(int des);
void mostrarEstadosPedidos(int estado);
float buscarmayor();
float buscarmenor();
void mostrarMayoryMenor(int bandera);

void main()
{
    int opcion = 0;
    int des = 0; 
    int estado = 0;
    int bandera=0;

    do
    {
        printf("\n1- Cargar env%cos planificados.", 161);
        printf("\n2- Mostrar env%cos planificados.", 161);
        printf("\n3- Modificar estado de un env%co.", 161);
        printf("\n4- Mostrar env%cos para un destino.", 161);
        printf("\n5- Mostrar los env%cos para un estado.", 161);
        printf("\n6- Mostrar los env%cos de mayor y menor peso.", 161);
        printf("\n7- Salir.\n\n");
        scanf("%i", &opcion);

        if(opcion != 7)
        {
            switch(opcion)
            {
                case 1: 
                    //Cargar envíos planificados
                    cargarEnvios();
                    bandera=1;
                    break;
                case 2: 
                    //Mostrar envíos planificados
                    mostrarEnvios(bandera);
                    break;
                case 3: 
                    //Modificar estado de un envío  
                    modificarEstadoDeUnEnvio(bandera);
                    break;
                case 4: 
                    //Mostrar envíos para un destino
                    if (bandera==0)
                    {
                        printf("\nPrimero debe cargar los Env%cos\n",161);
                    }
                    else
                    {
                        do
                        {
                            printf("Estado a buscar: ");
                            printf("\n1- Rosario");
                            printf("\n2- Funes");
                            printf("\n3- Roldan");
                            printf("\n4- Baigorria");
                            printf("\n");
                            scanf("%i", &des);
                        } while (des>4 || des<1);
                        
                        mostrarEnvioParaDestino(des);
                    }
                    break;
                case 5: 
                    //Mostrar estados de los envíos 
                    if (bandera==0)
                    {
                        printf("\nPrimero debe cargar los Env%cos\n",161);
                    }
                    else
                    {
                        do
                        {
                            printf("Ingrese el estado a imprimir: ");
                            printf("\n0- Pendiente");
                            printf("\n1- Despachado");
                            printf("\n");
                            scanf("%i", &estado);
                        } while (estado>1 || estado<0);
                        
                        mostrarEstadosPedidos(estado);
                    }
                    break;
                case 6: 
                    //Mostrar envíos de mayor y menor peso  
                    mostrarMayoryMenor(bandera);
                    break;
                default:
                    printf("\nLa opci%cn ingresada es inv%clida\n", 162, 160);
            }  
        }

    } while (opcion != 7);
}

void cargarEnvios()
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for(int i = 0; i < tam; i++)
    {
        printf("Env%co %i\n", 161, i+1);
        do
        {
            printf("Nro. de env%co: ", 161);	
            scanf("%d", &numerosID[i]);
        } while (numerosID[i]<1);

        do
        {
            printf("Ingrese el peso: ");
            scanf("%f", &pesos[i]);
        } while (pesos[i]<=0);
        
        do
        {
            printf("Ingrese el destino: ");
            printf("\n1- Rosario");
            printf("\n2- Funes");
            printf("\n3- Roldan");
            printf("\n4- Baigorria");
            printf("\n");
            scanf("%i", &destinos[i]);
        } while (destinos[i]<1 || destinos[i]>4);
        do
        {
            printf("Ingrese la hora: ");
            scanf("%d", &horasPlanificadas[i]);
        } while (horasPlanificadas[i]>22 || horasPlanificadas[i]<8);
        do
        {
            printf("Ingrese el estado: ");
            printf("\n0- Pendiente");
            printf("\n1- Despachado");
            printf("\n");
            scanf("%d", &estados[i]);
        } while (estados[i]!=1 && estados[i]!=0);
        
    }
}

void mostrarEnvios(int bandera)
{
    
    if (bandera==0)
    {
        printf("\nPrimero debe cargar los Env%cos\n",161);
    }
    else
    {
        for(int i = 0; i < tam; i++)
        {
            printf(" %d \t", numerosID[i]);
            printf(" %.2f \t", pesos[i]);
            switch(destinos[i])
            {
                case 1:
                    printf("Rosario");
                    break;
                case 2:
                    printf("Funes");
                    break;
                case 3:
                    printf("Roldan");
                    break;
                case 4:
                    printf("Baigorria");
                    break; 
                default:
                    printf("Destino inv%clido\n", 160);
            }
            printf("\t");
            printf(" %d hs \t", horasPlanificadas[i]);

            switch(estados[i])
            {
                case 0:
                    printf("Pendiente");
                    break;
                case 1:
                    printf("Despachado");
                    break;
                default:
                    printf("Estado inv%clido\n", 160);
            }
            
            printf("\n");    
        }
    } 
}

void modificarEstadoDeUnEnvio(int bandera)
{
    if (bandera==0)
    {
        printf("\nPrimero debe cargar los Env%cos\n",161);
    }
    else
    {
        int nroID = 0, est = 0;
        int encontrado = 0;

        printf("Nro del env%co a modificar:\n", 161);	
        scanf("%d", &nroID);

        for(int i = 0; i < tam; i++)
        {
            if (nroID==numerosID[i])
            {
                if (estados[i]==0)
                {
                    estados[i]=1;
                }
                else
                {
                    estados[i]=0;
                }
                printf("Se modific%c el estado del env%co\n", 162, 161);
                encontrado=1;
            }
        }
        if (encontrado==0)
        {
            printf("El nro de env%co no existe\n",161);
        }
    }
    
}

void mostrarEnvioParaDestino(int des)
{
    int verificar=0;

    for(int i = 0; i < tam; i++)
    {
        if (des==destinos[i])
        {
            printf(" %d \t", numerosID[i]);
            printf(" %.2f \t", pesos[i]);
            switch(destinos[i])
            {
                case 1:
                    printf("Rosario");
                    break;
                case 2:
                    printf("Funes");
                    break;
                case 3:
                    printf("Roldan");
                    break;
                case 4:
                    printf("Baigorria");
                    break; 
                default:
                    printf("Destino inv%clido\n", 160);
            }
            printf("\t");
            printf(" %d hs \t", horasPlanificadas[i]);

            switch(estados[i])
            {
                case 0:
                    printf("Pendiente");
                    break;
                case 1:
                    printf("Despachado");
                    break;
                default:
                    printf("Estado inv%clido\n", 160);
            }
            
            printf("\n");
            verificar=1;    
        }
    }
    if (verificar==0)
    {
        printf("\nNo se realizaron env%cos a esa localidad\n",161);
    }
    
}

void mostrarEstadosPedidos(int estado)
{
    int verificar=0;

    for(int i = 0; i < tam; i++)
    {
        if (estado==estados[i])
        {
            printf(" %d \t", numerosID[i]);
            printf(" %.2f \t", pesos[i]);
            switch(destinos[i])
            {
                case 1:
                    printf("Rosario");
                    break;
                case 2:
                    printf("Funes");
                    break;
                case 3:
                    printf("Roldan");
                    break;
                case 4:
                    printf("Baigorria");
                    break; 
                default:
                    printf("Destino inv%clido\n", 160);
            }
            printf("\t");
            printf(" %d hs \t", horasPlanificadas[i]);

            switch(estados[i])
            {
                case 0:
                    printf("Pendiente");
                    break;
                case 1:
                    printf("Despachado");
                    break;
                default:
                    printf("Estado inv%clido\n", 160);
            }
                
            printf("\n");
            verificar=1;    
        }
    }
    if (verificar==0)
    {
        printf("\nYa no hay mas env%cos en ese estado\n",161);
    }
    
}

float buscarmayor()
{
    float mayor=pesos[0];

    for(int i = 0; i < tam; i++)
    {
        if (pesos[i]>mayor)
        {
            mayor=pesos[i];
        }
    }
    return mayor;
}

float buscarmenor()
{
    float menor=pesos[0];

    for(int i = 0; i < tam; i++)
    {
        if (pesos[i]<menor)
        {
            menor=pesos[i];
        }
    }
    return menor;
}

void mostrarMayoryMenor(int bandera)
{
    if (bandera==0)
    {
        printf("\nPrimero debe cargar los Env%cos\n",161);
    }
    else
    {
        float mayor;
        float menor;

        menor=buscarmenor();
        mayor=buscarmayor();

        for(int i = 0; i < tam; i++)
        {
            if (pesos[i]==mayor || pesos[i]==menor)
            {
                printf(" %d \t", numerosID[i]);
                printf(" %.2f \t", pesos[i]);
                switch(destinos[i])
                {
                    case 1:
                        printf("Rosario");
                        break;
                    case 2:
                        printf("Funes");
                        break;
                    case 3:
                        printf("Roldan");
                        break;
                    case 4:
                        printf("Baigorria");
                        break; 
                    default:
                        printf("Destino inv%clido\n", 160);
                }
                printf("\t");
                printf(" %d hs \t", horasPlanificadas[i]);

                switch(estados[i])
                {
                    case 0:
                        printf("Pendiente");
                        break;
                    case 1:
                        printf("Despachado");
                        break;
                    default:
                        printf("Estado inv%clido\n", 160);
                }
                
                printf("\n");
            }
        }
    }
}