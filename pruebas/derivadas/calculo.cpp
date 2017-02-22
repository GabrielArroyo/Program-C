#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DELTA 0.01

double vel (double velocidad, double aceleracion){

	for(int i=0; i < 10; i++ )
	printf("Velocidad de la bala en el segundo %i %lf\n",
			i, velocidad += aceleracion * DELTA);
};

int main(int argc, char *argv[]){

	double v;

	printf("Dime tu velocidad: \n");
	scanf(" %lf", &v);

	vel (v,-10);


	return EXIT_SUCCESS;
}
