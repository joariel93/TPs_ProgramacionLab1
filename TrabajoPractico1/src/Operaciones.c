/*
 * Operaciones.c
 *
 *  Created on: 31 ago. 2019
 *      Author: Tomas Costilla
 */

#include <stdio.h>
#include <stdlib.h>

/**
 *  \brief Recibe el valor A, Valor B y calcula la Suma
 *  \param Valor A
 *  \param Valor B
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return La suma de los Enteros
 */
int sumaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX+valorY;
	return *presultado;
}

/**
 *  \brief Recibe el valor A, Valor B y calcula la Resta
 *  \param Valor A
 *  \param Valor B
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return La Resta de los Enteros
 */
int restaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX-valorY;
	return *presultado;
}

/**
 *  \brief Recibe el valor A, Valor B y calcula la Multiplicacion
 *  \param Valor A
 *  \param Valor B
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return La Multiplicacion de los Enteros
 */
int multiplicaValores(int valorX,int valorY,int* presultado)
{
	*presultado = valorX*valorY;
	return *presultado;
}

/**
 *  \brief Recibe el valor A, Valor B y calcula la Division
 *  \param Valor A
 *  \param Valor B
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return La Division de los Enteros
 */
int divideValores(int valorX,int valorY,int* presultado)
{

	*presultado = valorX/valorY;
	return *presultado;
}

/**
 *  \brief Recibe el valor A  y calcula el factorial
 *  \param Valor A
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return Imprime por consola el Factorial del Valor A
 */
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

/**
 *  \brief Recibe el valor B  y calcula el factorial
 *  \param Valor B
 *  \param Puntero a la variable "Resultado" de la funcion Main
 *  \return Imprime por consola el Factorial del Valor B
 */
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
