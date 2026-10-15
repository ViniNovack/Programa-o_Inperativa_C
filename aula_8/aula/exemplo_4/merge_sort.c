#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void preenchimento(int vetor[], int tamanho){
    printf("Digite os 4 valores: ");
    int n = 0;
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &n);
        vetor[i] = n;
    }
}

void juncao(int vetor1[], int tamanho1, int vetor2[], int vetor3[]){
    int verf = 0;
    int count = 0;
    for(int i = 0; i < tamanho1; i++){
        if(i % 2 == 0){
            vetor1[i] = vetor2[count];
        } else{
            vetor1[i] = vetor3[count];
        }
        
        verf++;
        if(verf == 2){
            count++;
            verf = 0;
        }
    }
}

void sorted(int vetor[], int tamanho){
    for(int j = 0; j < tamanho - 1; j++){
        for(int i = 0; i < (tamanho - 1 - j); i++){
            if(vetor[i] > vetor[i + 1]){
                int aux = vetor[i + 1];
                vetor[i + 1] = vetor[i];
                vetor[i] = aux;
            }
        }
    }
}


int main(){
    int A[4] = {0, 0, 0, 0};
    int B[4] = {0, 0, 0, 0};
    int C[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    
    preenchimento(A, 4);
    preenchimento(B, 4);
    
    juncao(C, 8, B, A);
    
    sorted(C, 8);
    
    for(int i = 0; i < 8; i++){
        printf("%d, ", C[i]);
    }
    
    return 0;
}