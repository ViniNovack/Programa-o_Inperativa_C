#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int comparar(const void *a, const void *b){
    int x = *(const int *) a;
    int y = *(const int *) b;
    return x - y;
}

int main(){
    int n;
    printf("Digite o numero de elementos do array: ");
    scanf("%d", &n);

    int *v = (int*) malloc(n * sizeof(int));
    printf("Digite os valores: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int *vv = v;
    qsort(vv, n, sizeof(int), comparar);

    printf("Cresente: ");
    for(int *p = vv; p < vv + n; p++){
        printf("%d ", *p);
    }

    return 0;
}