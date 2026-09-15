#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char* cidade = "Curitiba, PR";
    
    printf("%s\n", cidade);
    
    printf("cidade: %d carateres\n", strlen(cidade));
    
    printf("cidade: %d bytes\n", sizeof(cidade));
    
    putchar(cidade[0]);
    putchar(cidade[2]);
    putchar(cidade[4]);
    
    return 0;
}