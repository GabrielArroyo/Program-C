#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	int a,b,c;
	a = 0;
	b = 0;
	c = 0;

	printf("dame tu primer numero\n");
	scanf(" %d", &a);

	printf("dame tu segundo numero\n");
	scanf(" %d", &b);

	c = a;
	a = b;
	b = c;

	
	printf("tu nuevo primer numero es %d\n", a);
	printf("tu nuevo segundo numero es %d\n", b);

	return EXIT_SUCCESS;
}
