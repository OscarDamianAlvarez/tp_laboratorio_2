#ifndef ARRAYPASSENGER_H_
#define ARRAYPASSENGER_H_

struct {
	int id;
	char name[51];
	char lastName[51];
	float price;
	char flycode[10];
	int typePassenger;
	int isEmpty;
}typedef Passenger;

struct {

	int idVuelo;
	char estadoVuelo[51];

}typedef EstadoVuelo;

struct {

	int idTipo;
	char tipoPasajero[51];

}typedef TipoDePasajero;

#endif /* ARRAYPASSENGER_H_ */
