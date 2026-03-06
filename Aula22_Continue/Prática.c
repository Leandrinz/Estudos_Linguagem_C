// Programa que não vai mostrar o número 4
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    for (i = 0; i <= 5; i++){
        if (i == 4){
            continue; // Pedi para pular quando a repetição estivesse com o contador (i) fosse == 4
        }
        printf("%d\n", i);
    }
    return 0;
}