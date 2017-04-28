#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

struct TStack{

	struct TAlumno *data[MAX];
	int cima;

};

struct TAlumno{

	char nombre[MAX];
	double nota;

};

int main(int argc, char *argv[]){

	struct TAlumno *alumno;
	struct TStack pila;
	pila.cima = 0;

	alumno = (struct TAlumno *) malloc (sizeof (struct TAlumno));

	for(int i = 0; i<MAX; i++){
	pila.data[i] = alumno;
	pila.cima++;

};


free(pila.data[0]);
free(alumno);

	return EXIT_SUCCESS;
}
