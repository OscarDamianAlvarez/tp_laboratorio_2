#include "funcionestp2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPassenger.h"
#include "validacionestp2.h"
#define LIBRE 0
#define OCUPADO 1

int obtenerIdAutomatico(void){
	int contadorPasajeroId;
	contadorPasajeroId = 0;
	contadorPasajeroId++;
	return contadorPasajeroId;
}

int altaPassenger(Passenger listaDePasajeros[], int longitud, EstadoVuelo estadoDeVuelo[], int longitudEstadoVuelo,
		TipoDePasajero tipoPasajero[], int longitudTipoPasajero){

	int retorno;
	int indiceLibreEncontrado;
	Passenger auxPasajero;

	retorno = -1;

	if(listaDePasajeros != NULL && longitud > 0 && estadoDeVuelo != NULL && longitudEstadoVuelo > 0 && tipoPasajero != NULL && longitudTipoPasajero > 0){
		indiceLibreEncontrado = buscarIndiceLibre(listaDePasajeros, longitud);
		if(indiceLibreEncontrado != -1){
			 utn_getString("Ingrese nombre del pasajero: ", "El nombre no es valido.",3,51, auxPasajero.name);
			 utn_getString("Ingrese nombre del pasajero: ", "El nombre no es valido.",3,51, auxPasajero.lastName);
			 utn_getFloat("Ingrese el precio: ", "ERROR.", int minimo, int maximo, int reintentos, float *pNumeroIngresado)
		}
		retorno = 0;
	}



	return retorno;
}

int buscarIndiceLibre(Passenger listaDePasajeros[],int longitud){

	int retorno;
	int i;
	retorno = -1;

	if(listaDePasajeros != NULL && longitud > 0){

		for(i = 0; i < longitud; i++){
			if(listaDePasajeros[i].isEmpty == LIBRE){        // libre
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}

int getInt(int *pNumeroIngresado, char *mensaje, char *mensajeError, int maximo,
		int minimo, int maximoDeReintentos) {

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if (pNumeroIngresado != NULL && maximo >= minimo
			&& maximoDeReintentos >= 0) {
		do {
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			if (auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo) {
				*pNumeroIngresado = auxNumeroIngresado;
				retorno = 0;
				break;
			} else {
				printf("%s", mensajeError);
			}
			maximoDeReintentos--;
		} while (maximoDeReintentos > 0);
	}
	return retorno;
}

int utn_getFloat(char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos, float *pNumeroIngresado)
{
	int retorno = -1;
	float auxiliarFloat;


	if(mensaje != NULL && minimo < maximo && mensajeError != NULL && pNumeroIngresado != NULL && reintentos > 0)
	{

		do
		{
			printf("%s",mensaje);
			if(getFloat(&auxiliarFloat)==0 && auxiliarFloat>=minimo && auxiliarFloat<=maximo)
			{
				*pNumeroIngresado = auxiliarFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;

			}
		}while(reintentos > 0);
	}
	return retorno;
}

int utn_getString(char* mensaje, char* mensajeError, int reintentos,  int longitud, char* pResultado)
{
	char buffer[4096];
	int retorno = -1;
	while(reintentos>=0)
	{
		reintentos --;
		printf("%s", mensaje);
		if(getTexto(buffer, sizeof(buffer)) == 0 && strnlen(buffer,sizeof(buffer)) <= longitud)
		{
			strncpy(pResultado,buffer, longitud);
			retorno = 0;
			break;
		}
		printf("%s", mensajeError);
	}
	return retorno;
}

