/* código 1 - entendendo a criação de threads
    miriam gonzaga - 10.04.26

*ideia geral do código:
    é um programa que cria uma thread secundária para imprimir "Ola, mundo!"
    enquanto a thread principal imprime "Main"
    significa duas threads rodando ao mesmo tempo

*/
// inclusão de bibliotecas:
#include <pthread.h> // biblioteca p/ acessar as ferramentas que manipulas threads
#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO DA THREAD:
// função PrintHello é a ação que deve ser executada pela thread secundária 
    // void é padrão pras threads (pq permite passar qualquer dado)
    // toda thread começa por uma função com esse formato

void *PrintHello(void *threadid){     // THREAD SECUNDÁRIA
    // threadid é um argumento/parametro (não está sendo usado aqui, mas poderia receber dados)
    
    printf("Ola, mundo!\n"); // imprime "Ola, mundo!"
    pthread_exit(NULL); // termina a thread e libera recursos
}   

// THREAD PRINCIPAL:
int main (int argc, char *argv[]){   // THREAD PRIMÁRIA
    pthread_t thread;   
    // thread (thread é uma variável que representa a thread)
    //   pthread_t é um tipo de dado, 
        //usado pra identificar variáveis que são threads (assim como int, float)

    // código de retorno (return code)
    int rc;   

    // CRIANDO A THREAD:
    rc = pthread_create(&thread, NULL, PrintHello, NULL);     //cria e executa uma nova thread
        // &thread é um ponteiro para armazenar a thread criada
        // PrintHello é a tarefa a ser executada pela thread. 
        // pthread_create tenta criar a thread e retorna 0 se tiver sucesso ou != 0 se der erro

    // VERIFICAÇÃO DE ERRO:
    if (rc){  // se der erro pra criar a thread, o programa para (rc!= 0)  
        printf("ERRO; código de retorno é %d\n", rc);   // print de erro
        exit(-1);   // termina o programa   
        }   

    // CONSEGUIU CRIAR A THREAD (rc != 0)
    printf("Main\n");  // print "Main", executado pela thread principal
    pthread_exit(NULL); // encerra a thread principal
}

// NÃO DETERMININSMO: a ordem dos prints não é garantida, a cada execução pode resultar num valor diferente. 