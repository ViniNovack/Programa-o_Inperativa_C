#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}