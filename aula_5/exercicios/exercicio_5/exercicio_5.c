#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

#define ACGT "acgt"

int main(){
    char* p = ACGT;
    char s[100];
    
    printf("Digite um texto: ");
    scanf("%s", s);
    
    int cont = 0;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; s[j] != '\0'; j++){
            if(p[i] == s[j]){
                cont++;
                break;
            }
        }
    }
    
    if(cont == 1){
        printf("A string '%s' e GENERICA", s);
    } else{
        printf("A string '%s' nao e GENERICA", s);
    }
    
    return 0;
}