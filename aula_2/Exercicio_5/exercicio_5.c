#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, f = 1, nn;
    printf("Digite um numero: ");
    scanf("%d", &n);
    nn = n;
    for(int i = 1; i <= n; i++){
        f = f * nn;
        nn = nn - 1;
    }
    printf("%d", f);
    return 0;
}