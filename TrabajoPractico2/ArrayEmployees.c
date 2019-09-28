#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "ArrayEmployees.h"


/**\brief funcion para inicializar el campo isEmpty en 1
* \param array Empleado de la estructura
* \param size del array
* \return int Return (-1) si existe error, return (0) si esta OK
*
*/
int initEmployees(Empleado array[], int size)
{
    int retorno=-1;
    if(array!= NULL && size>0)
    {
        for(;size>0;size--)
        {
            array[size-1].isEmpty=1;
        }
        retorno=0;
    }
    return retorno;
}

/** \brief Busca el primer lugar vacio en un array
* \param array empleado Array de la estructura empleado
* \param  int size del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return  Return (-1) si no encuentra un lugar vacio o Error  si encuentra una posicion vacia
*
*/
int buscaIsEmpty(Empleado array[], int size, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>=0 && posicion!=NULL)
    {
        for(i=0;i<size;i++)
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
* \param size del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int buscaID(Empleado array[], int size, int valorBuscado, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>=0)
    {
        for(i=0;i<size;i++)
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
* \param size int size del array
* \param posicion int* Puntero a la posicion del array donde se encuentra el valor buscado
* \return int Return (-1) si no encuentra el valor buscado o Error [Invalid length or NULL pointer] - (0) si encuentra el valor buscado
*
*/
int buscaInt(Empleado array[], int size, int valorBuscado, int* posicion)
{
    int retorno=-1;
    int i;
    if(array!= NULL && size>=0)
    {
        for(i=0;i<size;i++)
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
* \param size int size del array
* \param contadorID int* Puntero al ID unico que se va a asignar al nuevo elemento
* \return int Return (-1) si Error [largo no valido o NULL pointer o no hay posiciones vacias] - (0) si se agrega un nuevo elemento exitosamente
*
*/
int addEmployees(Empleado array[], int size, int* contadorID)
{
    int retorno=-1;
    int posicion;
    if(array!=NULL && size>0 && contadorID!=NULL)
    {
        if(buscaIsEmpty(array,size,&posicion)==-1)
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

/** \brief Borra un elemento del array por ID
* \param array fantasma Array de fantasma
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se elimina el elemento exitosamente
*
*/
int removeEmployee(Empleado array[], int size)
{
    int retorno=-1;
    int posicion;
    int id;
    if(array!=NULL && size>0)
    {
        //utn_getUnsignedInt("\nID a cancelar: ","\nError",1,sizeof(int),1,size,1,&id);
        printf("\nIngrese el ID: ");
        scanf("%d",&id);
        if(buscaID(array,size,id,&posicion)==-1)
        {
            printf("\nNo existe este ID");
        }
        else
        {
            array[posicion].isEmpty=0;
            array[posicion].id=0;
            array[posicion].sector=0;
            array[posicion].salary=0;
            strcpy(array[posicion].name,"");
            strcpy(array[posicion].lastName,"");
            retorno=0;
        }
        if(retorno == 0)
        {
            printf("\nSe realizo la baja del Empleado correctamente!");
        }
    }
    return retorno;
}


//Modificar
/** \brief Busca un elemento por ID y modifica sus campos
* \param array fantasma Array de fantasma
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer o no encuentra elementos con el valor buscado] - (0) si se modifica el elemento exitosamente
*
*/
int updateEmployee(Empleado array[], int size)
{
    int retorno=-1;
    int posicion;
    int id;
    int opcion;
    if(array!=NULL && size>0)
    {
        //utn_getUnsignedInt("\nID a modificar: ","\nError",1,sizeof(int),1,size,1,&id);
        printf("\nIngrese el ID a modificar: ");
        scanf("%d",&id);
        if(buscaID(array,size,id,&posicion)==-1)
        {
            printf("\nNo existe este ID");
        }
        else
        {
            do
            {
                printf("\n Posicion: %d\n ID: %d\n 1 - Nombre: %s\n 2 - Apellido: %s\n 3 - Salario: %f\n 4 - Sector: %d \n 5 - Salir",
                       posicion, array[posicion].id,array[posicion].name,array[posicion].lastName,array[posicion].salary,array[posicion].sector);
                //utn_getChar("\n\nElija el campo modificar: ","\nError valor ingresado",'A','Z',1,&opcion);
                printf("\n\nElija la opcion a modificar: ");
                scanf("%d",&opcion);
                switch(opcion)
                {
                    case 1:
                         utn_getName("\nIngrese Nombre nuevo: ","\nError",1,30,1,array[posicion].name);
                        break;
                    case 2:
                        utn_getName("\nIngrese Apellido nuevo: ","\nError",1,30,1,array[posicion].lastName);
                        break;
                    case 3:
                        utn_getFloat("\nIngrese Salario nuevo: ","\nError",1,sizeof(float),0,1,1,&array[posicion].salary);
                        break;
                    case 4:
                        utn_getUnsignedInt("\nIngrese el Sector nuevo: ","\nError",1,sizeof(int),1,1,1,&array[posicion].sector);;
                        break;
                    case 5:
                        break;
                    default:
                        printf("\nOpcion no valida");
                }
            }while(opcion!=5);
            retorno=0;
        }
    }
    return retorno;
}

//Ordenar
/** \brief Ordena por campo XXXXX los elementos de un array
* \param array fantasma Array de fantasma
* \param size int Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se ordena exitosamente
*
*/
int sortEmployees(Empleado array[],int size)
{
    int retorno=-1;
    int i, j;
    char bufferString[30];
    int bufferId;
    int bufferIsEmpty;

    int bufferInt;
    float bufferFloat;
    char bufferLongString[30];

    if(array!=NULL && size>=0)
    {
        for (i = 1; i < size; i++)
        {
            strcpy(bufferString,array[i].lastName);                      //cambiar campo varString
            bufferId=array[i].id;                                   //cambiar campo id
            bufferIsEmpty=array[i].isEmpty;

            bufferInt=array[i].sector;                                //cambiar campo varInt
            bufferFloat=array[i].salary;                            //cambiar campo varFloat
            strcpy(bufferLongString,array[i].lastName);          //cambiar campo varLongString


            j = i - 1;
            while ((j >= 0) && strcmp(bufferString,array[j].name)<0)         //cambiar campo varString                 //Si tiene mas de un criterio se lo agrego, Ej. bufferInt<array[j].varInt
            {                                                                                                               //buffer < campo ascendente   buffer > campo descendente
                strcpy(array[j + 1].name,array[j].name);          //cambiar campo varString
                array[j + 1].id=array[j].id;                                //cambiar campo id
                array[j + 1].isEmpty=array[j].isEmpty;

                array[j + 1].sector=array[j].sector;                        //cambiar campo varInt
                array[j + 1].salary=array[j].salary;                    //cambiar campo varFloat
                strcpy(array[j + 1].lastName,array[j].lastName);  //cambiar campo varLongString

                j--;
            }
            strcpy(array[j + 1].name,bufferString);                     //cambiar campo varString
            array[j + 1].id=bufferId;                                        //cambiar campo id
            array[j + 1].isEmpty=bufferIsEmpty;

            array[j + 1].sector=bufferInt;                                                        //cambiar campo varInt
            array[j + 1].salary=bufferFloat;                                                    //cambiar campo varFloat
            strcpy(array[j + 1].lastName,bufferLongString);                                  //cambiar campo varLongString
        }
        retorno=0;
    }
    return retorno;
}
