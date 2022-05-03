/*
 * product.h
 *
 *  Created on: 26 abr. 2022
 *      Author: alejandro
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char aName[30];
	char aDesc[50];
	float price;
	int isEmpty;

}Product;

int imprimirProducto(Product oneProduct);
int productoVacio(Product product);


#endif /* PRODUCT_H_ */
