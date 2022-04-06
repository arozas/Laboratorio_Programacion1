/*
 * Entrada.c
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de funciones de entrada.
 *      Versión 0.2 del 01 de abril de 2022
 */
#include "Entrada.h"

int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroingresado)
{
	int rtn = -1;
	int auxiliarInt; //buffer
	int retornoScanf;
	//Revisar que todos los datos esten bien. NULL es una dirección de memoria que no es valido
	//no es un valor.
	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroingresado != NULL && reintentos > 0)
	{
		printf("%s", mensaje);
		retornoScanf = scanf("%d", &auxiliarInt);
		do
		{
			if (retornoScanf !=1 || auxiliarInt > maximo || auxiliarInt < minimo)
			{
				printf("%s", mensajeError);
				retornoScanf = scanf("%d", &auxiliarInt);
				reintentos--;
			}
			else
			{
				reintentos = 0;
				*pNumeroingresado = auxiliarInt;
				rtn = 0;
			}
		}
		while(reintentos>0);
	}
	return rtn;
}
int getFloat(char mensaje[], int reintentos, float minimo, float maximo, char mensajeError[], float *pNumeroingresado)
{
	int rtn = -1;
		float auxiliarFloat; //buffer
		int retornoScanf;
		//Revisar que todos los datos esten bien. NULL es una dirección de memoria que no es valido
		//no es un valor.
		if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroingresado != NULL && reintentos > 0)
		{
			printf("%s", mensaje);
			retornoScanf = scanf("\n %f", &auxiliarFloat);
			do
			{
				if (retornoScanf !=1 || auxiliarFloat > maximo || auxiliarFloat < minimo)
				{
					printf("\n %s", mensajeError);
					retornoScanf = scanf("%f", &auxiliarFloat);
					reintentos--;
				}
				else
				{
					reintentos = 0;
					*pNumeroingresado = auxiliarFloat;
					rtn = 0;
				}
			}
			while(reintentos>0);
		}
		return rtn;
}
void ingresoNumero(char solicitarNumero[40], float* respuesta)
{
	printf("\n%s\n",solicitarNumero);
	scanf("%f",&(*respuesta));
}
short menuUno(char nombreMenu[40], char opcion1[40], char opcion2[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("\nINTRODUZCA UNA OPCIÓN<1-2>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 2, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuDos(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("\nINTRODUZCA UNA OPCIÓN<1-3>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 3, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuTres(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("4. %s\n",opcion4);
	printf("\nINTRODUZCA UNA OPCIÓN<1-4>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 4, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}
short menuCuatro(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40], char opcion5[40])
{
	short opcionIngresada;

	printf("\n\t\t\t%s\n",nombreMenu);
	printf("1. %s\n",opcion1);
	printf("2. %s\n",opcion2);
	printf("3. %s\n",opcion3);
	printf("4. %s\n",opcion4);
	printf("5. %s\n",opcion5);
	printf("\nINTRODUZCA UNA OPCIÓN<1-5>:");
	scanf("%hi",&opcionIngresada);
	validarOpcionNum(opcionIngresada, 1, 5, &opcionIngresada);
	printf("\nOPCIÓN INGRESADA:%hi\n",opcionIngresada);

	return opcionIngresada;
}

