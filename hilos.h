static void * thread1(void* arg)
{
	tiempo_aterrizaje=99			#indica en que momento el avion va a necesitar la pista 
	for (int i=0; i<NR_LOOP; i++){
		
		if (i>=tiempo_aterrrizaje){  #significa que ya llego la hora de aterrizar, entonces empezará a solicitar el uso de la pista de aterrizaje.
		sem_wait(&aeropuerto);  #se verifica que la pista esté en desuso
		aterrizajes=aterrizajes+1;				#se suma una unidad a la cantidad de aviones que han aterrizado
		break;	#el avion ha aterrizado por lo que se sale del ciclo y el hilo se termina.
		}
	}
	
}



