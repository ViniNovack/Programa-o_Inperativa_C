#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Função para exibir os bits de um int

int isolar(int a, int posicao){
    int b = 1 << posicao;
    int c = a & b;

    if(c){
        return 1;
    } else{
        return 0;
    }
}

void showbitsint(int z){
    // N: número de bits em um int
    int N = sizeof(int) * 8;
    for(int i = N - 1; i >= 0; )
}

int main(){
    
    
    return 0;
}