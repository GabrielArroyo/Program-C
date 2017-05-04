#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int suma(int op1, int op2){

	return op1 + op2;
}

int resta(int op1, int op2){

	return op1 - op2;
}

int main(int argc, char *argv[]){

int (*operacion[2])(int, int);
operacion[1] = suma;
operacion[0] = resta;
int a;

	printf("1-suma 0-resta");
	scanf(" %i", &a);

	printf("el resultado es %i\n", operacion[a](5,4));

	return EXIT_SUCCESS;
}
