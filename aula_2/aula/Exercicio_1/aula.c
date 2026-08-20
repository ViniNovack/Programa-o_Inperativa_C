#include <stdio.h>
#include <stdbool.h>

int main(){
    int n1;
    int n2;
    int n;
    int m, me;

    for(int i = 1, j = 4; i < j; i++, j--) {
        printf("Digite o valor %d: ", i);
        scanf("%d", &n);
        if(i == 1){
            n1 = n;
        } else if(i == 2){
            if(n == n1){
                printf("Não se pode ter dois valores repetidos\n");
                while(true){
                    printf("Digite nova mente: ");
                    scanf("%d", &n);
                    if(n != n1){
                        break;
                    }
                }
            }
            n2 = n;
        }
    }

    if(n1 > n2){
        m = n1;
        me= n2;
    }else{
        m = n2;
        me = n1;
    }
    printf("A order cresente: %d, %d", me, m);
    return 0;
}