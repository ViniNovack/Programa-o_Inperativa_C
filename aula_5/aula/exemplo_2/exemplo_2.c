#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

int main(){
    // char nome[10]; // vetor de 10 caracteres
    // scanf("%s", nome);
    // printf("nome = %s", nome);
//_____________________________________________________________
    // char texto[10];
    // gets(texto);
    // puts(texto);
//_____________________________________________________________
    // char nome[] = "Aho";
    // char texto[10];
    // gets(texto);
    // puts(texto);
    // puts(nome);
//_____________________________________________________________
    // size_t tam = strlen("Terra");
    // strlen("Terra");
    // strlen("Terra Azul");
    // strlen("");
//_____________________________________________________________
    char texto[MAX];
    fgets(texto, MAX, stdin);

    char ultimo = texto[strlen(texto) - 1];
    printf("ultimo carater: %c\n", ultimo);
    printf("%d\n", ultimo);

    return 0;
}