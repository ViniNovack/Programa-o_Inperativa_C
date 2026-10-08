#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void showbitschar(char A){
    int len = sizeof(char) * 8;     // É nessesario fazer vezes 8 para tranformar de baits para bits

    for(int i = (len - 1); i >= 0; i--){
        char B = 1 << i;

        if(A & B){
            putchar('1');
        } else{
            putchar('0');
        }
    }
    putchar('\n');
}

int main(){
    // for(char ch = 'A'; ch <= 'Z'; ch++){
    //     printf("%c\t%d\t", ch, ch);

    //     showbitschar(ch);
    // }

    int x = 7;
    int y = ~x + 1; //Precisa somar 1 devido ao espelho dos numeros
    printf("%d\n", y);
    
    return 0;
}