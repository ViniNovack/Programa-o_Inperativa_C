#include <stdio.h>
#include <stdbool.h>

enum Dia{SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO, DOMINGO};

int main() {
    enum Dia dia_semana;
    printf("Digite um dia da semana [0 a 6]: ");
    scanf("%d", &dia_semana);
    switch(dia_semana) {
        case SEGUNDA: case TERCA: case QUARTA: case QUINTA: case SEXTA:
            puts("trabalho");
            break;
        case SABADO:
            puts("compras");
            break;
        case DOMINGO:
            puts("descanso");
            break;
        default:
            puts("ERRO!");
            break;
    }
    return 0;
}

// Definição de um novo tipo de dados com domínio de valores discreto e
// bem limitado.
// Cada valor do domínio corresponde a uma constante.
