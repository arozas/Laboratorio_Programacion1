/*
 ============================================================================
 Name        : Clase_01_Jueves.c
 Author      : Alejandro Alberto Martín Rozas
 Version     : 24/03/2022
 Copyright   : Your copyright notice
 Description : Clase 01 de Programación. Teoría.
 ============================================================================*/
/*La IDE
 Estamos trabajando sobre una IDE. Elipse, como tal es un entorno de desarrollo
 integrado, El IDE permite trabajar sobre proyectos. Permite no solo tener
 lineas de código, si no todos los archivos necesarios para el desarrollo del programa
 como las distintas dependencia. Eclipce es una IDE para C, es un lenguaje interpretado
 por eso necesita ser compilado. El compilado genera el ejecutable.
 */

/*Los #include:
En C como en muchos lenguajes, hay herramientas ya programadas, evitando de esta forma
evitar programar de cero algunas funciones. Los includes es la función para traer paquetes
son paquetes que incluyen ya el código necesario para esas funciones, estos paquetes son librerias
o bibliotecas.

El IDE muchas veces nos va decir que la función que estamos usando no esta en las bicliotecas incluidas
o que la función no es reconocida, buscando la función en google nos puede decir en que biblioteca esta
para incluirla o descargarla.

Cuando la biclioteca no esta incluida, hay que indicarle la ruta de la biblioteca.

la extensión .h define las cabeceras, las "headlines"*/

#include <stdio.h> //
#include <stdlib.h> //

//El #define
//es una mascara (MACRO) que permite definir valores o código.

#define TRUE 1
#define FALSE 0

/* El main
 Es un punto de entrada, al igual que un punto EXE. Ese ejecutable tiene el fuente
 dentro del código fuente el "main" es el punto de entrada como el punto de salida
 entry point del código.*/

int main(void)
{
	puts("Clase del Jueves"); /* prints Clase del Jueves */
	return EXIT_SUCCESS;
}

/*Building o Compilar:
 Es el proceso de tranformación del código a lenguaje maquina, se crea el código objeto,
 que contiene las instruciones, t0do en lenguaje 010101. En este proceso crea el ejecutable
 que lanza el programa por medio de punto de entrada.
 */
