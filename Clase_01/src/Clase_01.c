/*
 ============================================================================
 Name        : Clase_01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	C es un lenguaje fuertemente tipado, se debe definir el tipo de dato que
	voy a guardar.:
	*/
	int numeroEnteros=10;
	float numerosDecimales=10.2;
	char unCaracter='a';
	int numeroPedidoUsuario;

	/*
	JavaScript = para mostrar
	cosole.log()
	 * alert()
	 * document.write()
	 * document.getElementById()

	En C, para imprimer en consola se usa la siguiente FUNCIÓN=

	printf();

	no se cocatena, se define el formato usando "%" para que
	el lenguaje entienda que datos tiene que mostrar
	 */

	printf("Asi se muestra un int %d \n",numeroEnteros);
	printf("Asi se muestra un float %f \n", numerosDecimales);
	printf("Asi se muestra un solo caracter %c \n", unCaracter);

	//printf("\n Practica pedido de dato usuario");
	//printf("\n %d",numeroPedidoUsuario);

	/*cuando no tiene dato la variable, al estar trabajando sobre un
	 * espacio de memoria, ese espacio puede tener un dato guardado, "basura".
	 * Por eso se debe tener cuidado y asegurarse que tenga datos asignados.
	 * en el ejemplo anterior, devolvia 0.

	Por ahora para solicitar datos usaremos la siguiente FUNCION:

	scanf()

	al igual que la función printf, debemos decirle a la función
	el tipo de dato ingresado por medio de %

	Para que

	*/
	printf("\n Ingrese un numero \n");
	scanf("%d", &numeroPedidoUsuario);

	printf("\n dato solicitado \n");
	printf("%d", numeroPedidoUsuario);

	return EXIT_SUCCESS;
}
