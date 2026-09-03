#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int a, b, x;

void ler(){
    printf("Digite a: ");
    scanf("%d", &a);

    printf("Digite b: ");
    scanf("%d", &b);
}

void somar(){
    x = a + b;
}

void imprimir(){
    printf("Resultado: %d\n", x);
}

int main(){

    ler();
    somar();
    imprimir();

    return 0;
}