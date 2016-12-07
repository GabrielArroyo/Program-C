#include <stdio.h>
#include <stdlib.h>

int main(){

	char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
	int dni, pos;

	printf ("dni: ");
	scanf (" %i", &dni);

	printf ("%c\n", letras [dni % 23]);

	return EXIT_SUCCESS;
}
