#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#define main2

double dobrar(double);

main(){
    double x = 4.0;
    double y = dobrar(x);
    printf("y = %.2f\n", y);
    return 0;
}