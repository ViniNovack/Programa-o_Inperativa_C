#include <stdio.h>
#include <stdbool.h>

// Questão 1. Considere uma linguagem de programação fortemente tipada como,
// por exemplo, a linguagem C. Supondo que, nessa linguagem, haja um tipo
// para representar valores inteiros tal que o menor valor representável seja
// -128 e o maior seja 127 (no caso da linguagem C, o tipo char possui tal
// intervalo de valores), qual será o maior valor representável por esse
// mesmo tipo quando qualificado como "sem sinal" (unsigned), isto é, sem
// considerar valores negativos?
// Resposta: 256
// ____________________________________________________________________________________________
// Questão 2. Considere o programa na linguagem C a seguir.
// 01 int main() {
// 02 int x = 0;
// 03
// 04 return 0;
// 05 }
// Qual é o código necessário na linha 03 do programa para imprimir a
// quantidade de bytes que a variável x ocupa na memória?

// int main() {
//     printf("Digite o valor de n: ");
//     int x = getchar();
//     getchar();
//     sizeof(x);
//     printf("%d", x);
//     return 0;
// }
// ____________________________________________________________________________________________
// Questão 3. Considere o programa na linguagem C a seguir.
// 01 int main() {
// 02 int x = 0;
// 03
// 04 return 0;
// 05 }
// Qual é o código necessário na linha 03 do programa para imprimir o
// endereço de memória onde está alocada a variável x?

// int main() {
//     printf("Digite o valor de x: ");
//     int x = getchar();
//     getchar();
//     intptr_t endereso = x;
//     printf("%d", x);
//     return 0;
// }
// ____________________________________________________________________________________________
// Questão 4. Considere o seguinte programa na linguagem C.
// 
// 01 #include <stdio.h>
// 02
// 03 int main()
// 04 {
// 05 float distancia; // em metros
// 06 int tempo; // em segundos
// 07 printf("Digite a distancia em metros: ");
// 08 scanf("%f", &distancia);
// 09 printf("Digite o tempo em segundos: ");
// 10 scanf("%3d", &tempo);
// 11 float velocidade = distancia / tempo;
// 12 printf("velocidade = %.1f m/s\n", velocidade);
// 13 return 0;
// 14 }
// 
// Como exemplo, segue uma possível interação do programa com o usuário via
// console.
// Digite a distancia em metros: 1000.0
// Digite o tempo em segundos: 125
// velocidade = 8.0 m/s
// Qual será a velocidade impressa pelo programa se os seguintes dados forem
// fornecidos pelo usuário:
// Digite a distancia em metros: 10000.0
// Digite o tempo em segundos: 2500
// X (a) velocidade = 4.0 m/s
//   (b) velocidade = 40.0 m/s
//   (c) velocidade = 25 m/s
//   (d) velocidade = 0.25 m/s
//   (e) velocidade = 10.0 m/s

// int main() {
//     float distancia; // em metros
//     int tempo; // em segundos
//     printf("Digite a distancia em metros: ");
//     scanf("%f", &distancia);
//     printf("Digite o tempo em segundos: ");
//     scanf("%3d", &tempo);
//     float velocidade = distancia / tempo;
//     printf("velocidade = %.1f m/s\n", velocidade);
//     return 0;
// }
// ____________________________________________________________________________________________
// Questão 5. Considere o seguinte programa na linguagem C.
// 01 #include <stdio.h>
// 02
// 03 int main()
// 04 {
// 05 const double taxa_desconto = 0.15;
// 06 double salario_bruto, salario_liquido, desconto;
// 07 printf("Digite o salario bruto: ");
// 08
// 09 desconto = salario_bruto * taxa_desconto;
// 10 printf("desconto = %.2f\n", desconto);
// 11 salario_liquido = salario_bruto - desconto;
// 12 printf("salario liquido = %.2f\n", salario_liquido);
// 13 return 0;
// 14 }
// Como exemplo, segue uma possível interação do programa com o usuário via
// console.
// Digite o salario bruto: 200.00
// desconto = 30.00
// salario liquido = 170.00
// Qual das alternativas abaixo contém o código necessário na linha 08 do
// programa para que o valor da variável salario_bruto seja lido corretamene
// a partir do teclado?
//   (a) scanf("%f", &salario_bruto);
//   (b) scanf("%.2f", salario_bruto);
// X (c) scanf("%lf", &salario_bruto);
//   (d) scanf("%lf", salario_bruto);
//   (e) scanf("%.2lf", &salario_bruto);

// int main()
// {
//     const double taxa_desconto = 0.15;
//     double salario_bruto, salario_liquido, desconto;
//     printf("Digite o salario bruto: ");
//     scanf("%lf", &salario_bruto);
//     desconto = salario_bruto * taxa_desconto;
//     printf("desconto = %.2f\n", desconto);
//     salario_liquido = salario_bruto - desconto;
//     printf("salario liquido = %.2f\n", salario_liquido);
//     return 0;
// }
// ____________________________________________________________________________________________
// Questão 6. Considere o seguinte programa na linguagem C.
// 01 #include <stdio.h>
// 02
// 03 int main()
// 04 {
// 05 char c = getchar();
// 06 char x = c + 5;
// 07 putchar(x);
// 08 return 0;
// 09 }
// Preencha o quadro abaixo com o caráter impresso pelo programa (valor da
// variável x) se o caráter fornecido como entrada for a letra A?
// Resposta: Se eu incerir A ele vai e retornar F, porque o tipo [char] é m tipo númerico por
//           trás dos panos. Quando ele salva uma letra ele na verdade está salvando o código
//           numérico que representa essa letra.   

// int main() {
//     char c = getchar();
//     char x = c + 5;
//     putchar(x);
//     return 0;
// }