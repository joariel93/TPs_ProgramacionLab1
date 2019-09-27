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


#endif // ARRAYEMPLOYEES_H_INCLUDED
int initEmployees(Empleado array[], int size);
int buscaIsEmpty(Empleado array[], int size, int* posicion);
int buscaID(Empleado array[], int size, int valorBuscado, int* posicion);
int buscaInt(Empleado array[], int size, int valorBuscado, int* posicion);
int addEmployees(Empleado array[], int size, int* contadorID);
