#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

#define NR_LOOP 10000
static void * thread1(void* arg);
static void * thread2(void* arg);
static int counter = 0;

sem_t aeropuerto;
int tiempo=0; #en cada ciclo del main la unidad de tiempo se incrementa en uno.
 
#include "hilos.h" 
int main(void)
{
	pthread_t thread_1,thread_2;
	sem_init(&aeropuerto, 0, 1);
	pthread_create(&thread_1,NULL,*thread1,NULL);
	pthread_create(&thread_2 ,NULL,*thread2,NULL);
	pthread_join(thread_1,NULL);
	pthread_join(thread_2,NULL);
	
	printf("Valor %d\n",counter);
	return 0;
	 
}

