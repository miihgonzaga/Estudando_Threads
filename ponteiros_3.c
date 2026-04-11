/* código 2.3 - revisando ponteiros 
    miriam gonzaga - 11.04.2026

*objetivo do código: 

----- 
PONTEIROS DO TIPO VOID:
    a função que a thread executa tem que ter o formato void
        void *funcao_thread(void *arg)
        o void permite passar qualquer valor: inteiro, structs, qualquer coisa
        para manipular como um número inteiro é necessário realizar casts:
        cast de um ponteiro void pra int: *(int*)ptr

*/

// inclusão de bibiliotecas:
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct { // struct anônima 
    int inicio; 
    int fim; 
    char nome[100];
} Dados; // cria um novo tipo: Dados

void *minha_thread(void *arg){
    // recebe void *arg, que é um ponteiro de qualquer tipo
    // d é um ponteiro que aponta para uma struct do tipo Dados
    Dados *d = (Dados*)arg; // cast para a struct (converte no tipo Dados)
    printf("Processando %d até %d\n", d->inicio, d->fim); // acessa inicio e fim da struct
    pthread_exit(NULL);
}

int main(){
    pthread_t thread; 
    Dados info = {14, 25, "Thread1"}; // cria uma struct com esses valores dentro.

    pthread_create(&thread, NULL, minha_thread, &info); // passa o endereço da struct
    pthread_exit(NULL); 
}