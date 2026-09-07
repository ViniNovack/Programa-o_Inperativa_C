#ifndef classificacao
#define classificacao

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void classificar(float* nota, bool* aprovado){
    if(*nota >= 7){
        *aprovado = true;
    } else{
        *aprovado = false;
    }
}

#endif