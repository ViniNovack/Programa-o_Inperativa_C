#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    char material[] = "Concreto";

    char* p = material;
    putchar(*p);

    p++;
    putchar(*p);

    p = &material[4];
    putchar(*p);

    *p = 'l';

    return 0;
}