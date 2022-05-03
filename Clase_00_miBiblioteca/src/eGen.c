/*
 * eGen.c
 *
 *  Created on: 30 abr. 2022
 *      Author: alejandro
 */
#include "eGen.h"
#include "input.h"
#include "menu.h"

static int eGen_getUniqueID(void);
static int idAutoincremental = ID_INIT_VALUE;
static int eGen_getUniqueID()
{
	return idAutoincremental++;
}
int eGen_init(eGen eGenList[], int length)
{
	int rtn = -1;
	int i;

	if (eGenList != NULL)
	{
		if (length > 0)
		{
			rtn=0;
			for (i = 0; i < length; i++)
			{
				eGenList[i].isEmpty = EMPTY;
			}
		}
	}
	return rtn;
}

void eGen_printOne(eGen toPrintStruc)
{
	printf("\n\nID: %d"
			"\nDATO MENSAJE: %s"
			"\nDATO INT: %d"
			"\nDATO FLOAT: %.2f", toPrintStruc.id, toPrintStruc.exampleChar,toPrintStruc.exampleInt, toPrintStruc.exampleFloat);
	//NEED TO BE COMPLETED WITH THE OTHERS ENTETY ATRIBUTES
}
int eGen_printAll(eGen toPrintStruc[], int length, int status)
{
	int rtn = -1;
	int i;

	if (toPrintStruc != NULL)
	{
		if (length > 0)
		{
			rtn=0;
			for (i = 0; i < length; i++)
			{
				if (toPrintStruc[i].isEmpty == status)
				{
					eGen_printOne(toPrintStruc[i]);
				}
			}
		}
	}
	return rtn;
}
int eGen_searchEmptyIndex(eGen toSearchStruc[], int length)
{
	int rtn = -1;
	int flag = 0;
	int i;

	if (toSearchStruc != NULL) {
		if (length > 0) {
			//ESTA OK
			for (i = 0; i < length; i++) {
				if (toSearchStruc[i].isEmpty == EMPTY)
				{
					flag = 1;
					rtn = i;
					break;
				}
			}

			if (flag == 0)
			{
				rtn = -2;
			}
		} else {
			rtn = -3;
		}
	} else {
		rtn = -4;
	}

	return rtn;
}
int eGen_searchIndexId(eGen toSearchStruc[], int length)
{
	int rtn = -1;
	int flag = 0;
	int i;
	int searchId;

	if (toSearchStruc != NULL) {
		if (length > 0) {
			//ESTA OK

			//MUESTRO TODOS - Le muestro al usuario todos los dados de alta para que elija cual ID dar de baja
			eGen_printAll(toSearchStruc, length, LOADED);

			//PEDIR UN ID
			input_getInt("INGRESE ID: ", 1 , ID_INIT_VALUE, ID_INIT_VALUE + length, "ERROR, VUELVA A INGRESAR ID:", &searchId);

			for (i = 0; i < length; i++) {
				if (toSearchStruc[i].isEmpty == LOADED) {
					if (toSearchStruc[i].id == searchId) {
						flag = 1;
						rtn = i; //retorno index del ID que estoy buscando
						break;
					}
				}
			}

			if (flag == 0) {
				rtn = -2;
			}
		} else {
			rtn = -3;
		}
	} else {
		rtn = -4;
	}

	return rtn;
}
eGen eGen_register()
{
	eGen eGenBuffer;

	/* EXAMPLE*/
	//Need to declare all struct attributes and register
	input_getStringletters("INGRESE DATO STRING:", 2, "ERROR", eGenBuffer.exampleChar, MAX_LENGHT_CHAR);
	input_getInt("INGRESE DATO INT:", 2, 0, 1000, "ERROR", &eGenBuffer.exampleInt );
	input_getFloat("INGRESE DATO FLOAT:", 2, 0, 1000, "ERROR", &eGenBuffer.exampleFloat);

	return eGenBuffer;
}

