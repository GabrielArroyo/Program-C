#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char nombre [] = { 71, 97, 98, 105, '\0'};

	for(int a = 0; a < 4; a++){
	printf("%c", nombre[a]);
}

	printf("\n");

	return EXIT_SUCCESS;
}
