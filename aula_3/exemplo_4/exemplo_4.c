#include <stdio.h>
#include <stdbool.h>

int main(){
    
    float nota[] = {7.0, 8.5, 6.2, 9.0, 4.5, 8.0};

    int tamanho_vetor = sizeof(nota);
    printf("Tamanho do vetor: %zu bytes\n", tamanho_vetor);

    int tamaho_elemento = sizeof(nota[0]);
    printf("Tamanho de um elemento: %zu bytes\n", tamaho_elemento);

    int capacidade_vetor = tamanho_vetor / tamaho_elemento;
    printf("Logo, o vetor possui %d elementos.\n", capacidade_vetor);

    return 0;
}