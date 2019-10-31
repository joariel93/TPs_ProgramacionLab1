#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "Employee.h"


Employee* employee_new(){
Employee* emp = (Employee*)malloc( sizeof(Employee));

if(emp != NULL){
	emp->id=0;
	strcpy(emp->nombre," ");
	emp->horasTrabajadas=0;
	emp->sueldo=0;

}
return emp;
}
Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr, char* sueldo)
{

	Employee* emp = (Employee*)malloc( sizeof(Employee));

	if(emp != NULL){
	    emp->id=atoi(idStr);
	    strcpy(emp->nombre, nombreStr);
	    emp->horasTrabajadas=atoi(horasTrabajadasStr);
	    emp->sueldo=atoi(sueldo);

	}
	return emp;
}



