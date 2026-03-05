#include <stdio.h>
#include <stdlib.h>

int main(){
    int inicio, fim;
    printf("Digite o valor inicial: \n");
    scanf("%d", &inicio);
    printf("Digite o valor do fim: \n");
    scanf("%d", &fim);
    for (inicio; inicio <= fim; inicio++){
        printf("%d\n", inicio);
    }

    return 0;
}