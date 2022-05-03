/*
 * Product.h
 *
 *  Created on: 28 abr. 2022
 *      Author: alejandro
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#define UUID_LENGHT 37
#define MAX_LENGHT_CHAR 50
#define LOADED 1
#define EMPTY 0
#define DOWN -1

#include <stdio.h>
#include <stdlib.h>

//ABM
typedef struct
{
	int day;
	int month;
	int year;

}eDate;
typedef struct
{
	char id[UUID_LENGHT];
	int isEmpty; //EL ESTADO DEFINE COMO ESTÁ ESTE CLIENTE,

	char marca[MAX_LENGHT_CHAR];
	eDate expireDate;

}eProduct;

//Prototipos, antes va la estructura, asi reconoce la estructura.
void eProduct_printOneProduct(eProduct p);
int eProduct_printAll(eProduct productList[], int lenght, int state);
int eProduct_initAll(eProduct productList[], int lenght);
int eProduct_create(eProduct productList[], int lenght);
int eProduct_searchFreeIndex(eProduct productList[], int lenght);

#endif /* PRODUCT_H_ */
