/* código 2.2 - revisando ponteiros 
    miriam gonzaga - 11.04.2026

*objetivo do código: testar o escalonador e usar cast pra ponteiros void -> int

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
    printf("2a: iniciando thread secundária\n");
    printf("2a: quando será que o escalonador manda a thread começar?1\n");
    printf("2a:quando será que o escalonador manda a thread começar?2\n");
    printf("2a:quando será que o escalonador manda a thread começar?3\n");
    printf("2a:quando será que o escalonador manda a thread começar?4\n");
    printf("2a:quando será que o escalonador manda a thread começar?5\n");
    printf("2a:quando será que o escalonador manda a thread começar?6\n");
    printf("2a:quando será que o escalonador manda a thread começar?7\n");
    printf("2a:quando será que o escalonador manda a thread começar?8\n");
    printf("2a:quando será que o escalonador manda a thread começar?9\n");
    printf("2a:eai escalonador??\n");
    printf("2a: quando será que o escalonador manda a thread começar?1\n");
    printf("2a:quando será que o escalonador manda a thread começar?2\n");
    printf("2a:quando será que o escalonador manda a thread começar?3\n");
    printf("2a:quando será que o escalonador manda a thread começar?4\n");
    printf("2a:quando será que o escalonador manda a thread começar?5\n");
    printf("2a:quando será que o escalonador manda a thread começar?6\n");
    printf("2a:quando será que o escalonador manda a thread começar?7\n");
    printf("2a:quando será que o escalonador manda a thread começar?8\n");
    printf("2a:quando será que o escalonador manda a thread começar?9\n");
    printf("2a:eai escalonador??\n");
    printf("2a: quando será que o escalonador manda a thread começar?1\n");
    printf("2a:quando será que o escalonador manda a thread começar?2\n");
    printf("2a:quando será que o escalonador manda a thread começar?3\n");
    printf("2a:quando será que o escalonador manda a thread começar?4\n");
    printf("2a:quando será que o escalonador manda a thread começar?5\n");
    printf("2a:quando será que o escalonador manda a thread começar?6\n");
    printf("2a:quando será que o escalonador manda a thread começar?7\n");
    printf("2a:quando será que o escalonador manda a thread começar?8\n");
    printf("2a:quando será que o escalonador manda a thread começar?9\n");
    printf("2a:eai escalonador??\n");
    printf("2a:Valor recebido de x: %d\n", *number);
    *number = *number * 2; // o valor guardado é dobrado
    printf("2a:Valor atual de x: %d\n", *number);

    pthread_exit(NULL); // termina a thread e libera recursos
}

int main(){
    pthread_t thread; 
    int numero = 42; 
    printf("a main te dá um salve\n");
    printf("oi, aqui é a main\n");
    printf("vamos testar o escalonador\n");
    pthread_create(&thread, NULL, minha_thread, &numero);
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: Valor atual de x: %d\n", numero);
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: Valor atual de x: %d\n", numero);printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: Valor atual de x: %d\n", numero);printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: será que o valor já foi dobrado?\n");
    printf("main: ou será que está sendo dobrado?\n");
    printf("main: será que o valor já foi dobrado?1\n");
    printf("main: ou será que está sendo dobrado?1\n");
    printf("main: será que o valor já foi dobrado?2\n");
    printf("main: ou será que está sendo dobrado?2\n");
    printf("main: será que o valor já foi dobrado?3\n");
    printf("main: ou será que está sendo dobrado?3\n");
    printf("main: será que o valor já foi dobrado?4\n");
    printf("main: ou será que está sendo dobrado?4\n");
    printf("main: será que o valor já foi dobrado?5\n");
    printf("main: ou será que está sendo dobrado?5\n");
    printf("main: será que o valor já foi dobrado?6\n");
    printf("main: ou será que está sendo dobrado?6\n");
    printf("main: será que o valor já foi dobrado?7\n");
    printf("main: ou será que está sendo dobrado?7\n");
    printf("main: será que o valor já foi dobrado?8\n");
    printf("main: ou será que está sendo dobrado?8\n");
    printf("main: Valor atual de x: %d\n", numero);

    pthread_exit(NULL); // encerra a thread principal

}