#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));

    printf("Digite os valores do vetor: \n");
    int i = 0;
    while(i < n){
        int valor;
        scanf("%d", &valor);

        bool verif = false;
        for(int *p = v; p < v + i; p++){
            if(*p == valor){
                verif = true;
                break;
            }
        }
        
        if(verif == true){
            printf("O valor '%d' ja esta no vetor\n", valor);
        } else{
            v[i] = valor;
            i++;
        }
    }

    printf("v = ");
    for(int *p = v; p < v + n; p++){
        printf("%d ", *p);
    }

    return 0;
}