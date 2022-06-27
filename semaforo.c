#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#include <unistd.h>
#define h 20000000 //corresponde al tiempo maximo que esperara un avion para solicitar la pista
#define NR_LOOP 320000
//#define aterrizajes 0

#include "static.h"


int aterrizajes = 0;		//contador cantidad de aterrizajes totales
sem_t aeropuerto;

 #include "aterrizajes.h"
int main(void)
{	
	
	int n;
	printf("Indique la cantidad de aviones a simular (entre 1 y 2500:  ");
	scanf("%d",&n); //cantidad de aviones a simular
	printf("%d\n",n);
	srand(time(0));
	

	#include "pthread_t.h"
	
	sem_init(&aeropuerto, 0, 1);
	int ii=0;
	#include "pthread_create.h"

	int iii=0;
	#include "pthread_join.h"


	
	return 0;
	
}

