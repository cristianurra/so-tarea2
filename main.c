#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

#define NR_LOOP 10000
static void * avion1(void* arg);
static void * avion2(void* arg);
static int aterrizajes = 0;		//cantidad de aterrizajes totales

sem_t aeropuerto;

 
#include "aterrizajes.h" 
int main(void)
{
	pthread_t thread_1,thread_2;
	sem_init(&aeropuerto, 0, 1);
	pthread_create(&thread_1,NULL,*avion1,NULL);
	pthread_create(&thread_2 ,NULL,*avion2,NULL);
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	
	printf("Valor %d\n",aterrizajes);
	return 0;
	
}

