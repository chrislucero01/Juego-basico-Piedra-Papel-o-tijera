
/*Piedra Papel o Tijera*/

#include <stdio.h>
#include <math.h>

int main()

	{	
		
		int opcion;

	printf("\n**Piedra Papel o Tijera**\n\nSeleccione un numero de acuerdo a su opcion");

		do
		{
			printf("\n 1. Piedra", 1);
			printf("\n 2. Papel", 2);
			printf("\n 3. Tijera", 3);
			printf("\n 4. Para salir\n");
			scanf("%d",&opcion);

			switch(opcion)
				{
					case 1: printf("***Usted a elegido: Piedra***",1);
							printf("\nComputadora elige: Papel",1);
							printf("\nHa perdido intente nuevamente.\n",1);
							break;

					case 2: printf("***Usted a elegido: Papel***",2);
							printf("\nComputadora elige: Tijera",2);
							printf("\nHa perdido intente nuevamente.\n",2);
							break;

					case 3: printf("***Usted a elegido: Tijera***",3);
							printf("\nComputadora elige: Piedra",3);
							printf("\nHa perdido intente nuevamente.\n",3);
							break;
				}

		}	while ( opcion != 4 );
	}
