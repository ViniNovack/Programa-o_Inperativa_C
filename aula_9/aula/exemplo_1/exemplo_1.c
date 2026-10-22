#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE* arquivo = fopen("vendas.txt", "r");
    if(arquivo == NULL){
        puts("Falha na abertura do arquivo");
        exit(1);
    }

    int contador = 0;
    float valor;
    while(fscanf(arquivo, "%f", &valor) != EOF){
        contador++;
    }
    fclose(arquivo);

    float vendas[contador];

    arquivo = fopen("vendas.txt", "r");

    for(int i = 0; i < contador; i++){
        fscanf(arquivo, "%f", &vendas[i]);
    }
    fclose(arquivo);

    return 0;
}