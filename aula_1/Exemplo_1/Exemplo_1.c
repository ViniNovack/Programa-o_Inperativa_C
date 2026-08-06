#include <stdio.h>

int main_1();
int main_2();
int main_3();
int main_4();
int main_5();
int main_6();

int main()
{
    int temperatura = 20;
    temperatura = - 10;

    unsigned int idade = 30;
    idade = 40;

    printf("%d %u\n", temperatura, idade);

    printf("%zu\n", sizeof(int));

    printf("\n");

    main_1();

    printf("\n");

    main_2();

    printf("\n");

    main_3();

    return 0;
}

int main_1()
{
    printf("Ola, mundo\n");
    return 0;
}

int main_2()
{
    short temperatura = 20;
    temperatura = -10;

    unsigned short idade = 30;
    idade = 40;

    printf("%d %u\n", temperatura, idade);

    printf("%zu\n", sizeof(short));

    return 0;
}

int main_3()
{
    double PI = 3.14;
    double raio = 10.0;
    double area = PI * raio * raio;
    
    printf("%f\n", area);

    printf("%zu\n", sizeof(double));

    return 0;
}

int main_4()
{
    float PI = 3.14;
    float raio = 10.0;
    float area = PI * raio * raio;

    printf("%f\n", area);

    printf("%zu\n", sizeof(float));

    return 0;
}

int main_5()
{
    printf("Hello, world!");
    
    double PI = 3.14;

    double raio = 10.0;

    double area = PI * raio * raio;

    printf("%f\n", area);

    return 0;
}

int main_6()
{
    
}
