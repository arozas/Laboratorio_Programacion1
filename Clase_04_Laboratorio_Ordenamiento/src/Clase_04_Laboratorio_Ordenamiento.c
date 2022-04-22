/*
 ============================================================================
 Name        : Clase_04_Laboratorio_Ordenamiento.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 12/04/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include "arraysBiblioteca.h"

#define LENGHT 6

int main(void)
{
	int numArray[LENGHT] = {27, 15, 32, 40, 11, 19};
	int arrayOdenado[LENGHT];
	ordenamiento(numArray, 6, arrayOdenado[6]);
	printfArray(6, arrayOdenado[6]);

	return EXIT_SUCCESS;

}
