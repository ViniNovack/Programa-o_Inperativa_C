#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void imprimir(char* s){
    if(*s != '/0'){
        imprimir(s + 1);
        putchar(*s);
    }
}

int main(){
    imprimir("Hello World");
    return 0;
}