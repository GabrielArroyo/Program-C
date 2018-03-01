#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define MAX 1000

struct Tpila{
	int *num;
	int cont;
}pares,impares;

void push(struct Tpila *pila,int dato){
	pila->num[pila->cont++] = dato;
}

bool es_pares(int num){
	if(num%2 != 0)
		return false;

return true;
}
bool es_impar(int num){
	if(num%2 == 0)
		return false;

	return true;
}

void push_par(int num){
	if(es_pares(num)){
	push(&pares,num);
	}
}

void push_impar(int num){
	if(es_impar(num))
	push(&impares,num);
}

void *numeros_pares(void *){
	for(int i=0;i<MAX;i++)
	push_par(i);
}

void *numeros_impares(void *){
	for(int i=0;i<MAX;i++)
	push_impar(i);

}

int main(int argc, char *argv[]){

	pares.num = (int *) malloc(MAX * sizeof(int));
	impares.num = (int *) malloc(MAX * sizeof(int));

	pthread_t hilo,hilo2;

	pthread_create(&hilo,NULL,&numeros_pares ,NULL);
	pthread_create(&hilo2,NULL,&numeros_impares,NULL);

	pthread_join(hilo,NULL);
	pthread_join(hilo2,NULL);

	for(int i = 0;i<pares.cont;i++)
	printf("Soy par - %i\n", pares.num[i]);

	for(int i=0;i<impares.cont;i++)
	printf("Soy impar - %i\n", impares.num[i]);

	free(pares.num);
	free(impares.num);

	return EXIT_SUCCESS;
}
