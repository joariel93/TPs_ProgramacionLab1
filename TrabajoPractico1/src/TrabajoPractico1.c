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
#define error_Division "\nNo se puede dividir por 0"

int main(void)
{
	int x;
	int y;
	int i = 1;
	int opcion;
	int resultado = 0;

	printf("****************************************************");
	printf("\n***************BIENVENIDO*************************");
	printf("\n***********CALCULADORA HECHA EN #C****************");
	while(i==1)
	{
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
								printf(mensaje,sumaValores(x,y,&resultado));
								fflush(stdout);
								break;

						case 2: printf(PideX);
								fflush(stdout);
								scanf("%d",&x);
								printf(PideY);
								fflush(stdout);
								scanf("%d",&y);
								printf(mensaje,restaValores(x,y,&resultado));
								fflush(stdout);
								break;

						case 3: printf(PideX);
								fflush(stdout);
								scanf("%d",&x);
								printf(PideY);
								fflush(stdout);
								scanf("%d",&y);
								printf(mensaje,multiplicaValores(x,y,&resultado));
								fflush(stdout);
								break;

						case 4: printf(PideX);
								fflush(stdout);
								scanf("%d",&x);
								printf(PideY);
								fflush(stdout);
								scanf("%d",&y);
								if(y == 0)
								{
									printf(error_Division);
									fflush(stdout);
									break;
								}
								else
								{
									printf(mensaje,divideValores(x,y,&resultado));
									fflush(stdout);
									break;
								}

						case 5: printf(PideX);
								fflush(stdout);
								scanf("%d",&x);
								printf(PideY);
								fflush(stdout);
								scanf("%d",&y);
								factorialX(x,&resultado);
								factorialY(y,&resultado);
								fflush(stdout);
								break;
					}
			printf("\n\n***************************************");
			printf("\n\nDesea realizar otro calculo?: ");
			fflush(stdout);
			printf("\n1-SI");
			printf("\n0-NO");
			printf("\nValor: ");
			fflush(stdout);
			scanf("%d",&i);
			fflush(stdout);
			}
	printf("\n\nFIN DEL PROGRAMA");
	fflush(stdout);





	return 0;
}
