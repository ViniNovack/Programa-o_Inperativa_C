#ifndef leitura
#define leitura

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


#include "../Tipos/Estudantes.h"

void ler_dados_dos_estudantes(Estudantes list[], int tamp){
    printf("Digite a matricula e a nota:\n");
    for(int i = 0; i < tamp; i++){
        printf("%d. ", (i + 1));
        scanf("%d %f", &list[i].numero_de_matricula, &list[i].nota_semestral);
    }
}

#endif