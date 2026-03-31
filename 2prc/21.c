#include <stdio.h>

int main(){
    int N;
    int result = 1;
    printf("Введите N: \n");
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        if (i % 2 != 0){
            result = result * i;
        }
    }
    printf("Произведение нечетных чисел от 1 до %d равно %d\n", N, result);

    return 0;
}