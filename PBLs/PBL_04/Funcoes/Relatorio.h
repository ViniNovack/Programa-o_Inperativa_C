#ifndef relatorio
#define relatorio

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


#include "../Tipos/Estudantes.h"

void imprimir_relatorio(Estudantes list[], int tamanho){
    printf("____________________RELATORIO____________________\n");
    for(int i = 0; i < tamanho; i++){
        printf("%d. matricula = %d - nota = %f - aprovado = %d\n", (i + 1), list[i].numero_de_matricula, list[i].nota_semestral, list[i].indicador_de_aprovacao);
    }
}

#endif