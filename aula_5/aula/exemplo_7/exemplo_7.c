#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

int main() {
    char texto[MAX];
    fgets(texto, MAX, stdin);

    char ultimo = texto[strlen(texto) - 1];
    printf("Ultimo carater: %c\n", ultimo);
    printf("%d\n", ultimo);
    
    return 0;
}