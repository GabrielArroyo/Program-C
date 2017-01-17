#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char numeros [10];

	printf("dame una lista de numeros, preferiblemente del 1-10\n");

	for(int i=0; i<10; i++ ){
	scanf(" %s", numeros);
	}

	return EXIT_SUCCESS;
}
