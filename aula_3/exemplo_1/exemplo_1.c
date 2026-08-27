#include <stdio.h>
#include <stdbool.h>

int main(){

    int x = 82;
    int* y = &x;
    
    printf( "%d\n", x );
    printf( "%d\n", y );
    printf( "%d\n", &x );
    printf( "%d\n", &y );
    printf( "%d\n", *y );

    return 0;
}

// com o * o int comesa a referenciar um endereço de memoria