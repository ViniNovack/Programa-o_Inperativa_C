#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o tamanho do array: ");
    scanf("%d",&n);

    int A[n];
    int B[n];

    printf("Digite os valores: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0, j = (n - 1); 0 <= j; i++, j--){
        B[i] = A[j];
    }

    bool compar = true;

    for(int i = 0; i < n; i++){
        if(A[i] != B[i]){
            compar = false;
        }
    }

    printf("\n%d", compar);
    
    return 0;
}