#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;

    printf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));

    printf("\nDigite os valores: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int x;
    printf("\nDigite o valor que voce quer procurar: ");
    scanf("%d", &x);

    int result = -1;
    for(int *p = v; p < v + n; p++){
        if(*p == x){
            result = p - v;
            break;
        }
    }

    printf("Resultado: %d", result);
    
    free(v);
    return 0;
}