
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "ArrayEmployees.h"

#define cantidad 3

int main(void)
{
	int opcion;
	int IDcontador = 1;

	Empleado arrayEmpleado[cantidad];
	initEmployees(arrayEmpleado,cantidad);
	printf("ABM DE EMPLEADOS");
	do
	    {
	        printf("\n\n1- ALTA ");
            printf("\n2- BAJA ");
            printf("\n3- MODIFICA ");
            printf("\n4- ORDENAR ");
            printf("\n5- LISTAR ");
            printf("\n6- SALIR ");
	        printf("\nIngrese una opcion: ");
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
                    printEmployees(arrayEmpleado,cantidad);
	                break;
	            case 6:
	                printf("\nFin del Programa");
	        }
	    }while(opcion!=6);
	    return 0;

}


