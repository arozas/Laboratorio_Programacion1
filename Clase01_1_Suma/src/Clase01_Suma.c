/*
 ============================================================================
 Name        : Clase01_Suma.c
 Author      : Alejandro Rozas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int numeroIngresadoUno;
	int numeroIngresadoDos;
	int sumaNumerosIngresados;

	printf("\n Ingrese el primer número \n");
	scanf("%d", &numeroIngresadoUno);

	printf("\n Ingrese el el segundo número \n");
	scanf("%d", &numeroIngresadoDos);

	sumaNumerosIngresados=numeroIngresadoUno+numeroIngresadoDos;

	printf("\n la suma es: \n");
	printf("%d", sumaNumerosIngresados);
}
