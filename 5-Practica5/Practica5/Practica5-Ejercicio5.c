#include <stdio.h>
#include <stdlib.h>

void main()
{
    /*
    5. Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
    Cada ítem del vector representa la inflación de un mes de tal manera que el primer ítem del vector que es 
    0.8 representa la inflación de Enero, y el último ítem del vector que es 0.9 representa la inflación de diciembre. 
    Se pide:
    - Informar la inflación anual
    - Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 = 0.1
    - Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 = 0.9 
    */

    float inflacion[ ] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float mayor=0, menor=1, anual=0;
    int i, mesmayor, mesmenor;

    for(i=0; i<12; i++)
    {
        anual=anual+inflacion[i];
        
       	if (inflacion[i]<menor)
		{
			menor = inflacion[i];
			mesmenor = i+1;
		}
		
		if (inflacion[i]>mayor) 
		{
			mayor = inflacion[i];
			mesmayor = i+1;
		}
    }

    printf("La inflaci%cn anual es de %0.2f \n", 162, anual);
    printf("La inflaci%cn m%cs baja fue en el mes %i con una inflaci%cn de %0.2f \n", 162, 160, mesmenor, 162, menor);
    printf("La inflaci%cn m%cs alta fue en el mes %i con una inflaci%cn de %0.2f \n", 162, 160, mesmayor, 162, mayor);

    system("pause");

}