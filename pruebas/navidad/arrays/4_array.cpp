#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a,b,c;
	a = 0;
	b = 1;
	printf(" 1");
	for (int i = 0; i < 19; i++){
	c = a + b;
	printf(" %i", c);
	a = b;
	b = c;
	}

	printf("\n");

	return EXIT_SUCCESS;
}
