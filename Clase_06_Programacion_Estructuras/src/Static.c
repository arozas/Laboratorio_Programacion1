/*
 * Static.c
 *
 *  Created on: 21 abr. 2022
 *      Author: alejandro
 */
#include "Static.h"

//static solo se declara en punto c, y lo que hace es
//declarar la función privada, es interna para la libreria donde esta declarada.
//Tambien se puede usar para declarar variables privadas para el uso de mis funciones.

static int misId;
static int obtenerId(void)
{
	return misId++;
}

/*
static void miFuncion1 (void)
{
	puts("Hola");
}
*/

int miFuncio2 (int n)
{
	return obtenerId();
}
