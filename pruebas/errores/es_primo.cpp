#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool es_primo(int n){

	for (int i = 2; i < n; i++)
	if (n % i == 0)
	return false;

	return true;

};

int main(int argc, char *argv[]){

	printf(" %i %s primo. \n", 6,
		es_primo(6)? "es " : "no es ");


	return EXIT_SUCCESS;
}
