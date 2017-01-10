#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char palabra [20];

	printf("Dime tu palabra, y después de guardarla te la devuelvo\n");
	scanf(" %s", palabra);
	
	printf(" gracias por dejarme un rato la palabra, ahora te la devuelvo %s\n", palabra);

	return EXIT_SUCCESS;
}
