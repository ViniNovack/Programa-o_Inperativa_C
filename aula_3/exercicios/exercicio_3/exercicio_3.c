#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int A[n];

    printf("Digite os valores do array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    int B[n];

    for(int i = 0, j = (n - 1); 0 <= j; i++, j--){
        B[i] = A[j];
    }

    printf("A = ");
    for(int i = 0; i < n; i++){
        printf("%d, ", A[i]);
    }

    printf("\nB = ");
    for(int i = 0; i < n; i++){
        printf("%d, ", B[i]);
    }

    return 0;
}