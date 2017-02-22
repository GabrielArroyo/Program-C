#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
#define CERO 0

double f ( double pol[MAX], double x){

	double resultado;

	for(int i = CERO; i < x; i++ ){
	resultado += (x * i) + pol[i];


}
	printf("Tu numero sumado es %lf\n", resultado);

return resultado;

};

int main(int argc, char *argv[]){

	double pol[MAX],grado;
	double resultado;

	printf("Dime tu grado: ");
	scanf(" %lf", &grado);

	grado +=1;

	printf("Dime tus coeficientes: ");

	for (int i = CERO; i < grado; i++)
	scanf(" %lf", &pol[i]);

	f(pol,grado);

	return EXIT_SUCCESS;
}
