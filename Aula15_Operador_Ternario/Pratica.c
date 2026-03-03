#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    printf("Digite o valor de X: \n");
    scanf("%d", &x);
    printf("Digite o valor de Y: \n");
    scanf("%d", &y);

    (x > y) ? printf("X eh o maior\n")
            : printf("Y eh o maior.\n");
    return 0;
}