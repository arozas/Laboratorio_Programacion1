/*
 ============================================================================
 Name        : Clase_02_Laboratorio_Ejemplo_Funcion_Dividir.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float dividir(float dividento, float divisor);
int sumar(int numA, int numB);

int main(void)
{
	int num1 = 0;
	int num2 = 0;
	float resultado;

	resultado = dividir(num1,num2);

	printf("la división es: %2.f", resultado);

	return EXIT_SUCCESS;
}

float dividir(float dividento, float divisor)
{
	float rtn;
	//rtn=0 puedo declarar el rtn valor 0 y ahorrarme el rtn.
	if(divisor != 0)
	{
		rtn=dividento/divisor;
	}
	else
	{
		//puts("ERROR, NO SE PUEDE DIVIDIR POR 0");
		//printf("ERROR, NO SE PUEDE DIVIDIR POR 0");
		rtn=0;
	}
	// tratar de no meter mensajes para no imprimir un mensaje a otra persona que
	// use la función.

		return rtn;
}
int sumar(int numA, int numB)
{	int rtn;//retorno pero se pone rtn para con confundir con return

	rtn=numA+numB;

	return rtn;

}
//Las funciones tiene que validar por dentro para no romper.
