#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int x = 7;
    int y = ~x + 1; //Precisa somar 1 devido ao espelho dos numeros
    printf("%d\n", y);
    
    return 0;
}