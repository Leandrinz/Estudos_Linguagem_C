#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0;
    int numeros_desejados, numero_digitado;
    printf("Quantos numeros voce quer digitar: \n");
    scanf("%d", &numeros_desejados);
    while (x < numeros_desejados){
        if (x == 0){
            printf("Digite o numero: \n");
            scanf("%d", &numero_digitado);
            x++;
        }
        printf("Ultimo numero digitado: %d\n", numero_digitado);
        printf("Quantidade de numeros digitados: %d\n", x);
        printf("Digite o numero: \n");
        scanf("%d", &numero_digitado);
        x++;
    }
    printf("FIM DO PROGRAMA!!!");

    return 0;
}