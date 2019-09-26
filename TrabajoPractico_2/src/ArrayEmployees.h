/*
 * ArrayEmployees.h
 *
 *  Created on: 26 sep. 2019
 *      Author: alumno
 */


#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

//#define tamañoText 30


 typedef struct
{
	int id;
	 char name[30];
	 char lastName[30];
	 float salary;
	 int sector;
	 int isEmpty;
}Empleado;


int initEmployees(Empleado array[], int tamaño);
int buscaIsEmpty(Empleado array[], int tamaño, int* posicion);
int buscaID(Empleado array[], int tamaño, int valorBuscado, int* posicion);
int buscaInt(Empleado array[], int tamaño, int valorBuscado, int* posicion);
int addEmployees(Empleado array[], int tamaño, int* contadorID);

#endif /* ARRAYEMPLOYEES_H_ */









