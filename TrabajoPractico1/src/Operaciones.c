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

int factorial(int valorX,int valorY,int* presultado)
{

}
