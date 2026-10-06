#include <stdio.h>
#include <string.h>

#define MAX_MARCA 20
#define MAX_MODELO 30
#define MAX_PLACA 8
#define MAX_VEICULOS 5

typedef struct {
    char marca[MAX_MARCA];
    char modelo[MAX_MODELO];
    char placa[MAX_PLACA];
    short ano_de_fabricacao;
} Veiculo;

void preencher(Veiculo* v, const char* marca, const char* modelo, const char* placa, int ano) {
    snprintf(v->marca, MAX_MARCA, "%s", marca);
    snprintf(v->modelo, MAX_MODELO, "%s", modelo);
    snprintf(v->placa, MAX_PLACA, "%s", placa);
    v->ano_de_fabricacao = ano;
}

void imprimir(const Veiculo* v) {
    printf("%s\n", v->marca);
    printf("%s\n", v->modelo);
    printf("%s\n", v->placa);
    printf("%d\n", v->ano_de_fabricacao);
}

int main() {
    Veiculo veiculos[MAX_VEICULOS];
    preencher(&veiculos[0], "Toyota", "Yaris", "BRA7X80", 2025);
    imprimir(&veiculos[0]);
    return 0;
}
