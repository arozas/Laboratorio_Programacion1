/*
 ============================================================================
 Name        : Clase_05_Laboratorio_Estructuras.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Cadenas de caracteres.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//ARRAY - VECTOR UNIDIMENCIONAL
	//Las cadenas, o los strings, ordena espacio por espacio char,

	int array[10]; //Este vector tiene 10 enteros guardados en los espacios de memoria declarados.
	char cadena0[10]; //En la cadena, o string, tenemos 9 espacios para escribir y el decimo esta reservado para \0 que finaliza la cadena.

	//sizeof() función para ver el tamaño de memoria de un tipo de datos.

	char cadena1[5]="Hola";
	char cadena2[5]={'h','o','l','a'};
	char cadena3[]="hola";//se pude hacer, pero siempre es recomendable darle valor de memoria.
	// estas son las distintas formas de inicializar las variables.

	//VECTOR BIDIRECCIONAL

	char arrayBi[2][10]; //Es como un excel
	char arrayBi[2][10] = {"juan", "pepe"};

	puts(cadena1);
	puts(cadena2);
	puts(cadena3);
	printf("%d", sizeof(cadena3));




	return EXIT_SUCCESS;
}
