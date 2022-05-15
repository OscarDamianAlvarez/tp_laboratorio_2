#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arrayPassenger.h"
#include "validacionestp2.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcionDelMenu;
	char respuesta;

	Passenger pasajeros[2000];
	EstadoVuelo estadosDeVuelos[2] = { { 0, "a tiempo" }, { 1, "cancelado" } };
	TipoDePasajero tiposDePasajeros[2] = { { 0, "economico" }, { 1,
			"primera clase" } };

	respuesta = validacionDeOpcionChar("Sistema de pasajeros.\n",
			"ERROR. Ingrese opción correcta(i-ingresar/s-salir).\n",
			"[I]Iniciar programa.\n", "[S]Salir.\n", 'I', 'S');
	while (respuesta == 'I') {
		printf("\n");
		printf("__________________________________________\n");
		printf("\n");
		printf("	     [MENU  PRINCIPAL]\n");
		printf("__________________________________________\n");
		printf("\n");
		printf("Ingrese opción: \n");
		printf("[1]Altas.\n");
		printf("[2]Modificar.\n");
		printf("[3]Baja.\n");
		printf("[4]Informar.\n");
		printf("[5]Cargar forzadamente datos.\n");
		printf("[6]Salir.\n");
		scanf("%d", &opcionDelMenu);

		opcionDelMenu = validacionInt(opcionDelMenu, 1, 6);
		switch (opcionDelMenu) {
		case 1:
			printf("ALTA DE PASAJEROS\n");
			printf("Ingrese los datos del pasajero:");


			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		}
	}

	return EXIT_SUCCESS;
} // TP INCOMPLETO PERO EN PROCESO :/ DISCULPEN LAS MOLESTIAS.
