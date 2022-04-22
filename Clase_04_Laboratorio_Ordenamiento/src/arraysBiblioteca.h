/*
 * arraysBiblioteca.h
 *
 *  Created on: 12 abr. 2022
 *      Author: alejandro
 */

#ifndef ARRAYSBIBLIOTECA_H_
#define ARRAYSBIBLIOTECA_H_
#include <stdio.h>
#include <stdlib.h>

int printfArray(int cantidadElementos, int arrayNumeros[]);
int maximoArray(int arrayNumero[], int tam, int *maximo, int *posicion);
int duplicarArray(int arrayOriginal[], int arrayACopiar[], int tam);
int ordenamiento(int arrayNumero[], int tam, int arrayOrdenado[]);

#endif /* ARRAYSBIBLIOTECA_H_ */
