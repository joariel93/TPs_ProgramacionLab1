#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "ArrayEmployees.h"


/*int verificaVacio(Empleado array[],int size)
{
    int retorno = -1;
    if(array != NULL)
    {
        retorno = 0;
    }
    else{
        printf("\nSe debe Realizar el alta de Empleados antes que realizar otra operacion!");
    }
    return retorno;
}*/




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
            array[size-1].id=0;
            array[size-1].sector=0;
            array[size-1].salary=0;
            strcpy(array[size-1].name,"");
            strcpy(array[size-1].lastName,"");

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
int findEmployeeById(Empleado array[], int size, int valorBuscado, int* posicion)
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
       // if(verificaVacio(array,size)==0)
       // {
                //utn_getUnsignedInt("\nID a cancelar: ","\nError",1,sizeof(int),1,size,1,&id);
            printf("\nIngrese el ID: ");
            scanf("%d",&id);
            if(findEmployeeById(array,size,id,&posicion)==-1)
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
        if(findEmployeeById(array,size,id,&posicion)==-1)
        {
            printf("\nNo existe este ID");
        }
        else
        {
            do
            {
                printf("\n Posicion: %d\n ID: %d\n 1 - Nombre: %s\n 2 - Apellido: %s\n 3 - Salario: %f\n 4 - Sector: %d \n 5 - Salir",
                       posicion, array[posicion].id,array[posicion].name,array[posicion].lastName,array[posicion].salary,array[posicion].sector);
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
/** \brief Lista los empleados
* \param array Empleado
* \param Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) se lista exitosamente
*
*/
int printEmployees(Empleado array[], int size)
{
    int retorno=-1;
    int i;
    int j;
    int contar = 0;
    float sumaProm = 0;
    float total;
    if(array!=NULL && size>0)
    {   printf("\nID   Nombre   Apellido   Salario   Sector");
        for(i=0;i<size;i++)
        {
            printf("\n%d   %s   %s   %f   %d",array[i].id,array[i].name,array[i].lastName,array[i].salary,array[i].sector);
            sumaProm += array[i].salary;
        }
        total=sumaProm/size;

        for(j=0;j<size;j++)
        {
            if(array[j].salary>total)
            {
                contar = contar + 1;
            }
        }
        printf("\n\nLa cantidad de empleados que superan el promedio es de: %d",contar);
        printf("\n\nLa suma de los salarios es de: %f",sumaProm);
        printf("\n\nEl promedio de los salarios es de: %f",total);
        retorno=0;
    }
    return retorno;
}
int submenu(char* msg1,char* msg2)
{
    printf(msg1);
    printf(msg2);
    return 0;
}

//Ordenar
/** \brief Ordena por apellido los elementos de un array
* \param array Empleado
* \param Tamaño del array
* \return int Return (-1) si Error [largo no valido o NULL pointer] - (0) si se ordena exitosamente
*
*/
int sortEmployees(Empleado array[],int size)
{
	int flagDesordenado = -1;
	int i;
	int auxint;
	float auxfloat;
	int auxsect;
	char auxNombre[30];
	char auxiliarApellidoStr[30];


	while(flagDesordenado==-1)
	{
		flagDesordenado = 0;
		for(i=0;i<size-1;i++)
		{	//Por apellido
			if(strcmp(array[i].lastName,array[i+1].lastName)>0)
			{
				auxint = array[i].id;
				array[i].id = array[i+1].id;
				array[i+1].id = auxint;

				auxfloat = array[i].salary;
				array[i].salary = array[i+1].salary;
				array[i+1].salary = auxfloat;

				auxsect = array[i].sector;
				array[i].sector = array[i+1].sector;
				array[i+1].sector = auxsect;

				strcpy(auxiliarApellidoStr,array[i].lastName);
				strcpy(array[i].lastName,array[i+1].lastName);
				strcpy(array[i+1].lastName,auxiliarApellidoStr);

				strcpy(auxNombre,array[i].name);
				strcpy(array[i].name,array[i+1].name);
				strcpy(array[i+1].name,auxNombre);

				flagDesordenado = -1;
			}
		}
		//return 0;
	}
	printf("\nSe han ordenado con exito los datos!!");
    return 0;
}
