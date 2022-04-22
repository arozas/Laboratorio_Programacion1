/*
 ============================================================================
 Name        : Clase_00_miBiblioteca.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Input.h"

int main(void) {
	puts("PRUEBAS DE FUNCIONES");

	int aNumeroIngresado[5];

	input_getNumber("INGRESE UN NUMERO", 2, 1, 200, "INGRESO MAL EL NUMERO", &aNumeroIngresado[1]);

	printf("Numero Ingresado: %d", aNumeroIngresado[1]);

	return EXIT_SUCCESS;
}
