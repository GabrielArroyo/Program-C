#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	char cadena [10];

	for (int i = 9; i >= 0 ; i--){
	cadena [i] = i;
	printf(" %i", cadena[i]);

	}


	return EXIT_SUCCESS;
}
