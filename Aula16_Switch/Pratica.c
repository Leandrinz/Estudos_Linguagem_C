#include <stdio.h>
#include <stdlib.h>

int main(){
    char caractere;
    printf("Digite um símbolo de pontuação: ");
    scanf("%c", &caractere);
    switch (caractere){
        case '.': printf("Ponto.\n"); break;
        case ',': printf("Vírgula\n"); break;
        case ':': printf("Dois pontos\n"); break;
        case ';': printf("Ponto e virgula.\n"); break;
        default : printf("Nao eh pontuacao \n");
    }
    return 0;
}