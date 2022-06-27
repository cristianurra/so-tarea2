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
	n=3; //cantidad de aviones a simular
	srand(time(0));
	
	int i=0;
	
	if(i<n){
		
	}
	
	pthread_t thread_1;
	pthread_t thread_2;
	pthread_t thread_3;

	
	
	sem_init(&aeropuerto, 0, 1);
	
	int ii=0;

	if(ii<n){
		pthread_create(&thread_1,NULL,*avion1,NULL);
		printf("Valor %d\n",aterrizajes);
		ii=ii+1;
	}

	if(ii<n){
		pthread_create(&thread_2,NULL,*avion2,NULL);
		printf("Valor %d\n",aterrizajes);
		ii=ii+1;
	}
	
	if(ii<n){
		pthread_create(&thread_3,NULL,*avion3,NULL);
		printf("Valor %d\n",aterrizajes);
		ii=ii+1;
	}	
	









	
	
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	pthread_join(thread_3,NULL);

	
	printf("Valor %d\n",aterrizajes);
	return 0;
	
}

