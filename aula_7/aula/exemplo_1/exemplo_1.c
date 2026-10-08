#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    // Ponteiro para o arquivo
    FILE* arquivo;

    // Criação do arquivo dados.txt (modo "w" -- write)
    arquivo = fopen("dados.txt", "w");

    // verificação se a criação ocorreu com sucesso
    if(arquivo != NULL){
        printf("Sucesso na criacao do arquivo\n");
        fclose(arquivo); // fecha o arquivo
    } else{
        pritnf("Falha na criacao do arquivo\n");
    }
}