/*
 * Employees.c
 *
 *  Created on: 26 sep. 2019
 *      Author: alumno
 */

//#include <string.h>
#include <stdio.h>
#include <stdlib.h>

//#include "ArrayEmployees.h"


/**\brief funcion para inicializar el campo isEmpty en 1
* \param array Empleado de la estructura
* \param tamaño del array
* \return int Return (-1) si existe error, return (0) si esta OK
*
*/
int initEmployees(Empleado array[], int tamaño)
{
    int retorno=-1;
    if(array!= NULL && tamaño>0)
    {
        for(;tamaño>0;tamaño--)
        {
            array[tamaño-1].isEmpty=1;
        }
        retorno=0;
    }
    return retorno;
}

/** \brief Busca el primer lugar vacio en un array
* \param array empleado Array de la estructura empleado
* \param  int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return  Return (-1) si no encuentra un lugar vacio o Error  si encuentra una posicion vacia
*
*/
int buscaIsEmpty(Empleado array[], int tamaño, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && tamaño>=0 && posicion!=NULL)
    {
        for(i=0;i<tamaño;i++)
        {
            if(array[i].isEmpty==1)
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}

/** \brief Busca un ID en un array y devuelve la posicion en que se encuentra
* \param array Empleado Array de Empleado
* \param Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int buscaID(Empleado array[], int tamaño, int valorBuscado, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && tamaño>=0)
    {
        for(i=0;i<tamaño;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].id==valorBuscado)
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}

/** \brief Busca un int en un array y devuelve la posicion en que se encuentra
* \param array fantasma Array de fantasma
* \param size int Tamaño del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int buscaInt(Empleado array[], int tamaño, int valorBuscado, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && tamaño>=0)
    {
        for(i=0;i<tamaño;i++)
        {
            if(array[i].isEmpty==1)
                continue;
            else if(array[i].sector==valorBuscado)
            {
                retorno=0;
                *posicion=i;
                break;
            }
        }
    }
    return retorno;
}


/** \brief Solicita los datos para completar la primer posicion vacia de un array
* \param array fantasma Array de fantasma
* \param size int Tamaño del array
* \param contadorID int* Puntero al ID unico que se va a asignar al nuevo elemento
* \return int Return (-1) si Error [largo no valido o NULL pointer o no hay posiciones vacias] - (0) si se agrega un nuevo elemento exitosamente
*
*/
int addEmployees(Empleado array[], int tamaño, int* contadorID)
{
    int retorno=-1;
    int posicion;
    if(array!=NULL && tamaño>0 && contadorID!=NULL)
    {
        if(buscaIsEmpty(array,tamaño,&posicion)==-1)
        {
            printf("\nNo hay lugares vacios");
        }
        else
        {
            //(*contadorID)++;
            array[posicion].id=*contadorID;
            array[posicion].isEmpty=0;
            printf("\nIngrese nombre: ");
            scanf("%s",&array[posicion].name);
            printf("\nIngrese apellido: ");
            scanf("%s",&array[posicion].lastName);
            printf("\nIngrese salario: ");
            scanf("%f",&array[posicion].salary);
            printf("\nIngrese sector: ");
            scanf("%d",&array[posicion].sector);
            printf("\n Posicion: %d\n ID: %d\n Nombre: %s\n Apellido: %s \n Salario: %f \n Sector: %d",
                   posicion, array[posicion].id,array[posicion].name,array[posicion].lastName,array[posicion].salary,array[posicion].sector);
            (*contadorID)++;
            retorno=0;
        }
    }

    return retorno;
}
