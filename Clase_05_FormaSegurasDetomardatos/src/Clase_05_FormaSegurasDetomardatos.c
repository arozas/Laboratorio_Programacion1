/*
 ============================================================================
 Name        : Clase_05_FormaSegurasDetomardatos.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	//int n;
	//scanf, gets y fgets

	//scanf("%d", &n); //El scanf lo que va leer lo que haya entrado el usuario, leer del buffer, de la entrada
	//en este caso de la entrada del teclado, cuando especificamos el formato, le decimos a la función que tome el
	//dato entero del buffer de entrada del teclado en la consola, con el especificador de formato, lee hasta donde
	// esta definido el por el especificador.
	//Por eso decimo que el scanf es inseguro, por que puede sobre escribir datos, ya que escanea sin limites lo que se
	//encuentra en el especificador de formato. Al no tener control sobre la función lo hace inseguro.
	//printf("%d",n);

	char nombre[10];

	//puts("\nDame un nombre gets");
	//gets(nombre);//gets recibe una dirección memoria, por eso hay que especificar el puntero, gets va tomar los datos hasta que se encuentre un "enter" (\n),
	//se lleva el dato que entró el usuario, pero deja el enter, por eso para volver a tomar el dato hay que purgar, al igual que el scanf el gets va tomar datos hasta un enter
	// por eso mismo tampoco tenemos control, sobre lo que escribe el usuario, ya que no tiene un freno, por que no se puede poner freno a la lectura.
	//NOMBRE= Jorge
	//BUFFER = queda \n.
	//printf("%s", nombre);

	//puts("Dame un nombre fgets");
	//fgets(nombre, 10, stdin);// Le digo donde guardar, cuanto to leer, y de donde tomar el dato. Al declarar hasta cuando leer evitamos que desborde la variable. Por eso es la forma más segura para tomar datos de entrada.
	//printf("%s", nombre);
	// ahora todas las funciones tienen que hacer un fgets.
	char destino[5]="jorge";
	char origen[5]="pepe";
	//STRING.H
	//nombreA=nombreB; no se puede hacer esto.Para hacer esto hay dos formas, una insegura y otra segura:
	//strcpy(destino, origen); //copia una string de un array a otro, el origen puede ser una constante, es insegura por que si el origen es
	//más grande que el destino, lo sobreescribe desborado el array.
	//strlen()// cuenta la cantidad de caracteres dentro del array.
	//strncpy(destino, origen, 2); // Es como strcpy, pero con la función sizeof puedo definir la cantidad maxima del array de destino.
	//printf("%s", destino);

	//comparar dos cadenas
	int rtn = strncmp(origen,destino, 5);
	//RETORNO == 0 : IGUALES
	//RETORNO  > 0 : DESTINO MAYOR A ORIGEN
	//RETORNO  < 0 : ORIGEN MAYOR A DESTINO

	if (rtn==0)
	{
		puts("SON IGUALES");
	}
	else
	{
		if (rtn>0)
		{
			puts("DESTINO MAYOR A ORIGEN");
		}
		else
		{
			puts("ORIGEN MAYOR A DESTINO");
		}
	}

	printf("%d", rtn);

	//CONCATENAR
	strcat(); //Concatena sin limites origen y destino,
	strncat(); // concatena hasta un limite, el origen y destino.

	return EXIT_SUCCESS;
}

