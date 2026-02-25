#include <stdio.h>
#include <stdlib.h>

int main(){ 
    float x = 10.0;
    float y = 3.0;
    
    float soma = x + y;
    float subtracao = x - y;
    float multiplicacao = x * y;
    float divisao = x / y;

    printf("Numeros = %.2f e %.2f\n", x, y);
    printf("Soma = %.2f\nSubtracao = %.2f\nMultiplicacao = %.2f\nDivisao = %.2f", soma, subtracao, multiplicacao, divisao);
    return 0;
}