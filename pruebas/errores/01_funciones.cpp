#include <stdio.h>
#include <stdlib.h>
#include <string.h>


bool es_par(int n){

	return (n%2 == 0);

};



int main(int argc, char *argv[]){

	int numero;

	printf("Numero: ");
	scanf(" %i", &numero);

	printf("Tu numero %ses par\n",

	es_par(numero)? "": "no ");


	return EXIT_SUCCESS;
}
