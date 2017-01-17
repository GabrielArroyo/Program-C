#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char numeros [10];

	for (int i = 0; i < 10; i++){
	numeros [i]= i * i;
	printf(" %i ", numeros[i]);
	}

	return EXIT_SUCCESS;
}
