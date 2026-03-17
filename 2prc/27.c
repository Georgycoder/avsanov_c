#include <stdio.h>

int main(){
    int N;
    int found = 0;

    printf("Введите число N:");
    scanf("%d", &N);

    for(int i = 1; i<= N; i++){
        if(i % 17 == 0){
            printf("Первое число, которое делится на 17: %d\n", i);
            found = 1;
            break;
        }  
    }
        if(found == 0){
        printf("В диапазоне 1.. %d нет числа, которое делится на 17", N);
        }

    return 0;
}