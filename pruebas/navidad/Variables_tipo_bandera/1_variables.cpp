#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a,b;

	printf("Dame tu numero y te digo si tiena algun divisor\n");
	scanf(" %i", &a);
	
	b = a / 2;

	for (int i=2; i <= b; i++ ){
		if (a % i == 0){
			printf ("No es primo\n");
			return 0;
	}
	}

	printf ("Es primo\n");

	return EXIT_SUCCESS;
}
