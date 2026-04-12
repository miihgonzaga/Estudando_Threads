/* código 7 - implementação de mutex num contador
    miriam gonzaga - 12.04.26

entendendo o código:
    usando uma variável global, contador, o programa cria duas threads secundárias
    incrementar e decrementar, que realizam operações sobre o valor da mesma variável
    sem mutex, aconteceria disputa (condição de corrida)
    atua como um cadeado, de forma que SÓ UAM THREAD POR VEZ pode mexer no contador.
    deve ser usado sempre que tiver 
        *variáveis globais, 
        *compartilhadas entre threads 
        *e sendo modificadas ao longo da execução do programa

    DEVE TRAVAR O MENOR TRECHO POSSÍVEL (regiao critica)

*/

// inclusão de bibliotecas:
#include <pthread.h> // biblioteca p/ acessar as ferramentas que manipulas threads
#include <stdio.h>
#include <stdlib.h>

long contador = 0; // variável global

pthread_mutex_t mymutex = PTHREAD_MUTEX_INITIALIZER;

// funções de thread:
// thread 1:
void *incrementar(void *threadid){ // soma 1 à variavel

    // variável local i (é descartada após a execução da thread)
    for(int i = 0; i < 9000000; i++) { // enquanto i < 9000000, incrementa i e executa
        pthread_mutex_lock(&mymutex); // bloqueia 
        contador++;  // altera a variável contador (soma 1) (não é um comando atômico)
        pthread_mutex_unlock(&mymutex); //libera o mutex
    }
    pthread_exit(NULL); //encerra thread secundaria 1
}

// thread 2:
void *decrementar(void *threadid){ // subtrai 1 da variável

    // variável local i (é descartada após a execução da thread)
    for(int i = 0; i < 9000000; i++) { // enquanto i < 9000000, incrementa i e executa
        pthread_mutex_lock(&mymutex); // bloqueia 
        contador--; // altera a variável contador (subtrai 1) (não é um comando atômico)
        pthread_mutex_unlock(&mymutex); // libera o mutex 
    }
    pthread_exit(NULL); //encerra thread secundaria 2
}

// thread principal 
int main (int argc, char *argv[]){  
    pthread_t thread1, thread2; // criar as duas threads secundárias  

    pthread_create(&thread1, NULL, incrementar, NULL); // cria as threads
    pthread_create(&thread2, NULL, decrementar, NULL); 

    pthread_join(thread1, NULL); // a main só executa depois que thread 1 terminar
    pthread_join(thread2, NULL); // a main só executa depois que thread 1 terminar

    printf("Valor final do contador: %ld\n", contador); // imprime o valor final da variável global
    
    pthread_exit(NULL); // fim da thread principal
}