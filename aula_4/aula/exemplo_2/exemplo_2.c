#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct Estudante{
    int matricula;
    int codigo_do_curso;
    int ano_de_entrada;
    float IRA;
} Estudante;

typedef struct Ponto{
    float x;
    float y;
} Ponto;

int main(){
    Estudante e1;
    Ponto p1;

    Ponto coordenada[4];
    coordenada[0].x = 1.0;
    coordenada[0].y = 3.0;

    coordenada[1].x = 2.0;
    coordenada[1].y = 4.5;

    coordenada[2].x = 3.0;
    coordenada[2].y = 3.0;

    coordenada[3].x = 4.0;
    coordenada[3].y = 7.1;

    return 0;
}