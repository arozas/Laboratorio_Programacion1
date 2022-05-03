/*
 ============================================================================
 Name        : Clase_00_miBiblioteca.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "input.h"
#include "menu.h"
#include "eGen.h"


int main(void)
{
	int NumeroIntIngresado=0;
	float NumeroFloatIngresado=0;
	char mensajeIngresado[30];
	char charIngresado;
	int retFunc;
	int menu;
	eGen listaPrueba[5];
	eGen_init(listaPrueba,5);

	do{
		menu = menu_menu("PRUEBAS DE FUNCIONES",
				"\n\n1 - PROBAR FUNCIÓN GET INT."
				"\n2 - PROBAR FUNCIÓN GET FLOAT."
				"\n3 - PROBAR FUNCIÓN GET STRING LETTER."
				"\n4 - PROBAR FUNCIÓN GET STRING ALPHA."
				"\n5 - PROBAR FUNCIÓN GET CHAR."
				"\n6 - PROBAR FUNCIÓN CONFIRM."
				"\n7 - PROBAR FUNCIONES DE ESTRUCTURAS. "
				"\n8 - SALIR.",
				"ERROR, INGRESE UNA OPCIÓN <1-4>: " , 3, 7);
		switch(menu)
		{
		case 1:
			retFunc=input_getInt("INGRESE UN NUMERO: ", 2, -100, 10, "INGRESO MAL EL NUMERO, REINTENTE: ", &NumeroIntIngresado);
			if(retFunc==0)
			{
				printf("\nNUMERO INT INGRESADO: %d", NumeroIntIngresado);
			}
			else
			{
				printf("\nRETORNO ERROR INT: %d", retFunc);
			}
			break;
		case 2:
			retFunc=input_getFloat("INGRESE UN NUMERO: ", 2, -100, 100, "INGRESO MAL EL NUMERO, REINTENTE: ", &NumeroFloatIngresado);
			if(retFunc==0)
			{
				printf("\nNUMERO FLOAT INGRESADO: %.2f", NumeroFloatIngresado);
			}
			else
			{
				printf("\nRETORNO ERROR FLOAT: %d", retFunc);
			}
			break;
		case 3:
			retFunc= input_getStringletters("INGRESE UN MENSAJE:", 2, "REINGRESE EL MENSAJE:", mensajeIngresado, 10);
			if(retFunc==0)
			{
				printf("\nMENSAJE INGRESADO: %s", mensajeIngresado);
			}
			else
			{
				printf("\nRETORNO ERROR STRING: %d", retFunc);
			}
			break;
		case 4:
			retFunc= input_getAlphaNumericString("INGRESE UN MENSAJE:", 2, "REINGRESE EL MENSAJE:", mensajeIngresado, 5);
			if(retFunc==0)
			{
				printf("\nMENSAJE INGRESADO: %s", mensajeIngresado);
			}
			else
			{
				printf("\nRETORNO ERROR STRING: %d", retFunc);
			}
			break;
		case 5:
			retFunc=input_getChar("INGRESE UN CHAR: ", 2, 'N', 'S', "INGRESO MAL EL CHAR, REINTENTE: ", &charIngresado);
			if(retFunc==0)
			{
				printf("\nCHAR INGRESADO: %c", charIngresado);
			}
			else
			{
				printf("\nRETORNO ERROR CHAR: %d", retFunc);
			}
			break;
		case 6:
			do
			{
				retFunc=menu_confirm("¿Desea Continuar? <S-N>", "ERROR REINTENTE <S-N>:");
			}while(retFunc==1);
			break;
		case 7:
			int subMenu;
			do
			{
				subMenu = menu_menu("PRUEBAS DE ESTRUCTURAS",
						"\n\n1 - PROBAR ALTA STRUCT."
						"\n2 - PROBAR MODIFICAR STRUCT."
						"\n3 - PROBAR BAJA STRUCT."
						"\n4 - IMPRIMIR STRUCT."
						"\n5 - PROBAR ORDENAMIENTO."
						"\n6 - CARGA FORZADA DE DATOS."
						"\n7 - SALIR.",
						"ERROR, INGRESE UNA OPCIÓN <1-5>: " , 3, 7);
				switch (subMenu)
				{
				case 1:
					eGen_registerArray(listaPrueba, 5);
					break;
				case 2:
					eGen_ModifyArray(listaPrueba, 5);
					break;
				case 3:
					eGen_unRegisterArray(listaPrueba, 5);
					break;
				case 4:
					eGen_printAll(listaPrueba, 5, LOADED);
					break;
				case 5:
					int subMenu2;
					do
					{
						subMenu2 = menu_menu("PRUEBAS DE ESTRUCTURAS",
								"\n\n1 - PROBAR ORDENAMIENTO MAYOR A MENOR."
								"\n2 - PROBAR ORDENAMIENTO MENOR A MAYOR."
								"\n3 - VOLVER AL MENU ANTERIOR6.",
								"ERROR, INGRESE UNA OPCIÓN <1-5>: " , 3, 3);
						switch (subMenu2)
						case 1:
							break;
						case 2:
							break;
					}while(subMenu2<3);
					break;
				case 6:
					listaPrueba[1].id = 1000;
					listaPrueba[1].isEmpty=LOADED;
					listaPrueba[1].exampleInt = 01;
					listaPrueba[1].exampleFloat = 01.01;
					break;
				}
			}while(subMenu<7);
			break;
		}
	}while(menu<7);
	puts("FINALIZÓ EL PROGRAMA");
	return EXIT_SUCCESS;
}
