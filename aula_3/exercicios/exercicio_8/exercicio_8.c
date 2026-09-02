#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o numero de estudantes no maximo 50: \n");
    while(true){
        scanf("%d", &n);
        if(n <= 50){
            break;
        }
    }

    int *v = (int *) malloc(n * sizeof(int));

    printf("Digite as notas: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int soma = 0;
    int i = 0;
    for(int *p = v; p < v + n; p++){
        soma +=*p;
        i ++;
    }

    float media = soma / i;


    float soma_diferencas = 0;
    for(int i = 0; i < n; i++){
        float diferenca = v[i] - media;
        soma_diferencas += diferenca * diferenca;
    }
    float variancia = soma_diferencas / n;
    float desvio_padrao = sqrt(variancia);

    printf("media: %f\n", media);
    printf("desvio_padrao: %f", desvio_padrao);

    return 0;
}