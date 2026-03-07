#include <stdio.h>

int main(){
    int vetor[5][5][5];
    int i, j, k;

    for (i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            for(k = 0; k < 5; k++){
                if (i == j && j == k) {
                    vetor[i][j][k] = 1;
                } else {
                    vetor[i][j][k] = 0;
                }
                printf("%d ", vetor[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}