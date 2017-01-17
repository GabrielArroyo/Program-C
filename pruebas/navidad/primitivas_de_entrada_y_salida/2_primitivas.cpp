#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char nombre [30];

	printf("dime tu nombre\n");
	scanf(" %s", nombre);


	printf("Buenos dias %s\n", nombre);


	return EXIT_SUCCESS;
}
