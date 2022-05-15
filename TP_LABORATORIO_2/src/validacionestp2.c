#include "validacionestp2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPassenger.h"

char validacionDeOpcionChar(char mensaje[], char mensajeError[], char mensajeOpcion1[], char mensajeOpcion2[], char opcion1, char opcion2){
	char respuesta;
	do
	{
	printf("%s\n", mensaje);
	printf("%s\n", mensajeOpcion1);
	printf("%s\n", mensajeOpcion2);
	fflush(stdin);
	scanf("%c", &respuesta);

	}while(respuesta != opcion1 && respuesta != opcion2);

	return respuesta;
}

int validacionInt(int numero, int minimo, int maximo){

	while(numero < minimo || numero > maximo)
	{
	printf("Ingrese opcion valida(1-6):\n");
	scanf("%d", &numero);
	}

	return numero;
}
