 
archivo=open("aterrizajes.h","w")

n=1
while(n<11):
    archivo.write("static void * avionNN(void* arg){\n".replace("NN",str(n)))
    archivo.write("     for (int i=0; i<NR_LOOP; i++){\n")
    archivo.write("         if (i>=rand()%h){\n")
    archivo.write("             sem_wait(&aeropuerto); \n")
    archivo.write("             aterrizajes=aterrizajes+1;\n")
    archivo.write("             sem_post(&aeropuerto);\n")
    archivo.write("             break;}\n")
    archivo.write("         }\n")
    archivo.write("     }\n")
    n=n+1
  
archivo.close()

