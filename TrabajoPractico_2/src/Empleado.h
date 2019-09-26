/*
 * Empleado.h
 *
 *  Created on: 26 sep. 2019
 *      Author: alumno
 */

#ifndef HEADER_EMPLEADO_H_
#define HEADER_EMPLEADO_H_

#define tamañoText 30

//#define TEXT_SIZE 20


typedef struct
{
	int id;
	 char name[tamañoText];
	 char lastName[tamañoText];
	 float salary;
	 int sector;
	 int isEmpty;
}Empleado;


#endif /* HEADER_EMPLEADO_H_ */

int initEmployees(Empleado array[], int tamaño);
int buscaIsEmpty(Empleado array[], int tamaño, int* posicion);
int buscaID(Empleado array[], int tamaño, int valorBuscado, int* posicion);
int buscaInt(Empleado array[], int tamaño, int valorBuscado, int* posicion);
int addEmployees(Empleado array[], int tamaño, int* contadorID);                          //cambiar fantasma











