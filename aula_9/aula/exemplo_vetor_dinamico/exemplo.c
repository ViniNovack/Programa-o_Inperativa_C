#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int capacidade = 2;
    int quantidade = 0;
    int numero;
    
    int *vetor = malloc(capacidade * sizeof(int));
    
    if(vetor == NULL){
        return 1;
    }
    
    printf("Digite numeros (0 para parar): \n");
    
    while(1){
        scanf("%d", &numero);
        
        if(numero == 0){
            break;
        }
        
        if(quantidade == capacidade){
            capacidade = capacidade * 2;
            
            int *temp = realloc(vetor, capacidade * sizeof(int));
            
            if(temp == NULL){
                free(vetor);
                return 1;
            }
            
            vetor = temp;
        }
        
        vetor[quantidade] = numero;
        quantidade++;
    }
    
    printf("Numeros digitados: \n");
    
    for(int i = 0; i < quantidade; i++){
        printf("%d\n", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}