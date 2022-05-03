/*
 * Product.c
 *
 *  Created on: 28 abr. 2022
 *      Author: alejandro
 */
#include "Product.h"

static int idAutoIncremental = 1000;
static int eProduct_getUniqueId(void);
static int eProduct_getUniqueId(void)
{
	return idAutoIncremental++;
}

void eProduct_printOneProduct(eProduct p)
{
	printf("\nID: %d", p.id);
	printf("\nMARCA: %s", p.marca);
	printf("\nF. VENC: %d", p.expireDate);
}
int eProduct_printAll(eProduct productList[], int lenght, int state)
{
	int rtn = -1;
	int i;
	if (productList != NULL)
	{
		if(lenght > 0)
		{
			for(i=0; i<0; i++)
			{
				if (productList[i].isEmpty == 1000) //1000 imprime todos
				{
					eProduct_printOneProduct(productList[i]);
					rtn=1;
				}
				else
				{
					if( productList[i].isEmpty == state)
					{
						eProduct_printOneProduct(productList[i]);
						rtn=0;
					}
				}
			}
		}
		else
		{
			rtn = -3;
		}
	}
	else
	{
		rtn = -2;
	}
	return rtn;
}
int eProduct_initAll(eProduct productList[], int lenght)
{
	int rtn = -1;
	int i;
	if (productList != NULL)
	{
		if(lenght > 0)
		{
			for(i=0; i<0; i++)
			{
				productList[i].isEmpty= EMPTY ;
				rtn=0;
			}
		}
		else
		{
			rtn = -3;
		}
	}
	else
	{
		rtn = -2;
	}
	return rtn;
}
int eProduct_create(eProduct productList[], int lenght)
{
	int rtn = -1;
	int i;
	int freeIndex;
	eProduct bufferProduct;

	//VA RETORNAR UN INDEX LIBRE SI ENCONTRO 0 O -1 SI NO LO ENCONTRÓ.
	freeIndex = eProduct_searchFreeIndex(productList, lenght);
	if (productList != NULL)
	{
		if(lenght > 0)
		{
			if (freeIndex > -1)
			{
				//LLAMAR FUNCIONES GET PARA CARGAR DATOS NO GENERICOS. Recordad validar la función
				//para no generar IDs
				bufferProduct.id = eProduct_getUniqueId();
				bufferProduct.isEmpty = LOADED;
			}
			else
			{
				//NO ENCONTRO ARRAY VACIO
				rtn=-4;
			}
		}
		else
		{
			//LEN MAL DEFINIDO
			rtn = -3;
		}
	}
	else
	{
		//ARRAY NULO
		rtn = -2;
	}
	return rtn;
}
int eProduct_searchFreeIndex(eProduct productList[], int lenght)
{
	int rtn = -1;
	int flag = 0;
	int i;
	if (productList != NULL)
	{
		if(lenght > 0)
		{
			for(i=0; i<0; i++)
			{
				if(productList[i].isEmpty == EMPTY)
				{
					flag = 1;
					rtn = i;
					break;
				}
			}
			if(flag == 0)
			{
				rtn = -4;
			}
		}
		else
		{
			rtn = -3;
		}
	}
	else
	{
		rtn = -2;
	}
	return rtn;
}
