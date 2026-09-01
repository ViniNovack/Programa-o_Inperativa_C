#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define TAMANHO 5

int main(){
    int A[TAMANHO], B[TAMANHO], S[TAMANHO];
    
    printf("Digite os valores de A: \n");
    for(int i = 0; i < TAMANHO; i++){
        scanf("%d", &A[i]);
    }
    
    printf("Digite os valores de B: \n");
    for(int i = 0; i < TAMANHO; i++){
        scanf("%d", &B[i]);
    }
    
    for(int i = 0; i < TAMANHO; i++){
        S[i] = A[i] + B[i];
    }

    printf("\nA = ");
    for(int i = 0; i < TAMANHO; i++){
        printf("%d, ", A[i]);
    }

    printf("\nB = ");
    for(int i = 0; i < TAMANHO; i++){
        printf("%d, ", B[i]);
    }

    printf("\nS = ");
    for(int i = 0; i < TAMANHO; i++){
        printf("%d, ", S[i]);
    }

    return 0;
}