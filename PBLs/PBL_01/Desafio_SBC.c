#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int k;
    int f;

    printf("Digite o numero de N de diretores: ");
    scanf("%d", &n);
    printf("Digite o tempo K maximo da reuniao: ");
    scanf("%d", &k);

    k -=(n - 1);
    f = k / n;
    printf("Cada diretor vai ter o tempo de %d minutos para falar.", f);
}