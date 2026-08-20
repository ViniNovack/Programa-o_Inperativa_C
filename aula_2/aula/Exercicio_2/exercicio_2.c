#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    int y;
    int z;
    int a;

    for(int i = 1, j = 4; i < j; i++, j--){
        printf("Digite uma letra: ");
        scanf("%d", &a);
        switch(i){
            case 1:
                a = x;
                break;
            case 2:
                a = y;
                break;
            case 3:
                a = z;
                break;
        }
    }

    if(x > y && x > z){
        a = x
    } else if{
        ;
    }
    printf("%d, %d, %d", );
    return 0;
}