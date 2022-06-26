static void * avion1(void* arg)
{

	for (int i=0; i<NR_LOOP; i++){
		
		if (i>=89){  //significa que ya llego la hora de aterrizar, entonces empezará a solicitar el uso de la pista de aterrizaje.
		sem_wait(&aeropuerto);  //se verifica que la pista esté en desuso
		aterrizajes=aterrizajes+1;				//se suma una unidad a la cantidad de aviones que han aterrizado
		sem_post(&aeropuerto);
		break;	//el avion ha aterrizado por lo que se sale del ciclo y el hilo se termina.
		}
	}
	
}


static void * avion2(void* arg)
{

	for (int i=0; i<NR_LOOP; i++){
		
		if (i>=13){  //significa que ya llego la hora de aterrizar, entonces empezará a solicitar el uso de la pista de aterrizaje.
		sem_wait(&aeropuerto);  //se verifica que la pista esté en desuso
		aterrizajes=aterrizajes+1;				//se suma una unidad a la cantidad de aviones que han aterrizado
		sem_post(&aeropuerto);
		break;	//el avion ha aterrizado por lo que se sale del ciclo y el hilo se termina.
		}
	}
	
}
