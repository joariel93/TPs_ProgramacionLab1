/*
 * ProtOperaciones.h
 *
 *  Created on: 31 ago. 2019
 *      Author: Tomas Costilla
 */

#ifndef PROTOPERACIONES_H_
#define PROTOPERACIONES_H_

/**
 * \brief Recibe dos Valores por parametros y devuelve la Suma
 * \param Valor A y B ingresados por el usuario, puntero a la variable Resultado del Main
 */
int sumaValores(int valorX,int valorY,int* presultado);

/**
 * \brief Recibe dos Valores por parametros y devuelve la Resta
 * \param Valor A y B ingresados por el usuario, puntero a la variable "Resultado" del Main
 */
int restaValores(int valorX,int valorY,int* presultado);

/**
 * \brief Recibe dos Valores por parametros y devuelve la Multiplicacion
 * \param Valor A y B ingresados por el usuario, puntero a la variable Resultado del Main
 */
int multiplicaValores(int valorX,int valorY,int* presultado);

/**
 * \brief Recibe dos Valores por parametros y devuelve la Division
 * \param Valor A y B ingresados por el usuario, puntero a la variable Resultado del Main
 */
int divideValores(int *valorX,int *valorY,int *presultado);

/**
 * \brief Recibe el valor A por parametro y devuelve el factorial
 * \param Valor A y puntero a la variable Resultado del Main
 */
int factorialX(int valorX,int* pfact);

/**
 * \brief Recibe el valor B por parametro y devuelve el factorial
 * \param Valor B y puntero a la variable Resultado del Main
 */
int factorialY(int valorY,int* pfact);


#endif /* PROTOPERACIONES_H_ */
