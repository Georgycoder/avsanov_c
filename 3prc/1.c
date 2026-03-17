#include <stdio.h>

int main() {
    int N;
    int sum = 0;

    printf("Введите число N: ");
    scanf("%d", &N);

    int digit = N;

        while(digit > 0) {
            sum += digit % 10;
            digit = digit / 10;
        }
            printf("Сумма цифр равна: %d", sum);
    
    return 0;
}