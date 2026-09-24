#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define MAX_MARCA 20
#define MAX_MODELO 30
#define MAX_PLACA 7
#define MAX_VEICULOS 5

typedef struct{
    char marca [MAX_MARCA];
    char modelo [MAX_MODELO];
    char placa [MAX_PLACA];
    short ano_de_fabricacao;
} Veiculo;

void preencher(Veiculo* v, char* marca, char* modelo, char* placa, int ano){
    strcpy(v -> marca, marca);
    strcpy(v -> modelo, modelo);
    strcpy(v -> placa, placa);
    v -> ano_de_fabricacao = ano;
}

void imprimir(Veiculo v){
    printf("%s\n", v.marca);
    printf("%s\n", v.modelo);
    printf("%s\n", v.placa);
    printf("%s\n", v.ano_de_fabricacao);
}

int main(){
    Veiculo veiculos[MAS_VEICULOS];
    preencher(&veiculos[0], "Toyota", "Yaris", "BRA7X80", 2025);
    imprimir(veiculos[0]);
    return 0;
}
