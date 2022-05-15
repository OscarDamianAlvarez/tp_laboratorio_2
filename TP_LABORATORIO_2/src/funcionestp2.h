#ifndef FUNCIONESTP2_H_
#define FUNCIONESTP2_H_
#include "arrayPassenger.h"

int obtenerIdAutomatico(void);

int addPassenger(Passenger* list, int len, int id, char name[],char
lastName[],float price,int typePassenger, char flycode[]);

int getInt(int *pNumeroIngresado, char *mensaje, char *mensajeError, int maximo,
		int minimo, int maximoDeReintentos);
int buscarIndiceLibre(Passenger listaDePasajeros[],int longitud);
int altaPassenger(Passenger listaDePasajeros[], int longitud, EstadoVuelo estadoDeVuelo[], int longitudEstadoVuelo, TipoDePasajero tipoPasajero[], int longitudPasajero);
#endif /* FUNCIONESTP2_H_ */
int utn_getString(char * charIngresado ,char * mensaje,char * mensajeError);
int esUnArrayDeChar(char * cadena, int longitud);
int tomarDato(char * cadena, int longitud);
