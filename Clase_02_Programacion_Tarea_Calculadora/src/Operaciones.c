/*
 * Operaciones.c
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de operaciones matématicas
 *      Versión 0.1 del 01 de abril de 2022
 */
#include "Operaciones.h"

short sumar (float numero1, float numero2, float* resultadoOperacion)
{
	float resultado;

	resultado=numero1+numero2;

	(*resultadoOperacion)=resultado;

	return 0;
}
short restar (float numero1, float numero2, float* resultadoOperacion)
{
	float resultado;

	resultado=numero1-numero2;

	(*resultadoOperacion)=resultado;

	return 0;
}
short multiplicar (float numero1, float numero2, float* resultadoOperacion)
{
	float resultado;

	resultado=numero1*numero2;

	(*resultadoOperacion)=resultado;

	return 0;
}
short dividir (float numero1, float numero2, float* resultadoOperacion)
{
	float resultado;
	int retornoError;

	if(numero2!=0)
	{
		resultado = numero1/numero2;
		(*resultadoOperacion) = resultado;
		retornoError = 1;
	}
	else
	{
		retornoError = 0;
	}

	return retornoError;
}

