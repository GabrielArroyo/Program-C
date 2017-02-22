#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Metase 23<intro> para probar */

int multiplica (int a=0, int b=0){
	return a*b;
}

int main(int argc, char *argv[]){

	int a,b;
	a=getchar() - '0';
	b=getchar() - '0';
	printf("%ix%i = %i \n", a,b, multiplica(a,b));


	return EXIT_SUCCESS;
}
