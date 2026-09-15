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
    int cont;
    printf("Digite um texto: ");
    scanf("%s", s);
    
    for(int i = 0; i <= 3; i++){
        cont = 0;
        for(int j = 0; s[j] != '\0'; j++){
            if(*p == s[j]){
                cont++;
            }
        }
        printf("%c => %d\n", *p, cont);
        p++;
    }
    return 0;
}