#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char nome[20] = "Ana Terra";
    printf("Espaco ocupado pela variavel: %zu bytes\n", sizeof(nome));
    printf("Comprimento da string: %zu carateres\n", strlen(nome));
    
    return 0;
}