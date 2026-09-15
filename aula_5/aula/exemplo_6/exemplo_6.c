#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char origem[30] = "Pantanal";
    char destino[20];

    strcpy(destino, origem);

    printf("Origem: %s\n", origem);
    printf("Destino: %s\n", destino);
    
    return 0;
}