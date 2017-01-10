#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombre [30] = {};

	printf("Dime tu nombre\n");
	scanf(" %s", nombre);


	printf("Bonito nombre %s\n", nombre);

	return EXIT_SUCCESS;
}
