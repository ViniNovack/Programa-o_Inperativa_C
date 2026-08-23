#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, z;
    char y;
    float r;
    printf("Digite[numero - sinal - numero]: ");
    scanf("%d %c %d", &x, &y, &z);

    switch(y) {
        case '+':
            r = x + z;
            break;
        case '-':
            r = x - z;
            break;
        case '*':
            r = x * z;
            break;
        case '/':
            r = x / z;
            break;
    }
    
    printf("Resultado: %f", r);

    return 0;
}
