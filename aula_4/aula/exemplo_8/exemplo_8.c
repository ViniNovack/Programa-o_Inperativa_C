#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void inverter(float numeros[], int N){
    int meio = N / 2;
    for(int i = 0, j = N-1; i < meio; i++, j--){
        float temp = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = temp;
    }
}

int main(){
    float notas[] = {6.0, 7.0, 8.0, 9.0, 10.0};
    int N = sizeof(notas) / sizeof(float);

    inverter(notas, N);

    for(int i = 0; i < N; i++){
        printf("notas[ %d ] = %5.2f\n", i, notas[i]);
    }

    return 0;
}