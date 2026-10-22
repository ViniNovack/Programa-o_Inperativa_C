#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Planeta Planeta;

struct Planeta{
    char nome[16];
    double raio;
    double distancia_do_sol;

    Planeta* proximo;
};

int main(){
    const size_t TAMANHO_ELEMENTO = sizeof(Planeta);

    Planeta* terra = (Planeta*) calloc(1, TAMANHO_ELEMENTO);
    strcpy(terra -> nome, "Terra");
    terra -> raio = 6378.0;
    terra -> distancia_do_sol = 149600000.0;
    terra -> proximo = NULL;

    Planeta* marte = (Planeta*) calloc(1, TAMANHO_ELEMENTO);
    strcpy(marte -> nome, "Marte");
    marte -> raio = 33333.0;
    marte -> distancia_do_sol = 234623874.0;
    marte -> proximo = terra;


    // PERCORRER LISTA
    Planeta* p = marte;  // usar ultimo elemento
    while(p){
        printf("%s\n", p -> nome);
        p = p -> proximo;
    }

    // PEGANDO UM ELEMENTO POR SUA POSIÇÃO
    Planeta *atual = marte;
    int posicao = 1;

    for(int i = 0; i < posicao; i++){
        if(atual != NULL){
            atual = atual -> proximo;
        }
    }

    if(atual != NULL){
        printf("%s\n", atual -> nome);
    }

}

