/* código 8 - implementação dos fundamentos (Exercício 1)
    miriam gonzaga - 12.04.26

*objetivo: desenvolver um programa que 
    1. cria 3 threads
    2. cada thread recebe um ID através das structs
    3. imprime:
        "thread x iniciada", sendo x o numero da thread em questão 
        e "ID da thread x: ", conforme o ID guardado na struct

*/

// inclusão de bibliotecas:
#include <pthread.h> // biblioteca p/ acessar as ferramentas que manipulas threads
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// criando a struct:
typedef struct {
    int num_thread; 
    char id_thread[10]; //cosniderando que ID pode ser composto por letras e números
} dados_Thread;

// funções de thread:

// thread: (estrutura que será usada pelas 3 threads)
void *funcao_thread(void *arg){ // recebe a struct
    dados_Thread *d = (dados_Thread*)arg; // cast void -> structs
    
    printf("Thread %d iniciada!\n", d->num_thread); // imprime o número da thread
    printf("ID da thread %d: %s.\n", d->num_thread, d->id_thread); // imprime id
    pthread_exit(NULL); //finaliza thread 1

}

int main(){
    char threads_ids[3][10] = {"NLQ43", "MAJ990", "WKO261"}; 
    pthread_t thread[3]; // cria um array de threads
    dados_Thread informacoes[3]; // cria um array de structs 

    // CRIANDO TODAS AS THREADS:
    for (int i = 0; i<3; i++){
        // codigo de retorno = rc
        //cria e executa uma nova thread
        informacoes[i].num_thread = i;
        strcpy(informacoes[i].id_thread, threads_ids[i]); // copia o id da thread
        int rc = pthread_create(&thread[i], NULL, funcao_thread, &informacoes[i]);     
        
        // VERIFICAÇÃO DE ERRO:
        if (rc){  // se der erro pra criar a thread, o programa para (rc!= 0)  
            printf("ERRO; código de retorno é %d\n", rc);   // print de erro
            exit(-1);   // termina o programa   
            } 

    }

    // fazer a main esperar a execução de cada uma das threads antes de encerrar
    for (int i = 0; i<3; i++){
        pthread_join(thread[i], NULL); 
    }

    pthread_exit(NULL); // FIM DA MAIN
}