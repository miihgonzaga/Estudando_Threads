/* código 2.1 - revisando ponteiros 
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

void *minha_thread(void *arg){ // recebe ponteiro e dobra o valor
    int *number = (int*)arg; // cast void -> int

    printf("Thread Secundaria: Valor recebido de x: %d\n", *number);
    *number = (*number) * 2; // o valor guardado é dobrado
    printf("Thread Secundaria: Valor atual de x: %d\n", *number);

    return NULL; 
}

int main(){
    pthread_t thread; 
    int numero = 42; 

    pthread_create(&thread, NULL, minha_thread, &numero);
    printf("Main: Valor atual de x: %d\n", numero);
    pthread_exit(NULL); 

}