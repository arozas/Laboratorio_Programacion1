/*
 * BliotecaDeOperaciones.c
 *
 *  Created on: 31 mar. 2022
 *      Author: alejandro
 *
 *      Aca solo se desarrollan los prototipos definidos en la bilioteca.h
 *      y como include solo la llamada a su respectiva biblioteca .h
 *      Este archivo, el .c debe llamar el .h
 *
 *      //probar que pasa cuando 2 librerias tienen la misma función.
 */
#include "BliotecaDeOperaciones.h"

float sumar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1+numero2;
	return resultado;
}
float restar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1-numero2;
	return resultado;
}
float multiplicar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1*numero2;
	return resultado;
}
float dividirInt (int numero1, int numero2)
{
	float resultado;
	resultado=(float)numero1/numero2;
	return resultado;
}
float dividirFloat (float numero1, float numero2, float* resultado)
{
	float rtn;

	rtn=(float)numero1/numero2;

	return rtn;
}

