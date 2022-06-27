#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>
#define h 2000
#define k 2000
#define NR_LOOP 100
//#define aterrizajes 0

static void * avion1(void* arg);
static void * avion2(void* arg);
static void * avion3(void* arg);
static void * avion4(void* arg);
static void * avion5(void* arg);
static void * avion6(void* arg);
static void * avion7(void* arg);
static void * avion8(void* arg);
static void * avion9(void* arg);
static void * avion10(void* arg);


int aterrizajes = 0;		//contador cantidad de aterrizajes totales
sem_t aeropuerto;

 #include "aterrizajes.h"
int main(void)
{	
	
	int n;
	n=56; //cantidad de aviones a simular
	srand(time(0));
	pthread_t thread_1,thread_2,thread_3,thread_4,thread_5,thread_6,thread_7,thread_8,thread_9,thread_10;
	sem_init(&aeropuerto, 0, 1);
	pthread_create(&thread_1,NULL,*avion1,NULL);
	printf("Valor %d\n",aterrizajes);
	pthread_create(&thread_2 ,NULL,*avion2,NULL);
	printf("Valor %d\n",aterrizajes);
	pthread_create(&thread_3 ,NULL,*avion3,NULL);
	printf("Valor %d\n",aterrizajes);
	pthread_create(&thread_4 ,NULL,*avion4,NULL);
	printf("Valor %d\n",aterrizajes);
	pthread_create(&thread_5 ,NULL,*avion5,NULL);
	pthread_create(&thread_6 ,NULL,*avion6,NULL);
	pthread_create(&thread_7 ,NULL,*avion7,NULL);
	pthread_create(&thread_8 ,NULL,*avion8,NULL);
	pthread_create(&thread_9 ,NULL,*avion9,NULL);
	pthread_create(&thread_10 ,NULL,*avion10,NULL);
	
	
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	pthread_join(thread_3,NULL);
	pthread_join(thread_4,NULL);
	pthread_join(thread_5,NULL);
	pthread_join(thread_6,NULL);
	pthread_join(thread_7,NULL);
	pthread_join(thread_8,NULL);
	pthread_join(thread_9,NULL);
	pthread_join(thread_10,NULL);
	//pthread_join(thread_11,NULL);
	
	printf("Valor %d\n",aterrizajes);
	return 0;
	
}

