#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    FILE* arquivo = fopen("dados.txt", "r");

    int x;
    fscanf(arquivo, "%d", &x);
    printf("%d", x);

    float y;
    char z;
    fscanf(arquivo, "%f %c", &y, &z);
    printf("%.1f ", y);
    printf("%c", z);

    fclose(arquivo);
}