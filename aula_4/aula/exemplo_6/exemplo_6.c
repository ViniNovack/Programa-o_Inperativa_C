#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int mult(int min, int max, int divisor){
    int contador = 0;
    while(min <= max){
        if(min % divisor == 0){
            contador++;
        min++;
        }
    }
    return contador;
}

int main(){
    int minimo = 100;

    int maximo = 200;
    int divisor = 3;

    printf("Ha %d multiplos de %d entre %d e %d \n", mult(minimo, maximo, divisor), divisor, minimo, maximo);

    return 0;
}