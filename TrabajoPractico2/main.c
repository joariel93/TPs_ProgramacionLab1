
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
	int insert=0;

	Empleado arrayEmpleado[cantidad];
	initEmployees(arrayEmpleado,cantidad);
	printf("****BIENVENIDO AL SISTEMA*****");
	printf("\n\n****** ABM DE EMPLEADOS *****");
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
                    insert = 1;
	            	addEmployees(arrayEmpleado,cantidad,&IDcontador);
	                break;
                case 2:
                    if(insert==1)
                    {
                      removeEmployee(arrayEmpleado,cantidad);
                    }
                    else{
                        msgError();
                        }
	                break;
                case 3:
                     if(insert==1)
                    {
                      updateEmployee(arrayEmpleado,cantidad);
                    }
                   else{
                        msgError();
                        }
	                break;
                case 4:
                    if(insert==1)
                    {
                      sortEmployees(arrayEmpleado,cantidad);
                    }
                    else{
                        msgError();
                        }
	                break;

                case 5:
                     if(insert==1)
                    {
                      printEmployees(arrayEmpleado,cantidad);
                    }
                     else
                     {
                        msgError();
                      }
	                break;
	            case 6:
	                printf("\nFin del Programa");
	        }
	    }while(opcion!=6);
	    return 0;

}


