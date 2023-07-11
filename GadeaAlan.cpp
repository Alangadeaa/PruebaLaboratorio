#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	
	srand(time(NULL));
	
	int codigoMeda[10];
	int precioEnva[10];
	int precioMax, gananciasTot1 = 0, gananciasTot2 = 0, gananciasTot3 = 0, gananciasTot4 = 0, gananciasTot5 = 0, gananciasTot6 = 0, gananciasTot7 = 0, gananciasTot8 = 0, gananciasTot9 = 0, gananciasTot10 = 0;
	int cantidadTot1 = 0, cantidadTot2 = 0, cantidadTot3 = 0, cantidadTot4 = 0, cantidadTot5 = 0, cantidadTot6 = 0, cantidadTot7 = 0, cantidadTot8 = 0, cantidadTot9 = 0, cantidadTot10 = 0;
	int Farmacia[3] = {0};
	
	printf("Escriba el precio maximo que quiere que haya: \n");
	scanf("%d", &precioMax);
	
	for(int i = 0; i < 10; i++)
   {
       precioEnva[i]=rand()%(precioMax);
   }

    for(int i = 0; i < 10; i++){
		precioEnva[i];
	}
	
	codigoMeda[0] = precioEnva[0];
	codigoMeda[1] = precioEnva[1];
	codigoMeda[2] = precioEnva[2];
	codigoMeda[3] = precioEnva[3];
	codigoMeda[4] = precioEnva[4];
	codigoMeda[5] = precioEnva[5];
	codigoMeda[6] = precioEnva[6];
	codigoMeda[7] = precioEnva[7];
	codigoMeda[8] = precioEnva[8];
	codigoMeda[9] = precioEnva[9];
	
	
	
	while(1){
		
		int codMed;
		int cantidad;
		int farmaci;
		
		printf("Eliga el codgio de medicamento del 1-10 o 0 para terminar: \n");
		scanf("%d", &codMed);
		
		if( codMed == 0){
			break;
		}
		
		printf("Eliga la cantidad que quiere: \n");
		scanf("%d", &cantidad);
		
			printf("Eliga una farmacia del 1-3: \n");
		scanf("%d", &farmaci);
	
			if( farmaci > 3 || farmaci <= 0){
				printf("Eliga del 1 al 3\n");
			continue;
		}
		
		
		
		
		switch(codMed){
			
			case 1:
				 gananciasTot1 += codigoMeda[0] * cantidad;
				 cantidadTot1 += cantidad;
			break;
			case 2:
				gananciasTot2 += codigoMeda[1] * cantidad;
				cantidadTot2 += cantidad;
			break;
			case 3:
				gananciasTot3 += codigoMeda[2] * cantidad;
				cantidadTot3 += cantidad;
			break;
			case 4:
				gananciasTot4 += codigoMeda[3] * cantidad;
				cantidadTot4 += cantidad;
			break;
			case 5:
				gananciasTot5 += codigoMeda[4] * cantidad;
				cantidadTot5 += cantidad;
			break;
			case 6:
				gananciasTot6 += codigoMeda[5] * cantidad;
				cantidadTot6 += cantidad;
			break;
			case 7:
				gananciasTot7 += codigoMeda[6] * cantidad;
				cantidadTot7 += cantidad;
			break;
			case 8:
				gananciasTot8 += codigoMeda[7] * cantidad;
				cantidadTot8 += cantidad;
			break;
			case 9:
				gananciasTot9 += codigoMeda[8] * cantidad;
				cantidadTot9 += cantidad;
			break;
			case 10:
				gananciasTot10 += codigoMeda[9] * cantidad;
				cantidadTot10 += cantidad;
			break;
			
			default:
				printf("Algun dato esta mal ingresado\n");
			continue;
			
		break;
		}
		
		Farmacia[farmaci - 1] += cantidad;
	}
	
	
	printf("Producto 1) Ganancias totales = %d, canitdad total %d\n", gananciasTot1, cantidadTot1);
	printf("Producto 2) Ganancias totales = %d, canitdad total %d\n", gananciasTot2, cantidadTot2);
	printf("Producto 3) Ganancias totales = %d, canitdad total %d\n", gananciasTot3, cantidadTot3);
	printf("Producto 4) Ganancias totales = %d, canitdad total %d\n", gananciasTot4, cantidadTot4);
	printf("Producto 5) Ganancias totales = %d, canitdad total %d\n", gananciasTot5, cantidadTot5);
	printf("Producto 6) Ganancias totales = %d, canitdad total %d\n", gananciasTot6, cantidadTot6);
	printf("Producto 7) Ganancias totales = %d, canitdad total %d\n", gananciasTot7, cantidadTot7);
	printf("Producto 8) Ganancias totales = %d, canitdad total %d\n", gananciasTot8, cantidadTot8);
	printf("Producto 9) Ganancias totales = %d, canitdad total %d\n", gananciasTot9, cantidadTot9);
	printf("Producto 10) Ganancias totales = %d, canitdad total %d\n\n", gananciasTot10, cantidadTot10);
	printf("Ventas de farmacia 1  %d", &Farmacia[0]);
	printf("Ventas de farmacia 2  %d", &Farmacia[1]);
	printf("Ventas de farmacia 3  %d", &Farmacia[3]);

	printf("Precios de los productos del 1 a 10:  %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", precioEnva[0], precioEnva[1], precioEnva[2], precioEnva[3], precioEnva[4], precioEnva[5], precioEnva[6], precioEnva[7], precioEnva[8], precioEnva[9]);
    
	
	return 0;
}
