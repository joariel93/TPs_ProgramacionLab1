/*
 ============================================================================
 Name        : TrabajoPractico1.c
 Author      : Tomas Costilla Chavez
 Version     :
 Copyright   : Tomas Costilla Chavez
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PideX "Valor uno: "
#define PideY "\nValor dos: "

int main(void)
{
	int x;
	int y;
	int opcion;

	printf("****************************************************");
	printf("\n***************CALCULADORA HECHA EN #C**************");
	printf("\n****************************************************");
	printf("\n\nEliga una opcion de Calculo...");
	printf("\n\n1-Suma");
	printf("\n2-Resta");
	printf("\n3-Multiplicacion");
	printf("\n4-Division");
	printf("\n5-Factorial");
	printf("\n\nIngrese su opcion aqui: ");
	scanf("%d",&opcion);

	switch(opcion)
	{
		case 1: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
		case 2: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
	}


	return 0;
}
