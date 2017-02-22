#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool es_perfecto(int n){
int a = 1;
	for (int i = 2; i < n; i++){
	if (n % i == 0)
		 a += i;
}

	if (a == n)
	return true;


	return false;
};

int main(int argc, char *argv[]){

	printf(" %i %s perfecto. \n", 7,
		es_perfecto(7)? "es " : "no es ");


	return EXIT_SUCCESS;
}
