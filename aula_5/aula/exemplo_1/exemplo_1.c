#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char nome[10];
    nome[0] = 'A';
    nome[1] = 'n';
    nome[2] = 'a';
    nome[3] = '\0';
    printf("%s\n", nome);
    printf("nome : %zu bytes\n", sizeof(nome));

    return 0;
}