

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//#include "utn.h"

#include "ArrayEmployees.h"

#define cantidad 3


int main(void)
{
	int opcion;
	int IDcontador = 0;

	Empleado arrayEmpleado[cantidad];
	//initEmployees(arrayEmpleado,cantidad);

	do
	    {
	        //utn_getUnsignedInt("\n\n1) Alta \n2) Modificar \n3) Baja \n4) Listar \n5) Ordenar \n6) Salir\n",                   //cambiar
	        //              "\nError",1,sizeof(int),1,11,1,&opcion);
			printf("ABM DE EMPLEADOS");
		 	printf("\n1- ALTA: ");
		 	printf("\n1- BAJA: ");
		 	printf("\n1- MODIFICA: ");
		 	printf("\n1- LISTA: ");
	        switch(opcion)
	        {
	            case 1: //Alta
	            	//addEmployees(arrayEmpleado,cantidad,&IDcontador);                   //cambiar
	                break;

	            default:
	                printf("\nOpcion no valida");
	        }
	    }while(opcion!=6);

	    return 0;

}