int eGen_registerArray(eGen toRegisterStruc[], int length)
{
	int rtn = -1;
	int emptyIndex;
	eGen eGenBuffer;

	//VA A RETORNAR UN INDEX LIBRE SI ENCONTRO O -1 SI NO LO ENCONTRO.
	emptyIndex = eGen_searchEmptyIndex(toRegisterStruc, length);

	if (toRegisterStruc != NULL) {
		if (length > 0) {
			if (emptyIndex >= 0) {
				//CARGO DATOS NO GENERICOS
				eGenBuffer = eGen_register();

				//SI ESTA TODO BIEN - LE DOY UN ID UNICO
				eGenBuffer.id = eGen_getUniqueID();
				//CAMBIO ESTADO A OCUPADO
				eGenBuffer.isEmpty = LOADED;
				if(menu_confirm("¿DESEA REALIZAR LA CARGA?"
						"\nINGRESE RESPUESTA <S/N> :"
						, "ERROR, REINGRESE RESPUESTA:")==1)
				{
					//COPIA AUXILIAR EN ARRAY EN POSICION OBTENIDA LIBRE
					toRegisterStruc[emptyIndex] = eGenBuffer;
					rtn = emptyIndex;
				}
				else
				{	//CARGA CANCELADA.
					rtn= -5;
				}
			} else {
				// ARRAY LLENO
				rtn = -4;
			}
		} else {
			// LEN MAL DEFINIDO
			rtn = -3;
		}
	} else {
		// ARRAY NULO
		rtn = -2;
	}

	return rtn;
}
int eGen_unRegisterArray(eGen toUnRegisterStruc[], int length)
{
	int rtn = -1;
	int indexBaja;

	if (toUnRegisterStruc != NULL)
	{
		if (length > 0)
		{

			//BUSCA UN INDEX POR ID - RETORNA -1 SI NO ENCUENTRA EL ID EN EL ARRAY
			indexBaja = eGen_searchIndexId(toUnRegisterStruc, length);
			if (indexBaja < 0)
			{
				//HUBO UN ERROR BUSCANDO EL INDEX
				rtn = -2;
			}
			else
			{
				eGen_printOne(toUnRegisterStruc[indexBaja]);
				if(menu_confirm("¿DESEA REALIZAR LA BAJA?"
						"\nINGRESE RESPUESTA <S/N> :"
						, "ERROR, REINGRESE RESPUESTA:")==1)
				{
					toUnRegisterStruc[indexBaja].isEmpty = DOWN;
					rtn=0;
				}
				else
				{	//SE CANCELÓ LA BAJA
					rtn=-5;
				}
			}

		} else {
			// LEN MAL DEFINIDO
			rtn = -3;
		}
	} else {
		// ARRAY NULO
		rtn = -4;
	}

	return rtn;
}
eGen eGen_ModifyOne(eGen toMofiedStruc)
{
	int menu;
	do{
		menu = menu_menu("EJEMPLO MODIFICAR ENTIDAD",
				"\n\n1 - PROBAR MODIFICAR STRUCT CHAR."
				"\n2 - PROBAR MODIFICAR STRUCT INT."
				"\n3 - PROBAR MODIFICAR STRUCT FLOAT."
				"\n4 - DEJAR DE MODIFICAR.",
				"ERROR INGRESE UNA OPCIÓN <1-4>:", 2, 4);

		switch (menu)
		{
		case 1:
			input_getStringletters("INGRESE DATO STRING", 2, "ERROR", toMofiedStruc.exampleChar, MAX_LENGHT_CHAR);
			break;
		case 2:
			input_getInt("INGRESE DATO INT ", 2, 0, 100, "ERROR", &toMofiedStruc.exampleInt );
			break;
		case 3:
			input_getFloat("INGRESE DATO FLOAT", 2, 0, 100, "ERROR", &toMofiedStruc.exampleFloat);
			break;
		}
	}while(menu<4);

	return toMofiedStruc;
}
int eGen_ModifyArray(eGen toMofiedStruc[], int length)
{
	int rtn = -1;
	int toModStrucIndex;
	eGen eGenBuffer;

	if (toMofiedStruc != NULL)
	{
		if (length > 0)
		{
			//BUSCA UN INDEX POR ID - RETORNA -1 SI NO ENCUENTRA EL ID EN EL ARRAY
			toModStrucIndex = eGen_searchIndexId(toMofiedStruc,
					length);
			if (toModStrucIndex < 0)
			{
				//HUBO UN ERROR BUSCANDO EL INDEX
				rtn = -2;
			}
			else
			{
				eGenBuffer = toMofiedStruc[toModStrucIndex];
				//MODIFICAR UN PRODUCTO
				eGenBuffer = eGen_ModifyOne(eGenBuffer);
				if(menu_confirm("¿DESEA REALIZAR LA MODIFICACIÓN?"
						"\nINGRESE RESPUESTA <S/N> :"
						, "ERROR, REINGRESE RESPUESTA:")==1)
				{
					toMofiedStruc[toModStrucIndex] = eGenBuffer;
					rtn=0;
				}
				else
				{	//CANCELO LA MODIFICACIÓN.
					rtn=-5;
				}

			}

		}
		else
		{
			// LEN MAL DEFINIDO
			rtn = -3;
		}
	}
	else
	{
		// ARRAY NULO
		rtn = -4;
	}

	return rtn;
}
int eGen_Sort(eGen array[], int TAM, int criterio)
{
	int rtn = 0;
	int i;
	int j;
	eGen aux;

	/* EJEMPLO DE SORT CON ID DE Gen
	    MODIFICAR "CRITERIO DE ORDENAMIENTO" PARA OTROS CASOS DE ORDENAMIENTO
	    CASE  1 -> MENOR A MAYOR (ASCENDENTE)
	    CASE  2 -> MAYOR A MENOR (DESCENDENTE)
	    UTILIZAR strcmp(...) PARA COMPARAR CADENAS
	 */

	//SI EXISTE EL ARRAY Y EL LIMITE ES VALIDO
	if (array != NULL && TAM > 0) {
		switch (criterio) {
		case 1:
			for (i = 0; i < TAM - 1; i++)
			{
				for (j = i + 1; j < TAM; j++)
				{
					//PREGUNTO POR ESTADO "OCUPADO" DE AMBOS
					if (array[i].isEmpty == LOADED
							&& array[j].isEmpty == LOADED)
					{
						//CRITERIO DE ORDENAMIENTO
						if (array[i].id > array[j].id)
						{
							//INTERCAMBIO POSICIONES EN ARRAY
							aux = array[i];
							array[i] = array[j];
							array[j] = aux;
						}
					}
				}
			}
			rtn = 1;
			break;
		case 2:
			for (i = 0; i < TAM - 1; i++) {
				for (j = i + 1; j < TAM; j++) {
					//PREGUNTO POR ESTADO "OCUPADO" DE AMBOS
					if (array[i].isEmpty == LOADED
							&& array[j].isEmpty == LOADED) {
						//CRITERIO DE ORDENAMIENTO
						if (array[i].id < array[j].id) {
							//INTERCAMBIO POSICIONES EN ARRAY
							aux = array[i];
							array[i] = array[j];
							array[j] = aux;
						}
					}
				}
			}
			rtn = 1;
			break;
		default:
			//CRITERIO DE ORDENAMIENTO MAL INGRESADO
			rtn = 0;
			break;
		}
	}
	return rtn;
}
