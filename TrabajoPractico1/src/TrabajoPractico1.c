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
#include "ProtOperaciones.h"

#define PideX "\nValor uno: "
#define PideY "\nValor dos: "
#define mensaje "\nEl resultado es: %d"

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
	fflush(stdout);//Se agrega este comando ya que en Windows no me funcionaba bien la consola
	scanf("%d",&opcion);

	switch(opcion)
	{
		case 1: printf(PideX);
				fflush(stdout);
				scanf("%d",&x);
				printf(PideY);
				fflush(stdout);
				scanf("%d",&y);
				printf(mensaje,sumaValores(x,y));
				fflush(stdout);
				break;

		case 2: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
				break;

		case 3: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
				break;

		case 4: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
				break;

		case 5: printf(PideX);
				scanf("%d",&x);
				printf(PideY);
				scanf("%d",&y);
				break;
	}



	return 0;
}
