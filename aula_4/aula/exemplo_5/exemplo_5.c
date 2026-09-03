#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double a, b, c;

double polinomio_segundo_grau(double x){
    return (a * pow(x, 2) + b * x + c);
}

void imprimir_ponto_da_curva(double x){
    double y = polinomio_segundo_grau(x);
    printf("(%7.2f, %9.2f)\n", x, y);
}

int main(){
    puts("Forma geral: p(x) = a x^2 + bx + c");
    
    printf("Digite o coeficiente a: ");
    scanf("%lf", &a);
    printf("Digite o coeficiente b: ");
    scanf("%lf", &b);
    printf("Digite o coeficiente c: ");
    scanf("%lf", &c);
    
    imprimir_ponto_da_curva(-1);
    imprimir_ponto_da_curva(0);
    imprimir_ponto_da_curva(2.5);
    imprimir_ponto_da_curva(5);
    imprimir_ponto_da_curva(6);
}


// pow(x, 2) -> É usado para fazer potencia