#include <stdio.h>
#include <stdbool.h>

int main(){
    char x, y, z, aux;
    printf("Digite tres letras, separadas por espaco: ");
    scanf("%c %c %c", &x, &y, &z);

    if(x > y){
        aux = x;
        x = y;
        aux = y;

    }

    if(y > z){
        aux = y;
        y = z;
        aux = z;
    }

    if(x > y){
        aux = x;
        x = y;
        y = aux;
    }
    
    printf("%c - %c - %c", x, y, z);
    return 0;
}
