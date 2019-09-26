#ifndef ARRAYEMPLOYEES_H_INCLUDED
#define ARRAYEMPLOYEES_H_INCLUDED

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

#endif // ARRAYEMPLOYEES_H_INCLUDED
