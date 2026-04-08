#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int main() {
    int N;
    
    printf("Введите число N: ");
    scanf("%d", &N);
    
    printf("Числа от 1 до %d, равные сумме факториалов своих цифр:\n", N);
    
    for (int num = 1; num <= N; num++) {
        int temp = num;
        int sum = 0;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + factorial(digit);
            temp = temp / 10;
        }
        
        if (sum == num) {
            printf("%d\n", num);
        }
    }
    
    return 0;
}