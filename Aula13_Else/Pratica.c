#include <stdio.h>
#include <stdlib.h>


int main(){
    int numero;
    printf("-----------------------------------\n");
    printf("NUMERO PAR OU IMPAR\n");
    printf("-----------------------------\n");
    printf("Digite um valor do Número para verificar se é par ou ímpar: \n");
    scanf("%d", &numero);
    if (numero % 2 == 0){
    printf("O número %d eh Par!!!", numero);
    }
    else{
        printf("O número %d eh Ímpar!!!", numero);
    }
    return 0;
}