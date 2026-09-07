#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include "Funcoes/Leitura.h"
#include "Funcoes/Classificacao.h"
#include "Funcoes/Relatorio.h"
#include "Tipos/Estudantes.h"


#define TAM 5
Estudantes estudante[TAM];

int main(){
    ler_dados_dos_estudantes(estudante, TAM);

    for(int i = 0; i < TAM; i++){
        classificar(&estudante[i].nota_semestral, &estudante[i].indicador_de_aprovacao);
    }

    imprimir_relatorio(estudante, TAM);

    return 0;
}