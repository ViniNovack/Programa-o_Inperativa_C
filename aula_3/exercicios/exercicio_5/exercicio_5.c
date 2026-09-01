#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;

    pritnf("Digite o tamanho do array: ");
    scanf("%d", &n);

    int *v = (int *) malloc(n * sizeof(int));

    return 0;
}