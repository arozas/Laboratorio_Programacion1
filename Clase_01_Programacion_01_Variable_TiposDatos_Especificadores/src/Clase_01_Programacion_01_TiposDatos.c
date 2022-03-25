/*
 ============================================================================
 Name        : Clase_01_Programacion_01_TiposDatos.c
 Author      : Alejandro Alberto Martín Rozas
 Version     : 24/03/2022
 Copyright   :
 Description : Tipos de Datos
 ============================================================================
 */

/*Variables:
Una variable es una definición explicita creada por el desarrollador,
que va a definir un segmento de memoria, donde vamos a guardar datos.
Lo que hacemos al crear la variable es decirle al sistema que nos reserve
un espacio de memoria libre, según el tipo dato especificado en la variable
es la cantidad de bytes que nos va a reservar el sistema.

con la instrucción:
printf (%d bytes", sizeof("tipo de dato"));

Me va informar la cantidad de memoria que va reservar el sistema según el tipo
de dato explicitado.

si por medio del ampersand "&" podemos ver la dirección fisica donde esta guardado
la variable en la memoria

printf (%d", &variable);

*/

/*Tipos de datos:
 * Según la cantidad de variables y la definición de datos de la misma,
 * el programa define la cantidad de memoria que va necesitar el programa
 * para correr.
 *
 * En C no hay string como tipo de dato, se hacen presento por medio de los
 * array. Un cadena, son muchos char.

int = 		Datos numericos enteros, espacio de memoria de 4 bytes.
float = 	Datos decimales,con espacio de memoria de 4 bytes.
double = 	Datos decimales, con un espacio doble al float, 8 bytes.
char = 		Un solo caracter, con espacio de 1 byte.
void = 		La sentencia return tiene dos usos importantes.
			Primero, fuerza una salida inmediata de la función
			en que se encuentra. O sea, hace que la ejecución del programa vuelva
			al código que llamó a la función. En segundo lugar, se puede utilizar
			para devolver un valor.

			La vuelta de una función ocurre cuando se ha ejecutado la última
			sentencia de la función y, conceptualmente, se encuentra la llave }
			del final de la función.

 	 	 	Todas las funciones, excepto aquellas de tipo void, devuelven un valor.
 	 	 	Este valor se especifica explícitamente en la sentencia return. Si no la sentencia return,
 	 	 	el valor devuelto por la función queda técnicamente indefinido. En otras palabras mientras
 	 	 	una función no se declare como void, puede ser usada como operando en cualquier expresión válida de C.
 */

/*Especificadores de formatos:
 * para el ingreso de datos o para mostrar las variables, aparte del ingreso
 * del tipo da dato tenemos que definir el especificador de formato para que
 * lo muestre.
 *
 * Estos son los que van en el scanf, en los printf.
 * se deben especificador de formato por cada variable que muestre.
 * depende donde los incluyas es donde los va a mostrar.
 *
 * Es para indicar el formato:
 	%c: Caracter
	%d: Número entero(int)
	%D: Número entero long(o también %ld)
	%i: Número entero(int)
	%f: Punto flotante(float)
	%e: Notación científica con e minúscula
	%E: Notación científica con E mayúscula
	%g: Utiliza %f o %e según sea más corto
	%G: Utiliza %f o %E según sea más corto
	%o: Número octal sin signo
	%s: Cadena de texto
	%u: Entero sin signo
	%U: Entero sin signo long(o también %lu)
	%x: Hexadecimal sin signo con minúsculas
	%X: Hexadecimal sin signo con mayúsculas
	%p: Puntero, dirección de memoria
	%n: Número de caracteres
	%o: Formato entero octal
	%O: Formato entero octal long(o también %lo)
	%lf: Formato double
	%LF: Formato long double
 */

/*Secuencias de escape:
 Las secuencias de escape se utilizan para definir ciertos
 caracteres especiales dentro de cadenas de texto.
 Código		Significado
	\n		Salto de línea
	\b		Retroceso
	\t		Tabulación horizontal
	\v		Tabulación vertical
	\\		Contrabarra
	\f		Salto de página
	\'		Apóstrofe
	\"		Comillas dobles
	\0		Fin de una cadena de caracteres
 */

/*El scanf()
 * siempre usa la dirección de memoria y uppersand para la toma de dato
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf ("hola mundo %d %d %c",1,3,'c')//dentro de las comillas tengo que incluir los especificadores de datos para mostrar.
}
