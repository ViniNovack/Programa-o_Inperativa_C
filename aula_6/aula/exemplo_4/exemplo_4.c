#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void showbitschar(char *A){
    int len = sizeof(char) * 8;

    for(int i = (len - 1); i >= 0; i--){
        char B = 1 << i;
        if(*A & B){
            putchar('1');
        } else{
            putchar('0');
        }
    }
    putchar('\n');
}

int main(){
    char saudacao[] = "o";
    
    showbitschar(saudacao);
}
