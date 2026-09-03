#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Estudante{
    int matricula;
    int codigo_do_curso;
    int ano_de_entrada;
    float IRA;
};

struct Ponto{
    float x;
    float y;
};

int main(){
    struct Estudante e1;
    struct Estudante e2;

    e1.matricula = 402775;
    e2.matricula = 444444;
    e1.IRA = 8.4;
    e2.IRA = 9.0;


    struct Ponto p1;
    struct Ponto p2;

    p1.x = 8.65;
    p1.y = -4.70;
    p2.x = 8.88;
    p2.y = 5.55;

    return 0;
}