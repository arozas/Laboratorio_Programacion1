/*
 ============================================================================
 Name        : Clase_06_Programacion_Estructuras.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Static.h"

#define MAX_CHARS 30
//DECLARAR ESTRUCTURAS
//las estructuras se declaran en la biblioteca, o antes del main y antes de los
//prototipos que hagan uso de esas estructuras. por convención se usa la "e" o la "s" antes del nombre
// las estructuras son un tipo de dato, un una estructura de datos.
//Las "variables" dentro de las estructuras se llaman campos o miembros.
// a diferencia de los objetos, que tienen atributos, las estructuras tienen parametros.
//
//PALABRA RESERVADA		NOMBRE
struct 					eEmpleado0
{
	//CAMPOS o MIEMBROS
	int 	legajo;
	char 	nombre[MAX_CHARS];
	int 	dni;
	float 	sueldo;
};

// FORMA ALTERNATIVA
typedef struct
{
	//CAMPOS o MIEMBROS
	int 	legajo;
	char 	nombre[MAX_CHARS];
	int 	dni;
	float 	sueldo;
}eEmpleado;

int main(void)
{
	//CREO LA ESTRUCTURA (MI NUEVO TIPO DE DATO)
	eEmpleado miEmpleado;

	//CARGO MI ESTRUCTURA.
	miEmpleado.dni = 37687769;
	miEmpleado.legajo = 1000;
	strcpy(miEmpleado.nombre, "Mathias");
	miEmpleado.sueldo = 500.50;

	//MUESTRO MI ESTRUCTURA
	// se accede a los campos con el operador punto (.).
	puts("EMPLEADO");
	printf("LEGAJO: %d\n", miEmpleado.legajo);
	printf("NOMBRE: %s\n", miEmpleado.nombre);
	printf("DNI: %d\n", miEmpleado.dni);
	printf("SUELDO: %.2f\n", miEmpleado.sueldo);

	eEmpleado misEmpleados[20];

	for (int i = 0; i < 10; i++)
	{
		// se accede a los campos con el operador punto (.).
			puts("EMPLEADO %d", i+1);
			printf("LEGAJO: %d\n", miEmpleado.legajo);
			printf("NOMBRE: %s\n", miEmpleado.nombre);
			printf("DNI: %d\n", miEmpleado.dni);
			printf("SUELDO: %.2f\n", miEmpleado.sueldo);
	}

	return EXIT_SUCCESS;
}
