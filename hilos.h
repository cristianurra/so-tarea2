static void * thread1(void* arg)
{
	for (int i=0; i<NR_LOOP; i++){
		sem_wait(&aeropuerto);
		counter+=1;
		sem_post(&aeropuerto);
	}
	
}

static void * thread2(void* arg)
{
	for (int i=0; i<NR_LOOP; i++){
		sem_wait(&aeropuerto);
		counter-=1;
		sem_post(&aeropuerto);
	}
	
	
}
