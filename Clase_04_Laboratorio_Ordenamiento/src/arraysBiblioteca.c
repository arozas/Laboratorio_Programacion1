/*
 * arrayBiblioteca.c
 *
 *  Created on: 12 abr. 2022
 *      Author: alejandro
 */
#include "arraysBiblioteca.h"

int printfArray(int cantidadElementos, int arrayNumeros[])
{
	int i;
	int retorno = -1;
	if(cantidadElementos>0&& arrayNumeros!=NULL)
	{
		for ( i= 0; i < cantidadElementos; ++i)
		{
			printf("\n\t Array valor: %d. Posicion: %d ",arrayNumeros[i],i);
		}

		retorno = 0;
	}
	return retorno;
}



int maximoArray(int arrayNumero[], int tam, int *maximo, int *posicion)
{
	int i;
	int maximoIngresado;
	int posicionAuxiliar;
	int retorno = -1;
	if(arrayNumero != NULL && tam > 0 && maximo != NULL)
	{
		for(i=0;i<tam;i++)
		{
			if(i==0 || arrayNumero[i]>maximoIngresado)
			{
				maximoIngresado = arrayNumero[i];
				posicionAuxiliar=i;
				retorno = 0;
			}
		}
		*maximo = maximoIngresado;
		*posicion = posicionAuxiliar;

	}
	return retorno;
}

int ordenamiento(int arrayNumero[], int tam, int arrayOrdenado[])
{
	 int retorno = -1;
	 int arrayAModificar[tam];
	 int posicionMayor;
	 int maximoNumero;
	 int indiceOrdenado = 0; //no es fijo
	 if(arrayNumero != NULL && tam > 0)
	 {
		 if(duplicarArray(arrayNumero,arrayAModificar,tam)==0) //solo vamos a ordenar si esto nos devuelve biene
		 {
			 while(tam>0)
			 {
				 maximoArray(arrayAModificar,tam,&maximoNumero,&posicionMayor);
				 arrayOrdenado[indiceOrdenado]=maximoNumero;
				 arrayAModificar[posicionMayor]=arrayAModificar[tam-1];
				 indiceOrdenado++;
				 tam--;
			 }
		 }
	 }
	 return retorno;
}

int duplicarArray(int arrayOriginal[], int arrayACopiar[], int tam)
{
	 int retorno = -1;
	 int i;
	 if(arrayOriginal != NULL && arrayACopiar != NULL && tam > 0)
	 {
		 for ( i = 0; i < tam; ++i)
		 {
			 arrayACopiar[i]=arrayOriginal[i];
		 }
		 retorno = 0;
	 }
	 return retorno;
}

