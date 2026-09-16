#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define MAX 10

int main(){
    char palavraA[100];
    char palavraB[100];

    printf("Digite A: ");
    scanf("%s", palavraA);
    
    printf("\nDigite B: ");
    scanf("%s", palavraB);
    
    strcat(palavraA, palavraB);
    
    printf("\n%s", palavraA);
    
    return 0;
}