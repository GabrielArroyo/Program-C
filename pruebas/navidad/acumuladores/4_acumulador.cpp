#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double vector1 [2];
	double vector2 [2];
	int resultado;

	printf("dame el vector x1: \n");
	scanf(" %lf", &vector1[0]);

	printf("dame el vector y1: \n");
	scanf(" %lf", &vector1[1]);

	printf("dame el vector x2: \n");
	scanf(" %lf", &vector2[0]);

	printf("dame el vector y2: \n");
	scanf(" %lf", &vector2[1]);

	resultado = (vector1[0] * vector2[0]) + (vector1[1] * vector2[1]);

	printf("Tu resultado es %i\n", resultado);

	return EXIT_SUCCESS;
}
