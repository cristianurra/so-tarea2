#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>
#define h 200000000000 //corresponde al tiempo maximo que esperara un avion para solicitar la pista
#define NR_LOOP 32000000 //corresponde a la cantidad de iteraciones a realizar cada avion para verificar si debe solicitar la pista o no.
//#define aterrizajes 0

#include "static.h"


int aterrizajes = 0;		//contador cantidad de aterrizajes totales que se han realizado
sem_t aeropuerto;

 #include "aterrizajes.h"
int main(void)
{	
	
	int n;
	printf("Indique la cantidad de aviones a simular (entre 1 y 2500:  ");
	scanf("%d",&n); //cantidad de aviones a simular
	printf("%d\n",n);
	srand(time(0));			//para generar numeros aleatorios a partir de una semilla
	

	#include "pthread_t.h"
	
	sem_init(&aeropuerto, 0, 1);
	int ii=0;
	#include "pthread_create.h"			//aca se encuentra la implementacion de cada hilo

	int iii=0;
	#include "pthread_join.h"			//aca se incluyen la ejecucion de cada thread_join


	
	return 0;
	
}

