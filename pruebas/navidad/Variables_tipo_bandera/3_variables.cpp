
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int numero [10];
	int i;

	printf("Dime tus 10 numeros y te digo el menor\n");

	for ( i = 0; i < 10; i++){
		scanf(" %i", &numero[i]);
	}

	int min = numero [0];

	for ( i = 0; i < 10; i++){
		if ( min > numero [i]){
		min = numero[i];
		}
	}

	printf("Tu numero menor es %i\n", min);

	return EXIT_SUCCESS;
}
