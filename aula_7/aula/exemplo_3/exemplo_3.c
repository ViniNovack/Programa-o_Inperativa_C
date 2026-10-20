#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE* saida = fopen("dados.txt", "w");

    // fputs/fputc
    fputs("Brasil ==> ", saida);       // string
    fputc('B', saida);                 // caractere
    fputc('R', saida);
    fputc('\n', saida);


    fputs("Portugal ==> ", saida);
    fputc('P', saida);
    fputc('T', saida);
    fputc('\n', saida);
    
    fclose(saida);
}