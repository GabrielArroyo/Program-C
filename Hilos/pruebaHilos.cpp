#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

int suma = 0;



void* sumando(void* num){

	for(int i = 0; i<5;i++)
		suma++;

}

int main(int argc, char *argv[]){

	pthread_t hilo;
	pthread_t hilo2;


	pthread_create(&hilo,NULL,&sumando,NULL);
	pthread_create(&hilo2,NULL,&sumando,NULL);

	pthread_join(hilo,NULL);
	pthread_join(hilo,NULL);


	printf("numero %i", suma);




	return EXIT_SUCCESS;
}
