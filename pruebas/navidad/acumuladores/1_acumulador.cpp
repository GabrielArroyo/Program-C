#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	double a0,a1,a2,a3,a4,a5,a6,a7,a8,a9;
	

	printf("Bueno amigo, deberias ir dandome tus 10 numeros para poder hacerte la media,no crees?\n");

	printf("Numero 1\n");
	scanf(" %lf", &a0);

	printf("Numero 2\n");
	scanf(" %lf", &a1);

	printf("Numero 3\n");
	scanf(" %lf", &a2);

	printf("Numero 4\n");
	scanf(" %lf", &a3);

	printf("Numero 5\n");
	scanf(" %lf", &a4);

	printf("Numero 6\n");
	scanf(" %lf", &a5);

	printf("Numero 7\n");
	scanf(" %lf", &a6);

	printf("Numero 8\n");
	scanf(" %lf", &a7);

	printf("Numero 9\n");
	scanf(" %lf", &a8);

	printf("Numero 10\n");
	scanf(" %lf", &a9);

	double res = (a0 + a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 +a9) / 10;

	printf("Tu media es %lf\n", res);

	return EXIT_SUCCESS;
}
