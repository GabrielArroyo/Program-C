#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void leer(double *a, double *b){

	printf ("Tu base es %.0lf\n", *a);
	printf ("Tu exponente es %.0lf\n", *b);

};

int main(int argc, char *argv[]){

	double base,exponente;

	printf("Dime tu base: \n");
	scanf(" %lf", &base);

	printf("Dime tu exponente: \n");
	scanf(" %lf", &exponente);

	leer(&base, &exponente);

	return EXIT_SUCCESS;
}
