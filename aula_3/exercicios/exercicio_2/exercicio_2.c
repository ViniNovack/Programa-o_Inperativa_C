#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;
    
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int A[n];

    printf("Digite os valores do arry: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0, j = (n - 1); i < j; i++, j--){
        int s = A[i] + A[j];
        printf("\n%d\n", s);
    }

    return 0;
}