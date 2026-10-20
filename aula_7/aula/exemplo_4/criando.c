#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE* arquivo;

    arquivo = fopen("dados.txt", "w");

    if(arquivo != NULL){
        printf("Deu certo\n");
        fclose(arquivo);
    } else{
        printf("Nao deu certo\n");
    }

    return 0;
}