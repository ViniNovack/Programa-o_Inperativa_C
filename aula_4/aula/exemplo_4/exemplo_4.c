#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int diferenca(int valor1, int valor2){
    int dif = valor1 - valor2;

    if(dif < 0){
        dif = -dif;
    }

    return dif;
}

int main(){
    int a, b, x;

    printf("Digite a: ");
    scanf("%d", &a);
    printf("Digite b: ");
    scanf("%d", &b);

    x = diferenca(a, b);

    printf("Diferenca: %d\n", x);

    return 0;
}