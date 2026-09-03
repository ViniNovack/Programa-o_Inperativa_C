#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

double dobrar(double x);

int main(){
    double x = 4.0;
    double y = dobrar(x);
    printf("y = %.2f\n", y);
    return 0;
}

double dobrar(double x){
    return 2 * x;
}