#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Posso usar a função que estou criando dela mesma

int f(int x){
    if(x == 0){
        return 1;
    } else{
        return x * f(x - 1);
    }
}

int main(){
    printf("%d\n", f(4));
    return 0;
}