/*
 * eGen.h
 *
 *  Created on: 30 abr. 2022
 *      Author: alejandro
 */

#ifndef EGEN_H_
#define EGEN_H_
#define MAX_LENGHT_CHAR 30
#define LOADED 1
#define EMPTY 0
#define DOWN -1
#define MODIFIED -2
#define ID_INIT_VALUE 1000

#include <stdio.h>
#include <stdlib.h>

//ABM
typedef struct
{
	//HAY QUE DEFINIR ATRIBUTOS
	char exampleChar[MAX_LENGHT_CHAR];
	int exampleInt;
	float exampleFloat;
	//ESTOS ATRIBUTOS SON FIJOS
	int id;
	int isEmpty;

}eGen;

int eGen_init(eGen eGenList[], int length);
void eGen_printOne(eGen toPrintStruc);
int eGen_printAll(eGen toPrintStruc[], int length, int status);
int eGen_searchEmptyIndex(eGen toSearchStruc[], int length);
int eGen_searchIndexId(eGen toSearchStruc[], int length);
eGen eGen_register();
int eGen_registerArray(eGen toRegisterStruc[], int length);
int eGen_unRegisterArray(eGen toUnRegisterStruc[], int length);
eGen eGen_ModifyOne(eGen toMofiedStruc);
int eGen_ModifyArray(eGen toMofiedStruc[], int length);
int eGen_Sort(eGen array[], int TAM, int criterio);

#endif /* EGEN_H_ */
