#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    double h, s = 1.0, ss = 1.0;
    
    printf("Digite um numero para somar: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        h = h + s;
        ss = ss + 1;
        s = 1.0 / ss;
    }
    printf("%f", h);

    return 0;
}