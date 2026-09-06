#include <stdio.h>
#include <stdbool.h>

int main() {
    int t, d, m, x;
    int y = 0, z = 0;
    bool r = false;
    printf("Digite os tres numeros: ");
    scanf("%d %d %d", &t, &d, &m);

    int i = 1;
    while(i < (m + 1)){
        if(i % 2 == 0){
            printf("Digite o tempo %d: ", i);
            scanf("%d", &y);
            x = z - y;
        } else{
            printf("Digite o tempo %d: ", i);
            scanf("%d", &z);
            x = y - z;
        }

        if(x < 0){
            x = x * -1;
        }

        if(x >= t){
            r = true;
        }

        i++;
    }

    int ultimo;
    if(m % 2 == 0){
        ultimo = y;
    } else{
        ultimo = z;
    }
    int Final = d - ultimo;
    if (Final >= t) {
        r = true;
    }

    if(r){
        printf("Y");
    } else{
        printf("N");
    }
    return 0;
}
