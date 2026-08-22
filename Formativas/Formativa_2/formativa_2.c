#include <stdio.h>
#include <stdbool.h>

int main() {
    int t, d, m, y;
    bool r = true;
    printf("Digite os tres numeros: ");
    scanf("%d %d %d", &t, &d, &m);

    int i = 1;
    while(i < (m + 1)){
        printf("Digite o tempo %d: ", i);
        scanf("%d", y);

        if(t < y){
            r = false;
        }
        

        i++;
    }

    if(r == true){
        printf("Y");
    } else if(r == false){
        printf("N");
    }

    return 0;
}
