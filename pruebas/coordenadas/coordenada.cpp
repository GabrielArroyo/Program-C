#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Tcoordenada{

	int fila;
	int columna;

};

struct Tcoordenada A25(int x, int y){

	Tcoordenada pantalla;
	pantalla.fila = x;
	pantalla.columna = y;

	if(pantalla.fila % 2 == 1)
	pantalla.fila *= 2;

	if(pantalla.columna % 2 == 1)
	pantalla.columna *= 2;

	printf("Tu coordenada x es la fila %i \n", pantalla.fila);

	printf("Tu coordenada y es la columna %i\n", pantalla.columna);

	return pantalla;

};

int main(int argc, char *argv[]){

	Tcoordenada coor;
	coor.fila;
	coor.columna;



	printf("Dame tu cordenada X: \n");
	scanf(" %i", &coor.fila);

	printf("Dame tu coordenada Y: \n");
	scanf(" %i", &coor.columna);

	A25(coor.fila,coor.columna);

	return EXIT_SUCCESS;
}
