/* código 2.1 - revisando ponteiros 
    miriam gonzaga - 11.04.2026

*objetivo do código: 
    crie uma função que recebe um ponteiro para int e dobre seu valor.
*/

// inclusão de bibiliotecas:
//#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// a função só precisa dobrar o valor, então ela não precisa ter retorno
void dobrar_int(int *number){ // recebe ponteiro e dobra o valor
    *number = *number * 2; // o valor guardado é dobrado
}

int main(){
    int numero_x = 10; // numero_x armazena o valor 10
    int *ptr = &numero_x; // ponteiro pra numero_x
    
    printf("Valor inicial de x: %d\n", numero_x);
    dobrar_int(ptr);
    printf("Valor inicial de x: %d\n", numero_x);
}