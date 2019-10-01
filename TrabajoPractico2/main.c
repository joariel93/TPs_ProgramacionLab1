
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "ArrayEmployees.h"

#define cantidad 3

int main(void)
{
	int opcion;
	int IDcontador = 0;

	Empleado arrayEmpleado[cantidad];
	initEmployees(arrayEmpleado,cantidad);
     //utn_getUnsignedInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n",
	        //              "\nError",1,sizeof(int),1,11,1,&opcion);
	printf("ABM DE EMPLEADOS");
	printf("\n1- ALTA: ");
	printf("\n2- BAJA: ");
	printf("\n3- MODIFICA: ");
	printf("\n4- ORDENAR: ");
   printf("\n5- SALIR: ");
	do
	    {   printf("\nIngrese una opcion: ");
            scanf("%d",&opcion);
	        switch(opcion)
	        {
	            case 1:
	            	addEmployees(arrayEmpleado,cantidad,&IDcontador);
	                break;
                case 2:
	            	removeEmployee(arrayEmpleado,cantidad);
	                break;
                case 3:
	            	updateEmployee(arrayEmpleado,cantidad);
	                break;
                case 4:
	            	sortEmployees(arrayEmpleado,cantidad);
	                break;
	            case 5:
	                printf("\nFin del Programa");
	        }
	    }while(opcion!=5);
	    return 0;

}


