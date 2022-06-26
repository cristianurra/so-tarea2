static void * thread1(void* arg)
{
	tiempo_aterrizaje=99
	for (int i=0; i<NR_LOOP; i++){
		
		if (tiempo_aterrrizaje>=tiempo){  #significa que ya llego la hora de aterrizar, entonces empezará a solicitar el uso de la pista de aterrizaje.
		sem_wait(&aeropuerto);
		counter+=1;
		sem_post(&aeropuerto);
	}
	}
	
}
