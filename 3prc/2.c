#include <stdio.h>

int main() {
    int N;
    int multip = 1;
    int havezero = 0;   
    int temp;
    int num;

    printf("Введите число N: ");
    scanf("%d", &N);

    if(N == 0) {
        printf("Произведение чисел равно: 0\n");
        return 0;
    }

    temp = N;

    while(temp > 0) {
        num = temp % 10;
        if(num != 0) {
            multip *= num;
            havezero = 1;
        }
        temp = temp / 10;
    }

    if (havezero == 1) {
        multip = 0;
    }

    printf("Произведение цифр числа %d равно: %d\n", N, multip);
    
    return 0;
}