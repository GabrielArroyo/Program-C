// Hilos_C.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <windows.h>

#define MAX 10000;

struct Tpila {
	int *num;
	int cont;
	
}pila;

void push(struct Tpila *numeros, int dato) {
	numeros->num[numeros->cont++] = dato;
}

bool es_primo(int num) {
	for (int i = 0; i < pila.cont; i++)
		if (num % pila.num[i] == 0)
			return false;

	return true;
}

void push_primo(int num) {
	if (es_primo(num)) {
		push(&pila, num);
		printf("%i \n", &num);
		}

}

DWORD WINAPI Numeros_primos(void *) {
	for (int i = 2; i < 1000; i++)
		push_primo(i);
	return 0;
}


int main()
{
	pila.num = (int *)malloc(1000 * sizeof(int));

	HANDLE hilo;
	hilo = CreateThread(NULL, 0, Numeros_primos, NULL, 0, NULL);

	
	/*pthread_t hilo;

	pthread_create(&hilo, NULL, numeros_primos, NULL);

	pthread_join(hilo, NULL);*/

	free(pila.num);
    return 0;
}

