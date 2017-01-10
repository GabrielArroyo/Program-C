#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int i;
	i = 1;

	printf("Buenas, aqui tienes tus 100 numeros\n");


	while (i <= 100){
	printf(" %i", i++);
	}

	printf("\n");

	return EXIT_SUCCESS;
}
