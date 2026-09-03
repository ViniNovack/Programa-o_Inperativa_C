#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void tangente(double x, double* y){
    *y = sin(x) / cos(x);
}

int main(){
    double a = M_PI / 3;
    double b = 0;

    tangente(a, &b);

    printf("%f %f\n", a, b);

    return 0;
}