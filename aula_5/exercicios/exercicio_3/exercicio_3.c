#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char caracteresA[100];
    char caracteresB[100];
    
    printf("Digite A: ");
    scanf("%s", caracteresA);
    
    printf("Digite B: ");
    scanf("%s", caracteresB);
    
    int tamanhoA = strlen(caracteresA);
    int tamanhoB = strlen(caracteresB);
    int tamanhoC = tamanhoA + tamanhoB;
    
    char caracteresC[tamanhoC];
    
    int contC = 0;
    for(int i = 0; caracteresA[i] != '\0'; i++){
         bool verf = true;
        for(int j = 0; caracteresB[j] != '\0'; j++){
            if(caracteresA[i] == caracteresB[j]){
                verf = false;
                break;
            }
        }
        if(verf == true){
            caracteresC[contC] = caracteresA[i];
            contC++;
            caracteresC[contC] = ' ';
            contC++;
        }
    }
    
    contC++;
    caracteresC[contC] = '\0';
    printf("%s", caracteresC);

    return 0;
}