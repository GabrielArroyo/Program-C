#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 0x50

int main(int argc, char *argv[]){

	char buffer[N];
	char *palabra;

	printf("Nombre: ");
	fgets(buffer, N, stdin);

	palabra = (char *) malloc (strlen(buffer)+1);

	strcpy(palabra, buffer);

	printf(" %s", palabra);

	free (palabra);

	return EXIT_SUCCESS;
}
