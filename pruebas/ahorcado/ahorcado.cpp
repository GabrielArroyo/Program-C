#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 29
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)
#define N 10


const char *palabra[] = {
    "onepiece",
    NULL
};

int main(int argc, char *argv[]){


	char cagadas[N];
	char letra;
	int errores = 0;
	const char *elegida;
	char adivinado[MAX];
	int aleatoria;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];
	bzero(adivinado, MAX);

    	for (int i=0; i<(int) strlen(elegida); i++){
            adivinado[i] = '-';

	}
	    printf("\t%s\n", adivinado);


	do {

	for (int i =0; i<(int) strlen(elegida); i++){

	printf("Letra: \n");
	scanf(" %c", &letra);

	if (elegida[i] == letra){
		adivinado[i] = letra;
	printf("\t%s\n", adivinado);
	}

	if (elegida[i] != letra){
	errores += 1;
	printf("\t%s\n", adivinado);

	}
	}

	}while (errores < 10);

	    return EXIT_SUCCESS;
}
