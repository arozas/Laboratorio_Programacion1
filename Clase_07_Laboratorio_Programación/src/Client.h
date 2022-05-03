/*
 * Client.h
 *
 *  Created on: 26 abr. 2022
 *      Author: Alejandro Rozas
 *      El nombre de la biclioteca
 */

#ifndef CLIENT_H_
#define CLIENT_H_

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
	int clientAge;
	char aClientName[25];
	char aClientSurname[25];
	char aClientEmail[30];
	int clientAccountNumb;

}Client; //Siempre poner el nombre de las estructuras el primer caracter en mayuscula, para poder diferenciar de las variables de sistema.

int cl_printClientArray(Client arrayCliente[],int lenght);

#endif /* CLIENT_H_ */
