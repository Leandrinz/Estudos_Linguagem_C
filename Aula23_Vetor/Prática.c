// Ler 5 notas e mostrar apenas as que são maiores ou iguais a 7
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    float notas[5];
    printf("Digite a nota dos 5 alunos: \n");
    for (i = 0; i < 5; i++){
        scanf("%f", &notas[i]);
    }
    for (i = 0; i < 5; i++){
        if (notas[i] >= 7){
            printf("%.2f\n", notas[i]);
        }
        else{
            continue;
        }
    }
    return 0;
}