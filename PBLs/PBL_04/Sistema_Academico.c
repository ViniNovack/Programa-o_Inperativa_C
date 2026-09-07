#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include "Funcoes/Leitura.h"
#include "Funcoes/Classificacao.h"
#include "Funcoes/Relatorio.h"
#include "Tipos/Estudantes.h"


#define TAM 11
Estudantes estudante[TAM];

int main(){
    printf("Digite a matricula e a nota:\n");
    for(int i = 0; i < TAM; i++){
        printf("%d. ", (i + 1));
        scanf("%d %f", &estudante[i].numero_de_matricula, &estudante[i].nota_semestral);
    }

    for(int i = 0; i < TAM; i++){
        classificar(&estudante[i].nota_semestral, &estudante[i].indicador_de_aprovacao);
    }

    imprimir_relatorio(estudante, TAM);

    return 0;
}