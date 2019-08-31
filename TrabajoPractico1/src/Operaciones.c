/*
 * Operaciones.c
 *
 *  Created on: 31 ago. 2019
 *      Author: Tomas Costilla
 */

#include <stdio.h>
#include <stdlib.h>

int sumaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX+valorY;
	return *presultado;
}

int restaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX-valorY;
	return *presultado;
}

int multiplicaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX*valorY;
	return *presultado;
}

int divideValores(int valorX,int valorY,int* presultado)
{

	*presultado = valorX/valorY;
	return *presultado;
}

int factorialX(int valorX,int* pfact)
{
	int i;
	*pfact = 1;
	for(i=1;i<=valorX;i++)
	{
		*pfact = *pfact * i;
	}
	printf("\nEl factorial de %d es: %d",valorX,*pfact);
	fflush(stdout);
	return 0;
}
int factorialY(int valorY,int* pfact)
{
	int i;
	*pfact = 1;
	for(i=1;i<=valorY;i++)
	{
		*pfact = *pfact * i;
	}
	printf("\nEl factorial de %d es: %d",valorY,*pfact);
	fflush(stdout);
	return 0;
}
