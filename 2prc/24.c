#include <stdio.h>

int main(){
    int N;
    int issimple = 1;

    printf("Введите N: \n");
    scanf("%d", &N);

    if (N <= 1){
        issimple = 0;
    }
    else{
        for (int i = 2; i < N; i++){
            if (N % i == 0){
                issimple = 0;
                break;
            }
            
        }
        
    }
    if (issimple == 1){
        printf("Число %d простое\n", N);
    }
    else{
        printf("Число %d не простое\n", N);
    }
    return 0;
}