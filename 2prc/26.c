#include <stdio.h>

int main(){
    int N;

    printf("Введите число N: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++){
        int sum = 0;
        int temp = i;

        while(temp > 0){
            sum += temp % 10;
            temp = temp / 10;
        }
        if(sum > 10){
            printf("%d ", i);
        }
    }
    return 0;
}