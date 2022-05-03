/*
 ============================================================================
 Name        : Clase_07_Ejercicios.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 26/04/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define EMPTY 0
typedef struct

{
	char aName[30];
	char aDesc[50];
	float price;
	int isEmpty;

}Product;

void imprimirProducto(Product oneProduct);
int productoVacio(Product product[], int length);
int initArray(Product aProductArray, int lenght);
int imprimirPosicionesVacias(Product aVariableProdcto, int lenght);

int main(void)
{
	Product nonAlcoholDrinks[200];

	if(imprimirPosicionesVacias(nonAlcoholDrinks, 200)!=0)
	{
		puts("No se pudo hacer la operación");
	}

}
int initArray(Product aProductArray, int lenght)
{
	int rtn = -1;
	int i;
	if(aProductArray!=NULL && lenght >0)
	{
		rtn=0;
		for (i=0; i<lenght; i++)
		{
			aProductArray.isEmpty = 0;
		}
	}

}
void imprimirProducto(Product oneProduct)
{
	printf("\n Nombre del producto: %s", oneProduct.aName);
	printf("\n Descripción del producto: %s", oneProduct.aDesc);
	printf("\n Precio del producto: %.2F", oneProduct.price);
}
int productoVacio(Product product[], int length)
{
	if(product[length].isEmpty==EMPTY)
	{
		return -1;
	}
	return 0;
}
int imprimirPosicionesVacias(Product aVariableProdcto, int lenght)
{
	int rtn=-1;
	if (lenght>0)
	{
		int i=0;
		for (i=0; i < lenght; i++)
		{
			if (productoVacio(aVariableProdcto, i)==-1)
			{
				printf("\nEn la posición: %d, no hay datos ingresados", i);
				rtn=0;
			}
		}
	}
	return rtn;
}
