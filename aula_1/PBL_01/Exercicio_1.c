#include <stdio.h>
#include <stdbool.h>

int main(){
    int n1 = 0;
    int n2 = 0;
    
    int i = 1;
    while(i < 4){
        printf("Digite o algarismo %d do N1: ", i);
        char n = getchar();
        getchar();
        n1 = n1 * 10 + (n - '0');
        i++;
    } 
    
    printf("\n");

    i = 1;
    while(i < 4){
        printf("Digite o algarismo %d do N2: ", i);
        char n = getchar();
        getchar();
        n2 = n2 * 10 + (n - '0');
        i++;
    }

    printf("\n");

    float q = n1 / n2;
    printf("O resultado da divisao de N1 com N2 e %.5f\n", q);

    return 0;
}
