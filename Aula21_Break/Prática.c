#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(j > 2){
                printf("%d\n", j);
                break; // Pula antes da condição do for ser falsa, ou seja, j < 10
            }
            else{
                printf("%d\n", j);
            }
        }
    }

    return 0;
}