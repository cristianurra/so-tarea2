 
archivo=open("aterrizajes.h","w")

total=3000

n=1
while(n<total):
    archivo.write("static void * avionNN(void* arg){\n".replace("NN",str(n)))
    archivo.write("srand ( time(NULL) );  \n")
    archivo.write("int pistafor, atdesp = 0;  \n")
    archivo.write("char AB,AD;  \n")
    archivo.write("     for (int i=0; i<NR_LOOP; i++){\n")
    archivo.write("         pistafor= rand() %(2);  \n")
    archivo.write("         atdesp=rand() %(2);  \n")
    archivo.write("         if (pistafor == 0){  \n")
    archivo.write("             AB='A';  \n")
    archivo.write("         }  \n")
    archivo.write("         else{  \n")
    archivo.write("             AB ='B';  \n")
    archivo.write("         }  \n")
    archivo.write("         if (atdesp == 0){  \n")
    archivo.write("             AD='A';  \n")
    archivo.write("         }  \n")
    archivo.write("         else{  \n")
    archivo.write("             AD ='B';  \n")
    archivo.write("         }  \n")
    archivo.write("         if (i>=rand()%h){\n")
    archivo.write("             sem_wait(&aeropuerto); \n")
    archivo.write("             aterrizajes=aterrizajes+1;\n")
    archivo.write('printf("Ultimo avion que ha utilizado la pista: avion %d. kk",aterrizajes);\n')  
    archivo.write('printf("Hasta ahora la pista ha sido utilizada por %d aviones. kk",aterrizajes);\n')
    archivo.write('printf("Solicitando pista avion numero NN aterrizaje en %c kk",AB);'.replace("NN",str(n)))
    archivo.write("             sem_post(&aeropuerto);\n")
    archivo.write("             break;}\n")
    archivo.write("         }\n")
    archivo.write("     }\n")
    n=n+1
  
archivo.close()

archivo=open("pthread_t.h","w")
n=1
while(n<total):
    archivo.write("    pthread_t thread_NN;\n".replace("NN",str(n)))
    n=n+1
archivo.close()


archivo=open("pthread_join.h","w")
n=1
while(n<total):
    archivo.write("if(iii<n){     \n")
    archivo.write("pthread_join(thread_NN,NULL);     \n".replace("NN",str(n)))
    archivo.write("iii=iii+1;     \n")
    archivo.write("}     \n")
    n=n+1
    
archivo.close()
 
archivo=open("pthread_create.h","w")
n=1
while(n<total):
    archivo.write("if(ii<n){ \n")
    archivo.write("pthread_create(&thread_NN,NULL,*avionNN,NULL); \n".replace("NN",str(n)))
    #archivo.write("printf('Pista utilizada por el avion %d'        ,NN);".replace("NN",str(n)))
    archivo.write("sleep(0);\n")


    archivo.write("ii=ii+1; \n")
    archivo.write("} \n")
    n=n+1
    
    
archivo.close()
   
 

archivo=open("static.h","w")
n=1
while(n<total):
    archivo.write("static void * avionNN(void* arg);\n".replace("NN",str(n)))
    n=n+1
    
    
archivo.close()
   
   
   

   
   
   
    
	
