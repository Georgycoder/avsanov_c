#include <stdio.h>

int main(){
    int N;
    int sum = 0;
    printf("Введите N: \n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++){
    if (N % i == 0){
        sum += i;
    }
}
    printf("Сумма делителей числа %d = %d", N, sum);

    return 0;
}