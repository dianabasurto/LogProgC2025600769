#include<stdio.h>

int main (){
	int pizza;
	printf("Que pizza va a querer?");
	printf("Tenemos las siguientes opciones:");
	printf("1. vegetariana 2. no vegetariana");
	scanf("%d", & pizza);
	if (pizza==1){
		printf("los ingredientes disponibles son: pimiento y tofu");
	}
	else if(pizza==2){
		printf("los ingredientes disponibles son: peperoni, jamon y salmon");
	}
	else if(pizza>=3){
		printf("No disponible");
		}
 return 0;
 }
