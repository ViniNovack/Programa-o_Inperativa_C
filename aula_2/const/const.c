#include <stdio.h>
#include <stdbool.h>

const int VERMELHO = 0;
const int VERDE = 1;
const int AMARELO = 2;

int main() {
    int s1 = VERDE;
    int s2 = VERMELHO;

    printf("%d %d\n", s1, s2);

    if(s1 == VERDE){
        puts("permitido passar");
    } else if(s1 == VERMELHO){
        puts("obrigado a parar");
    } else{
        puts("prestes a fechar");
    }

    return 0;
}

// Definição de constante: valor imutável
