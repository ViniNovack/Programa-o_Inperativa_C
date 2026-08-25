#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    double s = 0, so = 1.0, su = 0;
    printf("Digite um valor: ");
    scanf("%d", &n);

    do {
        s = s + (so / (n - su));
        so = so + 1;
        su = su + 1;
    } while(n > su);

    do{
        s = s + ((n - su) / so);
        so = so - 1;
        su = su - 1;
    } while(su >= 0);

    printf("%f", s);
    return 0;
}