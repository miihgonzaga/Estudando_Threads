/* código 2.4 - exercício de revisão de ponteiros 
    miriam gonzaga - 11.04.2026

*objetivo do código: 
    1. declarar um inteiro = 5; 
    2. criar uma thread que recebe o endereço do número; 
    3. usar a thread para dobrar o valor; 
    4. a main deve esperar a thread terminar para imprimir o valor; 

*/

// inclusão de bibiliotecas:
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *minha_thread(void *arg){ // a thread sempre retorna um ponteiro ou NULL
    int *numero = (int*)arg; // cast pra ponteiro de int
    printf("Thread Secundaria: Valor recebido de x: %d\n", *numero);
    *numero = (*numero) * 2; // dobra o valor
    printf("Thread Secundaria: Valor atual de x: %d\n", *numero);
    pthread_exit(NULL); // encerra a execução da thread, retorna NULL. 
}

int main(){
    pthread_t thread; 
    int valor_x = 15; 
    printf("Main aqui, hello world!\n");
    printf("Main aqui, novidades?\n");
    pthread_create(&thread, NULL, minha_thread, &valor_x); // cria a thread e passa a função de execução
    printf("Main aqui, antes do join\n");
    printf("Main aqui, tudo bem?\n");
    pthread_join(thread, NULL); //a main fica parada esperando a thread terminar. 
    printf("Main aqui, o join já terminou??\n");

    pthread_exit(NULL); // encerra a main

}