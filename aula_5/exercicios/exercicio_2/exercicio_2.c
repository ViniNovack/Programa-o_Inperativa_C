#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char palavraA[100];
    char palavraB[100];
    
    printf("Digite A: ");
    scanf("%s", palavraA);
    
    printf("Digite B: ");
    scanf("%s", palavraB);
    
    int tamanhoA = strlen(palavraA);
    int tamanhoB = strlen(palavraB);
    int tamanhoC = tamanhoA + tamanhoB;
    
    char palavraC[tamanhoC];
    
    int contC = 0;
    for(int i = 0; palavraA[i] != '\0'; i++){
        for(int j = 0; palavraB[j] != '\0'; j++){
            if(palavraB[j] == palavraA[i]){
                palavraC[contC] = palavraB[j];
                contC++;
                palavraC[contC] = ' ';
                contC++;
                break;
            }
        }
    }
    
    palavraC[contC] = '\0';
    printf("\n%s", palavraC);
    
    return 0;
}