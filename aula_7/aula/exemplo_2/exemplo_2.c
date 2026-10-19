#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    // fprintf
    FILE* saida = fopen("dados.txt", "w");
    fprintf(saida, "Dados do clima:\n");
    fprintf(saida, "temperatura: %d\n", 15);
    fprintf(saida, "umidade: %.2f\n", 0.75);
    fclose(saida);
}