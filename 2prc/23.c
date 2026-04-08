#include <stdio.h>

int main(){
    int N;
    int count = 0;

    printf("Введите N: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
    if (N % i == 0){
        count++;
    }
}
    printf("Количество делителей %d : %d", N, count);
    return 0;
}