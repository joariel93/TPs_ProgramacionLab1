#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "LinkedList.h"
#include "Employee.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListEmployee)
{

	FILE *pArchivo;
	int retorno=0;
	int cantidadLeida,longitudTexto;
	char texto[50];
	char bufId[20];
	char bufNombre[20];
	char bufHorasTrabajadas[20];
	char bufSueldo[20];
	int i;

	int id;
	char nom[20];
	int horas;
	int sueldo;

	if((pArchivo=fopen(path,"r+"))==NULL)
	{
		printf("El archivo no puede ser abierto");
		retorno=-1;
	}
	while(!feof(pArchivo))
	    {
		//\n
		//%[^,],%[^,],%[^,],%[^,]
	     fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",bufId,bufNombre,bufHorasTrabajadas,bufSueldo);
	   // fprintf(pArchivo,"%[^,]",texto);}
	    printf("%s %s %s %s \n",bufId,bufNombre,bufHorasTrabajadas,bufSueldo);
	    }

    return retorno;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee)
{


	FILE *pArchivo;
	int retorno=0;
	int cantidadLeida,longitudTexto;
	char texto[50];
	char bufId;
	char bufNombre[128];
	char bufHorasTrabajadas;
	char bufSueldo;

	if((pArchivo=fopen(path,"r+"))==NULL)
	{
		printf("El archivo no puede ser abierto");
		retorno=-1;
	}
	while(!feof(pArchivo))
	    {
	    cantidadLeida = fread(texto ,sizeof (char), longitudTexto , pArchivo );
	    printf("El texto leido es: %s", texto) ;
	    fprintf(pArchivo,"%[^,]",texto);
	    }

    return retorno;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_addEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_editEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_removeEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_ListEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_sortEmployee(LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee)
{
    return 1;
}
