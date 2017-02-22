#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(){

	int opcion;

	printf( "1. Series.\n"
		"2. Películas.\n"
		"3. Ovas.\n");
	printf("Elije tu modalidad: ");
	scanf(" %i", &opcion);


	return opcion;
}

int elegida(){
	int elegida = menu();

	if (elegida == 1){
		printf("1.One piece\n"
			"2.Bleach\n"
			"3.Naruto\n"
			"4.Hunter x Hunter\n");
	printf("elige tu serie favorita: ");
	scanf (" %i", &elegida);
	}
	return elegida;
}
int personajes(){

	int personajes = elegida();

	if (personajes == 1){
	printf("Cual de estos personajes es tu favorito\n");
	printf("1.Luffy\n"
		"2.Zoro\n"
		"3.sanji\n"
		"4.Nami\n"
		"5.brook\n");
	scanf(" %i", &personajes);
	}
	return personajes;
}

int main(int argc, char *argv[]){

	char opcion = personajes();


	return EXIT_SUCCESS;
}
