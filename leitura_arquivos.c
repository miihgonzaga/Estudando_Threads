/* código 5 - manipulando arquivos (leitura e modificações)
    objetivo: criar 3 arquivos para a questão 2

*ideia básica de arquivos em C:
    três passos: abrir -> ler/escrever -> fechar
    FILE *f; // cria um ponteiro
    *f = fopen("arquivo.txt", "r") // cria um arquivo 
    fopen é uma função pra abertura de arquivos com dois parâmetros
        1. recebe uma string (nome do arquivo) e 
        2. um modo (w, r, a, w+, r+, a+):
        w = só escrita (limpa tudo e começa do início/se não existir, cria), 
        a = só escrita (só escreve no final do arquivo) 
        r = só leitura (só lê, se o arquivo não existir, retorna NULL)
        w+ = escrita e leitura(limpa tudo)
        a+ = escrita e leitura (só escreve no final do arquivo)
        r+ = leitura e 
*/

// inclusão de bibliotecas:
#include <pthread.h> // biblioteca p/ acessar as ferramentas que manipulas threads
#include <stdio.h>
#include <stdlib.h>

int main(){// criando arq txt:
    int N = 3; // número de arquivos

    //nomes dos arquivos:
    char *arquivos[] = {
    "arquivo1.txt",
    "arquivo2.txt",
    "arquivo3.txt"
    };

    //conteúdo do arquivo:
    int num_linha = 0; // inteiro pro número da linha
    char cod_linha[30], cidade[50], horario[20]; // atualização de informacoes da linha

    for (int i = 0; i < N; i++){
        // receber entradas pro arquivo: (escrita do arquivo)
        while (num_linha != -1){ // enquanto não for eof, vai escrever no novo arquivo
            scanf("%d", &num_linha);
            
            if (num_linha != -1) { // se não for -1, executa a leitura da entrada
                FILE *f = fopen(arquivos[i], "a"); //criar e abrir
                scanf("%s %s %s", cod_linha, cidade, horario); //leitura da entrada
                fprintf(f, "%d\n%s %s %s\n", num_linha, cod_linha, cidade, horario); // escreve no arquivo 
            
                fclose(f); // fecha o arquivo

            }
        }
        num_linha = 0; 
    
    }

    return 0; //pthread_exit(NULL); // encerra a main

}
