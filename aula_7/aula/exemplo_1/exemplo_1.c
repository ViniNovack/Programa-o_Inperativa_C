#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE* arquivo;   // ponteiro para o arquivo

    arquivo = fopen("dados.txt", "w");    // cria dados.txt para escrita

    if(arquivo != NULL){                              // a criação deu certo?
        printf("Sucesso na criacao do arquivo\n");
        fclose(arquivo);                             // fecha o arquivo
    } else{
        printf("Falha na criacao do arquivo\n");
    }

    return 0;
}