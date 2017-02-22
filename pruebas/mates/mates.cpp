#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double x_cuad(double x){

	return x * x;

};

int main(int argc, char *argv[]){

	double velocidad, velocidad2,tiempo, tiempo1,
	       resultado = 0;

	printf("Dame el punto donde quieres que te calcule la variable: ");
	scanf(" %lf", &tiempo);

        tiempo1 = tiempo + 0.001;

	velocidad = x_cuad(tiempo);

	velocidad2 = x_cuad(tiempo1);

	resultado = (velocidad2 - velocidad) / (tiempo1 - tiempo);

	printf(" %lf \n", resultado);

	return EXIT_SUCCESS;
}
