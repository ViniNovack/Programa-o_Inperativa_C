#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define Capacidade_inicial 5
#define aumento_gradual_da_capacidade 2

int main(){
    FILE* arquivo = fopen("vendas.txt", "r");
    if(arquivo == NULL){
        puts("Falha na abertura do arquivo");
        exit(1);
    }
    size_t capacidade = Capacidade_inicial;
    float* vendas = (float*) malloc(capacidade * sizeof(float));

    if(vendas = NULL){
        puts("Erro na alocacao de memoria");
        exit(2);
    }
    
    return 0;
}